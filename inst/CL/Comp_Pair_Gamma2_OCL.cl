#include "header3.h"

__kernel void Comp_Pair_Gamma2_OCL(__global const double *coordx,__global const double *coordy,__global const double *mean, __global const double *data, __global double *res,__global const int *int_par,__global const double *dou_par)
{
    
    int j, gid = get_global_id(0);
    
    
    double maxdist = dou_par[6];
    double nuis0 = dou_par[4];
    double nuis1 = dou_par[5];
    double nuis2 = dou_par[9];
    double nuis3 = dou_par[10];
    double par0 = dou_par[0];
    double par1 = dou_par[1];
    double par2 = dou_par[2];
    double par3 = dou_par[3];
    double REARTH = dou_par[8];
    
    
    int cormod      = int_par[0];
    int ncoord      = int_par[1];
    int weigthed    = int_par[2];
    int type        = int_par[3];
    double bl,corr,zi,zj,lags,bb=0.0,weights=1.0,sum=0.0;
    
    for (j = 0; j < ncoord; j++) {
        if (   ((gid+j)!= j) && ((gid+j) < ncoord))
        {
            lags = dist(type,coordx[gid+j],coordx[j],coordy[gid+j],coordy[j],REARTH);
            if(lags<=maxdist){
                zi=data[j];
                zj=data[gid+j];
                
                if(!isnan(zi)&&!isnan(zj) )
                {
                    corr=CorFct(cormod,lags,0,par0,par1,par2,par3,0,0);
                    
                    if(weigthed) {weights=CorFunBohman(lags,maxdist);}
                    bl=biv_gamma((1-nuis0)*corr,zi,zj,mean[j],mean[gid+j],nuis2); 
                    sum+=  weights*log(bl);
                }
            }
        }
        else
            continue;
    }
    //if(isnan(sum)) sum=LOW;
    res[gid] = sum;
}

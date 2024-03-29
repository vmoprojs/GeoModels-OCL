#include "header3.h"

/******************************************************************************************/
/********************* SPATIAL CASE *****************************************************/
/******************************************************************************************/
__kernel void Comp_Cond_Gauss_st2mem_OCL(__global const double *data1,__global const double *data2,__global const double *mean1,__global const double *mean2, __global const double *lags, __global const double *lagt, __global double *res,__global const int *int_par,__global const double *dou_par)
{
    int j, gid = get_global_id(0);
    double corr, bl, l2,weights=1.0, sum=0.0,zi,zj;
    //double l2=0.0;
    double nugget = dou_par[4];// nugget
    double nuis1 = dou_par[5];// sill
    //double nuis2 = dou_par[9];
    //double nuis3 = dou_par[10];

    double par0 = dou_par[0];
    double par1 = dou_par[1];
    double par2 = dou_par[2];
    double par3 = dou_par[3];
    double maxdist = dou_par[6];
    double maxtime = dou_par[8];
    double par4 = dou_par[13];
    double par5 = dou_par[14];
    double par6 = dou_par[15];
    
    //double REARTH = dou_par[8];
    //int ncoord  = int_par[1];
    int cormod  = int_par[0];
    int weigthed    = int_par[2];
    //int type    = int_par[3];
    zi = data1[gid];zj =data2[gid];
   if(!isnan(zi)&&!isnan(zj) )
    {
        
        //corr = CorFct(cormod, lags[gid], lagt[gid], par0,par1,par2,par3,0,0);
        corr = CorFct_st(cormod,lags[gid], lagt[gid],par0,par1,par2,par3,par4,par5,par6,0,0);
        bl=log_biv_Norm((1-nugget)*corr,data1[gid],data2[gid],mean1[gid],mean2[gid],nuis1,0);
        l2= dnorm(data2[gid], mean2[gid],sqrt(nuis1),1);
        //if(weigthed) {weights=CorFunBohman(lags[gid],maxdist)*CorFunBohman(lagt[gid],maxtime);}
        
        sum+= (bl-l2)*weights;
        res[gid] = sum;
    }
}

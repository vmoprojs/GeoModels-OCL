#include "header3.h"

/******************************************************************************************/
/********************* SPATIAL CASE *****************************************************/
/******************************************************************************************/
__kernel void Comp_Cond_LogGauss2mem_OCL(__global const double *data1,__global const double *data2,__global const double *mean1,__global const double *mean2, __global const double *lags, __global double *res,__global const int *int_par,__global const double *dou_par)
{
    int j, gid = get_global_id(0);
    double corr, bl, l1,weights=1.0, sum=0.0,zi,zj;
    double l2=0.0;
    //double maxdist = dou_par[6];
    double nugget = dou_par[4];//nuis0
    double sill = dou_par[5];//nuis1
    double nuis2 = dou_par[9];//nuis2
    double nuis3 = dou_par[10];//nuis3
    
    double par0 = dou_par[0];
    double par1 = dou_par[1];
    double par2 = dou_par[2];
    double par3 = dou_par[3];
    //double REARTH = dou_par[8];
    
    //int ncoord  = int_par[1];
    int cormod  = int_par[0];
    //int type    = int_par[3];
    zi = data1[gid];zj =data2[gid];
   if(!isnan(zi)&&!isnan(zj) )
    {
        corr = CorFct(cormod, lags[gid], 0, par0,par1,par2,par3,0,0);
        
        //l1=one_log_loggaussian(zi,mean1[gid],sill);
        l2=one_log_loggaussian(zj,mean2[gid],sill);
        bl=log(d2lognorm(zi,zj,sill,nugget, mean1[gid], mean2[gid],(1-nugget)*corr))-(l2);
        sum+= (bl)*weights;
        
        res[gid] = sum;
        
    }
    
    
}

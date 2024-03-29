#include "header3.h"

/******************************************************************************************/
/********************* SPATIAL CASE *****************************************************/
/******************************************************************************************/
__kernel void Comp_Pair_Gauss_misp_Tukeygh2mem_OCL(__global const double *data1,__global const double *data2,__global const double *mean1,__global const double *mean2, __global const double *lags, __global double *res,__global const int *int_par,__global const double *dou_par)
{
    int j, gid = get_global_id(0);
    double corr,corr2, bl, l1,weights=1.0, sum=0.0,zi,zj;
    double l2=0.0;
    //double maxdist = dou_par[6];
    double nugget = dou_par[4];
    double sill = dou_par[5];
    double eta = dou_par[9];
    double tail = dou_par[10];
    double par0 = dou_par[0];
    double par1 = dou_par[1];
    double par2 = dou_par[2];
    double par3 = dou_par[3];
    int cormod  = int_par[0];
    double mu,vv,u,eta2;

    eta2=eta*eta;
    u=1-tail;
    mu=(exp(eta2/(2*u))-1)/(eta*sqrt(u));
    vv=((exp(2*eta2/(1-2*tail))-2*exp(eta2/(2*(1-2*tail)))+1)/(eta2*
                           sqrt(1-2*tail))-mu*mu);
    
   // printf("Hola\n");
    zi = data1[gid];
    zj = data2[gid];
   if(!isnan(zi)&&!isnan(zj) )
    {
    
        corr = (1-nugget)*CorFct(cormod, lags[gid], 0, par0,par1,par2,par3,0,0);
        corr2=corr_tukeygh(corr,eta,tail);
        
        bl = log_biv_Norm(corr2,zi,zj,mean1[gid]+sqrt(sill)*mu,mean2[gid]+sqrt(sill)*mu, sill*vv,0);
        
        sum+= (bl)*weights;
        
        res[gid] = sum;
        
    }
    
    
}

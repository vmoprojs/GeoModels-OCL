double dnorm(double x, double mu, double sigma, int give_log);
double bessel_ii(double x, double alpha, double expo);
double bessel_k(double x, double alpha, double expo);
double bessel_k_ex(double x, double alpha, double expo, double *bk);
static void K_bessel(double *x, double *alpha, int *nb,
                     int *ize, double *bk, int *ncalc);
double bessel_i_ex(double x, double alpha, double expo, double *bi);
double Rf_gamma_cody(double x);
static void I_bessel(double *x, double *alpha, int *nb,
                     int *ize, double *bi, int *ncalc);
double fmax2(double x, double y);

double biv_Kumara2(double rho,double zi,double zj,double ai,double aj,double shape1,double shape2,double min,double  max);
double one_log_kumma2(double z,double m, double shape1,double shape2,double min,double  max);


double biv_beta(double rho,double zi,double zj,double ai,double aj,double shape1,double shape2,double min,double max);

double biv_sinh(double corr,double zi,double zj,double mi,double mj,double skew,double tail,double vari);
double d2lognorm(double x, double y, double sill,double nugget, double mux,double muy,double rho);
//double biv_skew(double corr,double zi,double zj,double mi,double mj,double vari,double skew);
double biv_skew(double corr,double z1,double z2,double mi,double mj,double vari,double skew,double nugget);
double biv_skew2(double corr,double zi,double zj,double vari1,double vari2,double rho ,double skew1,double skew2);
double biv_gamma(double corr,double zi,double zj,double mui, double muj, double shape);
double biv_binom(int NN, int u, int v, double p01,double p10,double p11);
double pbnorm(int cormod, double h, double u, double mean1, double mean2, double nugget, double var,double par0,double par1,double par2,double par3, double thr);
double pbnorm22(double lim1,double lim2,double corr);
double digammaRD(double x);
//double biv_T(double rho,double zi,double zj,double nuu);
double biv_T(double rho, double zi, double zj, double nuu,double nugget);
double appellF4(double a, double b, double c, double d, double x, double y);
double hyp2f1aux1( double a,double b,double c,double x);
double hyp2f1aux2( double a,double b,double c,double x);
double gamota (double x, double y);

double d22norm(double x, double y,double v11,double v22,double v12);

double dpois_raw(double x, double lambda, int give_log);
double dpois(double x, double lambda, int give_log);
double corr_skewt(double corr,double df,double skew);

/*
double bessel_jj(double x, double alpha, double expo);
static void II_bessel(double *x, double *alpha, int *nb,
                      int *ize, double *bi, int *ncalc);
double bessel_ii(double x, double alpha, double expo);
double bessel_ii_minus(double x, double alpha, double expo);
double bessel_kk(double x, double alpha, double expo);
static void KK_bessel(double *x, double *alpha, int *nb,
                      int *ize, double *bk, int *ncalc);
*/

double dbinom_raw(double x, double n, double p, double q, int give_log);
double dbinom(double x, double n, double p, int give_log);
double  bd0(double x, double np);
double  stirlerr(double n);
//double log1p(double x);
int  chebyshev_init(double *dos, int nos, double eta);
double  chebyshev_eval(double x, const double *a, const int n);
int R_nonint(double x);
double R_D_exp(double x,int give_log);
double R_D__0(int give_log);
double R_D__1(int give_log);
double R_DT_1(int lower_tail);
double R_DT_0(int lower_tail);
double R_D_fexp(double f,double x,int give_log);




double beta (double x, double y);
double int_gen(double x,double mu, double alpha,double lag,double supp);
void integr_gen(double *x, int n, void *ex);
double wendintegral(double x, double par0,double par1,double par2);
double qnorm55(double p, double mu, double sigma, int lower_tail, int log_p);
double pnorm_OCL(double x, double mu, double sd);
double Dist_chordal(double loni, double lati, double lonj, double latj,double radius);
double Dist_geodesic(double loni, double lati, double lonj, double latj,double radius);
double dist(int type_dist,double coordx,double locx,double coordy,double locy,double radius);
double CorFunCauchy(double lag, double power2, double scale);
double CorFunStable(double lag, double power, double scale);
double CorFunDagum(double lag, double power1, double power2, double scale);
double CorFunGenCauchy(double lag, double power1, double power2, double scale);
double CorFunSferical(double lag, double scale);
double CorFunW0(double lag,double scale,double smoo);
double CorFunW1(double lag,double scale,double smoo);
double CorFunW2(double lag,double scale,double smoo);
double CorFunWave(double lag, double scale);
double CorFunWitMat(double lag, double scale, double smooth);
double CorFunW_gen(double lag,double power1,double smooth,double scale);
double CorFct(int cormod, double h, double u, double par0,double par1,double par2,double par3, int c11, int c22);
double CorFct_st(int cormod, double h, double u, double par0,double par1,double par2,double par3,double par4,double par5,double par6, int c11, int c22);
double CorFct_st1(int cormod, double h, double u, double par0,double par1,double par2,double par3,double par4,double par5,double par6, int c11, int c22);
double Variogram(int cormod, double h, double u, double nugget, double var, double par0,double par1,double par2,double par3);
double Variogram_st(int cormod, double h, double u, double nugget, double var, double par0,double par1,double par2,double par3,double par4,double par5,double par6);
double CorFunBohman(double lag,double scale);
double CorFunBohman1(double lag,double scale);
double CorFunBohman2(double lag,double scale);
double biv_wrapped (double alfa,double u, double v,double mi,double mj,double nugget,double sill,double corr);
double pbnorm_st(int cormod, double h, double u, double mean1, double mean2, double nugget, double var,double par0,double par1,double par2,double par3,double par4,double par5,double par6, double thr);
double aux_biv_binomneg_simple(int NN, int u, double p01,double p10,double p11);
double aux_biv_binomneg (int NN, int u, int v, double x,double y,double p11);
double biv_binomneg (int NN, int u, int v, double p01,double p10,double p11);
double biv_poisbin (int NN, int u, int  v, double p01,double p10,double p11);
double biv_poisbinneg (int NN, int u, int v, double p01,double p10,double p11);
double biv_Logistic(double corr,double zi,double zj,double mui, double muj, double beta);
double biv_LogLogistic(double corr,double zi,double zj,double mui, double muj, double shape);
double biv_Weibull(double corr,double zi,double zj,double mui, double muj, double shape);
double appellF4_mod(double nu,double rho,double x,double y,double nugget);
double biv_two_pieceT(double rho,double zi,double zj,double sill,double nuu,double eta,
                      double p11,double mui,double muj,double nugget);
double biv_half_Gauss(double rho,double zi,double zj);
double biv_two_pieceGaussian(double rho,double zi,double zj,double sill,double eta,
                             double p11,double mui,double muj);
double log_biv_Norm(double corr,double zi,double zj,double mi,double mj,double vari, double nugget);
double log_biv_Norm1(double corr,double zi,double zj,double mi,double mj,double vari, double nugget);
double Shkarofski(double lag, double a,double b, double k);
//double biv_Kumara(double rho,double zi,double zj,double ai,double aj,double shape1,double shape2);
double biv_Kumara(double rho,double zi,double zj,double ai,double aj,double shape1,double shape2,double min,double  max);

double log_biv_Norm_mem(double corr,double zi,double zj,double mi,double mj,double vari, double nugget);
double one_log_tukeyh(double z,double m, double sill, double tail);

double asy_log_besselI(double z,double nu);

double biv_tukey_h(double corr,double data_i, double data_j, double mean_i, double mean_j, double tail, double sill);
double LambertW(double z);
double inverse_lamb(double x,double tail);
double dbnorm(double x_i,double x_j,double mean_i,double mean_j,double sill,double corr);
double corr_tukeygh(double rho,double eta,double tail);



double hyp2f1_neg_c_equal_bc(double a, double b, double x);
double hyp2f1ra(double a, double b, double c, double x,double *loss);
double lgam(double x);
double lgam_sgn(double x, int *sign);
double hyt2f1( double a, double b, double c, double x, double *loss );
double hys2f1( double a,double b,double c,double x,double *loss );
double hyp2f1( double a,double b,double c,double x);
double hypergeo(double a,double b,double c,double x);
double polevl(double x,  double *coef, int N);
double p1evl(double x,  double *coef, int N);

double biv_two_pieceTukeyh(double rho,double zi,double zj,double sill,double eta,double tail,
                           double p11,double mui,double muj);

double biv_half_Tukeyh(double rho,double ti,double tj,double tail);


double biv_Poisson(double corr,int r, int t, double mean_i, double mean_j);
double  binomialCoeff(int n, int k);
double P00(double corr,int r, int t, double mean_i, double mean_j);
double Pr0(double corr,int r, int t, double mean_i, double mean_j);
double Prr(double corr,int r, int t, double mean_i, double mean_j);
double Prt(double corr,int r, int t, double mean_i, double mean_j);


double igam_fac(double a, double x);

double pnorm(double x, double mu, double sigma, int lower_tail, int log_p);
void pnorm_both(double x, double *cum, double *ccum, int i_tail, int log_p);
double one_log_tukeyhh(double z,double m, double sill, double h1,double h2);
double one_log_two_pieceGauss(double z,double m, double sill, double eta);
double one_log_two_pieceTukey(double z,double m, double sill,double tail, double eta);
double one_log_two_pieceT(double z,double m, double sill, double df, double eta);
double one_log_T(double z,double m, double sill, double df);
double one_log_gamma(double z,double m, double shape);
double one_log_weibull(double z,double m, double shape);
double one_log_loggaussian(double z,double m, double sill);
double one_log_sas(double z,double m, double skew, double tail,  double vari);
double one_log_negbinom_marg(int u,int N, double p);
double one_log_beta(double z, double shape1,double shape2,double min,double  max);
double one_log_kumma(double z,double m, double shape1,double shape2,double min,double  max);




void  hyperg_call(double *a,double *b,double *x,double *res);
int is_nonpos_int(double x);
double poch(double a, double m);
double aprox_reg_1F1(int n, int m,double z);
double regularized1F1(int n, int m,double z);
void  reghyperg_call(int *a,int *b,double *x,double *res);
double Poch(int q,int n);
double hyperg(double a, double b,double  x);
double hy1f1p(double a, double b, double x, double *err);
double hy1f1a(double a, double b, double x, double *err);
double hyp2f0(double a, double b, double x, int type, double *err);


double corr_pois(double rho,double mi,double mj);
double dNnorm(double dat1,double dat2,double s1,
              double s2,double rho);

//#pragma OPENCL EXTENSION cl_khr_fp64 : enable
#define LOW -1.0e15
#define M_LN_2PI    1.837877066409345483560659472811
#define M_2PI        6.283185307179586476925286766559


// For biv_T
#define EPS1 1.0e-10
#define DEPSILON 10e-16
#define ETHRESH 1.0e-12
#define MACHEP   1.11022302462515654042E-16   /* 2**-53 */
#define MAXNUM   1.79769313486231570815E308    /* 2**1024*(1-MACHEP) */
#define EEEE 2.718281828459045235360287471352662497757247093699959574966


#define EPS 2.2204460492503131e-16
#define EPS2 1.0e-10
#define NPY_NAN NAN
#define MAX_ITERATIONS 10000
#define NPY_INFINITY 1.7976931348623157e+308
#define NPY_PI M_PI
#define MAXLGM 2.556348e305
#define LS2PI  0.91893853320467274178
#define LOGPI  1.14472988584940017414

#define MAXERR 1e-6



// ++++++ ST marginals

double one_log_SkewGauss(double z,double m, double vari, double skew);

// ++++++ END marginals

//************************************** ST igam.c*****************************************

#ifdef MAXITER
#undef MAXITER
#endif
#define MAXITER 2000
#define IGAM 1
#define IGAMC 0
#define SMALL 20
#define LARGE 200
#define SMALLRATIO 0.3
#define LARGERATIO 4.5
#define NPY_INFINITY 1.7976931348623157e+308
#define NPY_PI_4 .78539816339744830962
#define SQ2OPI .79788456080286535588
#define MAXLGM 2.556348e305
#define MAXLOG 7.08396418532264106224E2    /* log 2**1022 */
#define NPY_SQRT1_2   0.707106781186547524400844362104849039  /* 1/sqrt(2) */
#define NPY_SQRT2     1.414213562373095048801688724209698079  /* sqrt(2) */
#define NPY_EULER     0.577215664901532860606512090082402431  /* Euler constant */




/* This file was automatically generated by _precomp/gammainc.py.
 * Do not edit it manually!
 */

#ifndef IGAM_H
#define IGAM_H

#define KIC 25
#define NIC 25

__constant double d[KIC][NIC] =
{{-3.3333333333333333e-1, 8.3333333333333333e-2, -1.4814814814814815e-2, 1.1574074074074074e-3, 3.527336860670194e-4, -1.7875514403292181e-4, 3.9192631785224378e-5, -2.1854485106799922e-6, -1.85406221071516e-6, 8.296711340953086e-7, -1.7665952736826079e-7, 6.7078535434014986e-9, 1.0261809784240308e-8, -4.3820360184533532e-9, 9.1476995822367902e-10, -2.551419399494625e-11, -5.8307721325504251e-11, 2.4361948020667416e-11, -5.0276692801141756e-12, 1.1004392031956135e-13, 3.3717632624009854e-13, -1.3923887224181621e-13, 2.8534893807047443e-14, -5.1391118342425726e-16, -1.9752288294349443e-15},
    {-1.8518518518518519e-3, -3.4722222222222222e-3, 2.6455026455026455e-3, -9.9022633744855967e-4, 2.0576131687242798e-4, -4.0187757201646091e-7, -1.8098550334489978e-5, 7.6491609160811101e-6, -1.6120900894563446e-6, 4.6471278028074343e-9, 1.378633446915721e-7, -5.752545603517705e-8, 1.1951628599778147e-8, -1.7543241719747648e-11, -1.0091543710600413e-9, 4.1627929918425826e-10, -8.5639070264929806e-11, 6.0672151016047586e-14, 7.1624989648114854e-12, -2.9331866437714371e-12, 5.9966963656836887e-13, -2.1671786527323314e-16, -4.9783399723692616e-14, 2.0291628823713425e-14, -4.13125571381061e-15},
    {4.1335978835978836e-3, -2.6813271604938272e-3, 7.7160493827160494e-4, 2.0093878600823045e-6, -1.0736653226365161e-4, 5.2923448829120125e-5, -1.2760635188618728e-5, 3.4235787340961381e-8, 1.3721957309062933e-6, -6.298992138380055e-7, 1.4280614206064242e-7, -2.0477098421990866e-10, -1.4092529910867521e-8, 6.228974084922022e-9, -1.3670488396617113e-9, 9.4283561590146782e-13, 1.2872252400089318e-10, -5.5645956134363321e-11, 1.1975935546366981e-11, -4.1689782251838635e-15, -1.0940640427884594e-12, 4.6622399463901357e-13, -9.905105763906906e-14, 1.8931876768373515e-17, 8.8592218725911273e-15},
    {6.4943415637860082e-4, 2.2947209362139918e-4, -4.6918949439525571e-4, 2.6772063206283885e-4, -7.5618016718839764e-5, -2.3965051138672967e-7, 1.1082654115347302e-5, -5.6749528269915966e-6, 1.4230900732435884e-6, -2.7861080291528142e-11, -1.6958404091930277e-7, 8.0994649053880824e-8, -1.9111168485973654e-8, 2.3928620439808118e-12, 2.0620131815488798e-9, -9.4604966618551322e-10, 2.1541049775774908e-10, -1.388823336813903e-14, -2.1894761681963939e-11, 9.7909989511716851e-12, -2.1782191880180962e-12, 6.2088195734079014e-17, 2.126978363279737e-13, -9.3446887915174333e-14, 2.0453671226782849e-14},
    {-8.618882909167117e-4, 7.8403922172006663e-4, -2.9907248030319018e-4, -1.4638452578843418e-6, 6.6414982154651222e-5, -3.9683650471794347e-5, 1.1375726970678419e-5, 2.5074972262375328e-10, -1.6954149536558306e-6, 8.9075075322053097e-7, -2.2929348340008049e-7, 2.956794137544049e-11, 2.8865829742708784e-8, -1.4189739437803219e-8, 3.4463580499464897e-9, -2.3024517174528067e-13, -3.9409233028046405e-10, 1.8602338968504502e-10, -4.356323005056618e-11, 1.2786001016296231e-15, 4.6792750266579195e-12, -2.1492464706134829e-12, 4.9088156148096522e-13, -6.3385914848915603e-18, -5.0453320690800944e-14},
    {-3.3679855336635815e-4, -6.9728137583658578e-5, 2.7727532449593921e-4, -1.9932570516188848e-4, 6.7977804779372078e-5, 1.419062920643967e-7, -1.3594048189768693e-5, 8.0184702563342015e-6, -2.2914811765080952e-6, -3.252473551298454e-10, 3.4652846491085265e-7, -1.8447187191171343e-7, 4.8240967037894181e-8, -1.7989466721743515e-14, -6.3061945000135234e-9, 3.1624176287745679e-9, -7.8409242536974293e-10, 5.1926791652540407e-15, 9.3589442423067836e-11, -4.5134262161632782e-11, 1.0799129993116827e-11, -3.661886712685252e-17, -1.210902069055155e-12, 5.6807435849905643e-13, -1.3249659916340829e-13},
    {5.3130793646399222e-4, -5.9216643735369388e-4, 2.7087820967180448e-4, 7.9023532326603279e-7, -8.1539693675619688e-5, 5.6116827531062497e-5, -1.8329116582843376e-5, -3.0796134506033048e-9, 3.4651553688036091e-6, -2.0291327396058604e-6, 5.7887928631490037e-7, 2.338630673826657e-13, -8.8286007463304835e-8, 4.7435958880408128e-8, -1.2545415020710382e-8, 8.6496488580102925e-14, 1.6846058979264063e-9, -8.5754928235775947e-10, 2.1598224929232125e-10, -7.6132305204761539e-16, -2.6639822008536144e-11, 1.3065700536611057e-11, -3.1799163902367977e-12, 4.7109761213674315e-18, 3.6902800842763467e-13},
    {3.4436760689237767e-4, 5.1717909082605922e-5, -3.3493161081142236e-4, 2.812695154763237e-4, -1.0976582244684731e-4, -1.2741009095484485e-7, 2.7744451511563644e-5, -1.8263488805711333e-5, 5.7876949497350524e-6, 4.9387589339362704e-10, -1.0595367014026043e-6, 6.1667143761104075e-7, -1.7562973359060462e-7, -1.2974473287015439e-12, 2.695423606288966e-8, -1.4578352908731271e-8, 3.887645959386175e-9, -3.8810022510194121e-17, -5.3279941738772867e-10, 2.7437977643314845e-10, -6.9957960920705679e-11, 2.5899863874868481e-17, 8.8566890996696381e-12, -4.403168815871311e-12, 1.0865561947091654e-12},
    {-6.5262391859530942e-4, 8.3949872067208728e-4, -4.3829709854172101e-4, -6.969091458420552e-7, 1.6644846642067548e-4, -1.2783517679769219e-4, 4.6299532636913043e-5, 4.5579098679227077e-9, -1.0595271125805195e-5, 6.7833429048651666e-6, -2.1075476666258804e-6, -1.7213731432817145e-11, 3.7735877416110979e-7, -2.1867506700122867e-7, 6.2202288040189269e-8, 6.5977038267330006e-16, -9.5903864974256858e-9, 5.2132144922808078e-9, -1.3991589583935709e-9, 5.382058999060575e-16, 1.9484714275467745e-10, -1.0127287556389682e-10, 2.6077347197254926e-11, -5.0904186999932993e-18, -3.3721464474854592e-12},
    {-5.9676129019274625e-4, -7.2048954160200106e-5, 6.7823088376673284e-4, -6.4014752602627585e-4, 2.7750107634328704e-4, 1.8197008380465151e-7, -8.4795071170685032e-5, 6.105192082501531e-5, -2.1073920183404862e-5, -8.8585890141255994e-10, 4.5284535953805377e-6, -2.8427815022504408e-6, 8.7082341778646412e-7, 3.6886101871706965e-12, -1.5344695190702061e-7, 8.862466778790695e-8, -2.5184812301826817e-8, -1.0225912098215092e-14, 3.8969470758154777e-9, -2.1267304792235635e-9, 5.7370135528051385e-10, -1.887749850169741e-19, -8.0931538694657866e-11, 4.2382723283449199e-11, -1.1002224534207726e-11},
    {1.3324454494800656e-3, -1.9144384985654775e-3, 1.1089369134596637e-3, 9.932404122642299e-7, -5.0874501293093199e-4, 4.2735056665392884e-4, -1.6858853767910799e-4, -8.1301893922784998e-9, 4.5284402370562147e-5, -3.127053674781734e-5, 1.044986828530338e-5, 4.8435226265680926e-11, -2.1482565873456258e-6, 1.329369701097492e-6, -4.0295693092101029e-7, -1.7567877666323291e-13, 7.0145043163668257e-8, -4.040787734999483e-8, 1.1474026743371963e-8, 3.9642746853563325e-18, -1.7804938269892714e-9, 9.7480262548731646e-10, -2.6405338676507616e-10, 5.794875163403742e-18, 3.7647749553543836e-11},
    {1.579727660730835e-3, 1.6251626278391582e-4, -2.0633421035543276e-3, 2.1389686185689098e-3, -1.0108559391263003e-3, -3.9912705529919201e-7, 3.6235025084764691e-4, -2.8143901463712154e-4, 1.0449513336495887e-4, 2.1211418491830297e-9, -2.5779417251947842e-5, 1.7281818956040463e-5, -5.6413773872904282e-6, -1.1024320105776174e-11, 1.1223224418895175e-6, -6.8693396379526735e-7, 2.0653236975414887e-7, 4.6714772409838506e-14, -3.5609886164949055e-8, 2.0470855345905963e-8, -5.8091738633283358e-9, -1.332821287582869e-16, 9.0354604391335133e-10, -4.9598782517330834e-10, 1.3481607129399749e-10},
    {-4.0725121195140166e-3, 6.4033628338080698e-3, -4.0410161081676618e-3, -2.183732802866233e-6, 2.1740441801254639e-3, -1.9700440518418892e-3, 8.3595469747962458e-4, 1.9445447567109655e-8, -2.5779387120421696e-4, 1.9009987368139304e-4, -6.7696499937438965e-5, -1.4440629666426572e-10, 1.5712512518742269e-5, -1.0304008744776893e-5, 3.304517767401387e-6, 7.9829760242325709e-13, -6.4097794149313004e-7, 3.8894624761300056e-7, -1.1618347644948869e-7, -2.816808630596451e-15, 1.9878012911297093e-8, -1.1407719956357511e-8, 3.2355857064185555e-9, 4.1759468293455945e-20, -5.0423112718105824e-10},
    {-5.9475779383993003e-3, -5.4016476789260452e-4, 8.7910413550767898e-3, -9.8576315587856125e-3, 5.0134695031021538e-3, 1.2807521786221875e-6, -2.0626019342754683e-3, 1.7109128573523058e-3, -6.7695312714133799e-4, -6.9011545676562133e-9, 1.8855128143995902e-4, -1.3395215663491969e-4, 4.6263183033528039e-5, 4.0034230613321351e-11, -1.0255652921494033e-5, 6.612086372797651e-6, -2.0913022027253008e-6, -2.0951775649603837e-13, 3.9756029041993247e-7, -2.3956211978815887e-7, 7.1182883382145864e-8, 8.925574873053455e-16, -1.2101547235064676e-8, 6.9350618248334386e-9, -1.9661464453856102e-9},
    {1.7402027787522711e-2, -2.9527880945699121e-2, 2.0045875571402799e-2, 7.0289515966903407e-6, -1.2375421071343148e-2, 1.1976293444235254e-2, -5.4156038466518525e-3, -6.3290893396418616e-8, 1.8855118129005065e-3, -1.473473274825001e-3, 5.5515810097708387e-4, 5.2406834412550662e-10, -1.4357913535784836e-4, 9.9181293224943297e-5, -3.3460834749478311e-5, -3.5755837291098993e-12, 7.1560851960630076e-6, -4.5516802628155526e-6, 1.4236576649271475e-6, 1.8803149082089664e-14, -2.6623403898929211e-7, 1.5950642189595716e-7, -4.7187514673841102e-8, -6.5107872958755177e-17, 7.9795091026746235e-9},
    {3.0249124160905891e-2, 2.4817436002649977e-3, -4.9939134373457022e-2, 5.9915643009307869e-2, -3.2483207601623391e-2, -5.7212968652103441e-6, 1.5085251778569354e-2, -1.3261324005088445e-2, 5.5515262632426148e-3, 3.0263182257030016e-8, -1.7229548406756723e-3, 1.2893570099929637e-3, -4.6845138348319876e-4, -1.830259937893045e-10, 1.1449739014822654e-4, -7.7378565221244477e-5, 2.5625836246985201e-5, 1.0766165333192814e-12, -5.3246809282422621e-6, 3.349634863064464e-6, -1.0381253128684018e-6, -5.608909920621128e-15, 1.9150821930676591e-7, -1.1418365800203486e-7, 3.3654425209171788e-8},
    {-9.9051020880159045e-2, 1.7954011706123486e-1, -1.2989606383463778e-1, -3.1478872752284357e-5, 9.0510635276848131e-2, -9.2828824411184397e-2, 4.4412112839877808e-2, 2.7779236316835888e-7, -1.7229543805449697e-2, 1.4182925050891573e-2, -5.6214161633747336e-3, -2.39598509186381e-9, 1.6029634366079908e-3, -1.1606784674435773e-3, 4.1001337768153873e-4, 1.8365800754090661e-11, -9.5844256563655903e-5, 6.3643062337764708e-5, -2.076250624489065e-5, -1.1806020912804483e-13, 4.2131808239120649e-6, -2.6262241337012467e-6, 8.0770620494930662e-7, 6.0125912123632725e-16, -1.4729737374018841e-7},
    {-1.9994542198219728e-1, -1.5056113040026424e-2, 3.6470239469348489e-1, -4.6435192311733545e-1, 2.6640934719197893e-1, 3.4038266027147191e-5, -1.3784338709329624e-1, 1.276467178337056e-1, -5.6213828755200985e-2, -1.753150885483011e-7, 1.9235592956768113e-2, -1.5088821281095315e-2, 5.7401854451350123e-3, 1.0622382710310225e-9, -1.5335082692563998e-3, 1.0819320643228214e-3, -3.7372510193945659e-4, -6.6170909729031985e-12, 8.4263617380909628e-5, -5.5150706827483479e-5, 1.7769536448348069e-5, 3.8827923210205533e-14, -3.53513697488768e-6, 2.1865832130045269e-6, -6.6812849447625594e-7},
    {7.2438608504029431e-1, -1.3918010932653375, 1.0654143352413968, 1.876173868950258e-4, -8.2705501176152696e-1, 8.9352433347828414e-1, -4.4971003995291339e-1, -1.6107401567546652e-6, 1.9235590165271091e-1, -1.6597702160042609e-1, 6.8882222681814333e-2, 1.3910091724608687e-8, -2.146911561508663e-2, 1.6228980898865892e-2, -5.9796016172584256e-3, -1.1287469112826745e-10, 1.5167451119784857e-3, -1.0478634293553899e-3, 3.5539072889126421e-4, 8.1704322111801517e-13, -7.7773013442452395e-5, 5.0291413897007722e-5, -1.6035083867000518e-5, 1.2469354315487605e-14, 3.1369106244517615e-6},
    {1.6668949727276811, 1.165462765994632e-1, -3.3288393225018906, 4.4692325482864037, -2.6977693045875807, -2.600667859891061e-4, 1.5389017615694539, -1.4937962361134612, 6.8881964633233148e-1, 1.3077482004552385e-6, -2.5762963325596288e-1, 2.1097676102125449e-1, -8.3714408359219882e-2, -7.7920428881354753e-9, 2.4267923064833599e-2, -1.7813678334552311e-2, 6.3970330388900056e-3, 4.9430807090480523e-11, -1.5554602758465635e-3, 1.0561196919903214e-3, -3.5277184460472902e-4, 9.3002334645022459e-14, 7.5285855026557172e-5, -4.8186515569156351e-5, 1.5227271505597605e-5},
    {-6.6188298861372935, 1.3397985455142589e+1, -1.0789350606845146e+1, -1.4352254537875018e-3, 9.2333694596189809, -1.0456552819547769e+1, 5.5105526029033471, 1.2024439690716742e-5, -2.5762961164755816, 2.3207442745387179, -1.0045728797216284, -1.0207833290021914e-7, 3.3975092171169466e-1, -2.6720517450757468e-1, 1.0235252851562706e-1, 8.4329730484871625e-10, -2.7998284958442595e-2, 2.0066274144976813e-2, -7.0554368915086242e-3, 1.9402238183698188e-12, 1.6562888105449611e-3, -1.1082898580743683e-3, 3.654545161310169e-4, -5.1290032026971794e-11, -7.6340103696869031e-5},
    {-1.7112706061976095e+1, -1.1208044642899116, 3.7131966511885444e+1, -5.2298271025348962e+1, 3.3058589696624618e+1, 2.4791298976200222e-3, -2.061089403411526e+1, 2.088672775145582e+1, -1.0045703956517752e+1, -1.2238783449063012e-5, 4.0770134274221141, -3.473667358470195, 1.4329352617312006, 7.1359914411879712e-8, -4.4797257159115612e-1, 3.4112666080644461e-1, -1.2699786326594923e-1, -2.8953677269081528e-10, 3.3125776278259863e-2, -2.3274087021036101e-2, 8.0399993503648882e-3, -1.177805216235265e-9, -1.8321624891071668e-3, 1.2108282933588665e-3, -3.9479941246822517e-4},
    {7.389033153567425e+1, -1.5680141270402273e+2, 1.322177542759164e+2, 1.3692876877324546e-2, -1.2366496885920151e+2, 1.4620689391062729e+2, -8.0365587724865346e+1, -1.1259851148881298e-4, 4.0770132196179938e+1, -3.8210340013273034e+1, 1.719522294277362e+1, 9.3519707955168356e-7, -6.2716159907747034, 5.1168999071852637, -2.0319658112299095, -4.9507215582761543e-9, 5.9626397294332597e-1, -4.4220765337238094e-1, 1.6079998700166273e-1, -2.4733786203223402e-8, -4.0307574759979762e-2, 2.7849050747097869e-2, -9.4751858992054221e-3, 6.419922235909132e-6, 2.1250180774699461e-3},
    {2.1216837098382522e+2, 1.3107863022633868e+1, -4.9698285932871748e+2, 7.3121595266969204e+2, -4.8213821720890847e+2, -2.8817248692894889e-2, 3.2616720302947102e+2, -3.4389340280087117e+2, 1.7195193870816232e+2, 1.4038077378096158e-4, -7.52594195897599e+1, 6.651969984520934e+1, -2.8447519748152462e+1, -7.613702615875391e-7, 9.5402237105304373, -7.5175301113311376, 2.8943997568871961, -4.6612194999538201e-7, -8.0615149598794088e-1, 5.8483006570631029e-1, -2.0845408972964956e-1, 1.4765818959305817e-4, 5.1000433863753019e-2, -3.3066252141883665e-2, 1.5109265210467774e-2},
    {-9.8959643098322368e+2, 2.1925555360905233e+3, -1.9283586782723356e+3, -1.5925738122215253e-1, 1.9569985945919857e+3, -2.4072514765081556e+3, 1.3756149959336496e+3, 1.2920735237496668e-3, -7.525941715948055e+2, 7.3171668742208716e+2, -3.4137023466220065e+2, -9.9857390260608043e-6, 1.3356313181291573e+2, -1.1276295161252794e+2, 4.6310396098204458e+1, -7.9237387133614756e-6, -1.4510726927018646e+1, 1.1111771248100563e+1, -4.1690817945270892, 3.1008219800117808e-3, 1.1220095449981468, -7.6052379926149916e-1, 3.6262236505085254e-1, 2.216867741940747e-1, 4.8683443692930507e-1}};

#endif



/*  (C) Copyright John Maddock 2006.
 *  Use, modification and distribution are subject to the
 *  Boost Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at https://www.boost.org/LICENSE_1_0.txt)
 */

/* Both lanczos.h and lanczos.c were formed from Boost's lanczos.hpp
 *
 * Scipy changes:
 * - 06-22-2016: Removed all code not related to double precision and
 *   ported to c for use in Cephes. Note that the order of the
 *   coefficients is reversed to match the behavior of polevl.
 */

/*
 * Optimal values for G for each N are taken from
 * https://web.viu.ca/pughg/phdThesis/phdThesis.pdf,
 * as are the theoretical error bounds.
 *
 * Constants calculated using the method described by Godfrey
 * https://my.fit.edu/~gabdo/gamma.txt and elaborated by Toth at
 * https://www.rskey.org/gamma.htm using NTL::RR at 1000 bit precision.
 */

/*
 * Lanczos Coefficients for N=13 G=6.024680040776729583740234375
 * Max experimental error (with arbitrary precision arithmetic) 1.196214e-17
 * Generated with compiler: Microsoft Visual C++ version 8.0 on Win32 at Mar 23 2006
 *
 * Use for double precision.
 */

#ifndef LANCZOS_H
#define LANCZOS_H


__constant double lanczos_num[13] = {
    2.506628274631000270164908177133837338626,
    210.8242777515793458725097339207133627117,
    8071.672002365816210638002902272250613822,
    186056.2653952234950402949897160456992822,
    2876370.628935372441225409051620849613599,
    31426415.58540019438061423162831820536287,
    248874557.8620541565114603864132294232163,
    1439720407.311721673663223072794912393972,
    6039542586.35202800506429164430729792107,
    17921034426.03720969991975575445893111267,
    35711959237.35566804944018545154716670596,
    42919803642.64909876895789904700198885093,
    23531376880.41075968857200767445163675473
};

__constant double lanczos_denom[13] = {
    1,
    66,
    1925,
    32670,
    357423,
    2637558,
    13339535,
    45995730,
    105258076,
    150917976,
    120543840,
    39916800,
    0
};




__constant double lanczos_sum_near_1_d[12] = {
    0.3394643171893132535170101292240837927725e-9,
    -0.2499505151487868335680273909354071938387e-8,
    0.8690926181038057039526127422002498960172e-8,
    -0.1933117898880828348692541394841204288047e-7,
    0.3075580174791348492737947340039992829546e-7,
    -0.2752907702903126466004207345038327818713e-7,
    -0.1515973019871092388943437623825208095123e-5,
    0.004785200610085071473880915854204301886437,
    -0.1993758927614728757314233026257810172008,
    1.483082862367253753040442933770164111678,
    -3.327150580651624233553677113928873034916,
    2.208709979316623790862569924861841433016
};

__constant double lanczos_sum_near_2_d[12] = {
    0.1009141566987569892221439918230042368112e-8,
    -0.7430396708998719707642735577238449585822e-8,
    0.2583592566524439230844378948704262291927e-7,
    -0.5746670642147041587497159649318454348117e-7,
    0.9142922068165324132060550591210267992072e-7,
    -0.8183698410724358930823737982119474130069e-7,
    -0.4506604409707170077136555010018549819192e-5,
    0.01422519127192419234315002746252160965831,
    -0.5926941084905061794445733628891024027949,
    4.408830289125943377923077727900630927902,
    -9.8907772644920670589288081640128194231,
    6.565936202082889535528455955485877361223
};

__constant double lanczos_g = 6.024680040776729583740234375;

#endif


__constant double big = 4.503599627370496e15;
__constant double biginv = 2.22044604925031308085e-16;

double igamc_continued_fraction(double, double);
double igam_series(double, double);
double igamc_series(double, double);
double asymptotic_series(double, double, int);
void igam_call(double *a,double *x,double *res);
double igam(double a, double x);
double igamc(double a, double x);

void  reghyperg_call(int *a,int *b,double *x,double *res);




double lanczos_sum_expg_scaled(double x);


double log1pp(double x);
double log1pmx(double x);
double log1pmx(double x);
double expm11(double x);
double cosm1(double x);
double lgam1p_taylor(double x);
double lgam1p(double x);
double ratevl(double x, double num[], int M,
             double denom[], int NN);
double zeta(double x,double q);












/* expm1(x) = exp(x) - 1  */

/*  e^x =  1 + 2x P(x^2)/( Q(x^2) - P(x^2) )
 * -0.5 <= x <= 0.5
 */







__constant double AA[] = {
    12.0,
    -720.0,
    30240.0,
    -1209600.0,
    47900160.0,
    -1.8924375803183791606e9,    /*1.307674368e12/691 */
    7.47242496e10,
    -2.950130727918164224e12,    /*1.067062284288e16/3617 */
    1.1646782814350067249e14,    /*5.109094217170944e18/43867 */
    -4.5979787224074726105e15,    /*8.028576626982912e20/174611 */
    1.8152105401943546773e17,    /*1.5511210043330985984e23/854513 */
    -7.1661652561756670113e18    /*1.6938241367317436694528e27/236364091 */
};


//************************************* END igam.c*****************************************




// ===================================== START HyperGeo  ==================================//


/**************** for bivaraite T distribution */////////////////////////



// ===================================== END HyperGeo  ==================================//





// ===================================== Bessel  =====================================//

#define nsig_BESS    16
#define ensig_BESS    1e16
#define rtnsig_BESS    1e-4
#define enmten_BESS    8.9e-308
#define enten_BESS    1e308

#define exparg_BESS    709.
#define xlrg_BESS_IJ    1e5
#define xlrg_BESS_Y    1e8
#define thresh_BESS_Y    16.

#define xmax_BESS_K    705.342/* maximal x for UNscaled answer */
#define sqxmin_BESS_K    1.49e-154





//#define DBL_MAX 1.7976931348623157e+308

#define M_SQRT_2dPI    0.797884560802865355879892119869    /* sqrt(2/pi) */
//#define DBL_MIN 2.2250738585072014e-308
//#define HSQRT 1.414213562373095048801688724209698078569671
#define HSQRT 1.4142

// For biv_T
#define EPS1 1.0e-10
#define ETHRESH 1.0e-12
#define MACHEP   1.11022302462515654042E-16   /* 2**-53 */
#define MAXNUM   1.79769313486231570815E308    /* 2**1024*(1-MACHEP) */







/*************************************
 An ANSI-C implementation of the digamma-function for real arguments based
 on the Chebyshev expansion proposed in appendix E of
 http://arXiv.org/abs/math.CA/0403344 . This is identical to the implementation
 by Jet Wimp, Math. Comp. vol 15 no 74 (1961) pp 174 (see Table 1).
 For other implementations see
 the GSL implementation for Psi(Digamma) in
 http://www.gnu.org/software/gsl/manual/html_node/Psi-_0028Digamma_0029-Function.html
 
 Richard J. Mathar, 2005-11-24
 **************************************/
#ifndef M_PIl
/** The constant Pi in high precision */
#define M_PIl 3.1415926535897932384626433832795029L
#endif
#ifndef M_GAMMAl
/** Euler's constant in high precision */
#define M_GAMMAl 0.5772156649015328606065120900824024L
#endif
#ifndef M_LN2l
/** the natural logarithm of 2 in high precision */
#define M_LN2l 0.6931471805599453094172321214581766L
#endif



double digammaRD (double x)
{//https://github.com/wbuntine/libstb/blob/master/lib/digamma.c
    double r, f, t;
    
    r = 0;
    
    while (x<=5)
    { r -= 1/x;
        x += 1;
    }
    
    f = 1/(x*x);
    
    t = f*(-1/12.0 + f*(1/120.0 + f*(-1/252.0 + f*(1/240.0 + f*(-1/132.0
                                                                + f*(691/32760.0 + f*(-1/12.0 + f*3617/8160.0)))))));
    
    return (r + log(x) - 0.5/x + t);
}

// ===================================== START Bessel  =====================================//

// https://github.com/wch/r-source/blob/trunk/src/nmath/bessel_i.c

/*
double bessel_jj(double x, double alpha, double expo)
{
    int nb, ncalc, ize;
    double na;
    
    if (x < 0 ) {
        x=NAN;
        return x;
    }
    if ( isinf(x)) {
        x=INFINITY;
        return x;
    }
    ize = (int)expo;
    
    na = floor(alpha);
    
    double cond = fabs(alpha-na);
    double B;
    
    
    //if (alpha < 0) {
    // return(bessel_ii(x, -alpha, expo) +
    // ((alpha == na) ?  0 :
     //bessel_kk(x, -alpha, expo) *
    // ((ize == 1)? 2. : 2.*exp(-2.*x))/M_PI * sin(-alpha*M_PI)));
     //}
    
    
    nb = 1 + (int)na;
    alpha -= (double)(nb-1);
    double bi[nb];
    
    II_bessel(&x, &alpha, &nb, &ize, bi, &ncalc);
    x = bi[nb-1];
    return x;
}

double bessel_ii(double x, double alpha, double expo)
{
    int nb, ncalc, ize;
    double na;
    
    //if (isnan(x) || isnan(alpha)) return x + alpha;// ADDED
    
    if (x < 0 ) {
        x=NAN;
        return x;
    }
    //if ( isinf(x)) {
    // x=INFINITY;
    // return x;
    // }
    ize = (int)expo;
    
    na = (int)floor(alpha);
    

    
    //if (alpha < 0) {
     //return(bessel_jj(x, -alpha, expo) + ((alpha == na) ?  0 : //bessel_kk(x, -alpha, expo) * ((ize == 1)? 2. : //2.*exp(-2.*x))/M_PI * sin(-alpha*M_PI)));
     //}
    
    
    nb = 1 + (int)na;
    alpha -= (double)(nb-1);
    //double bi[100]; // Dejar "nb" libre hace que AMD no funcione bien. OJO SECO
    double bi[100];
    
    II_bessel(&x, &alpha, &nb, &ize, bi, &ncalc);
    x = bi[nb-1];
    return x;
}


double bessel_ii_minus(double x, double alpha, double expo)
{
    
    double na;
    
    if (x < 0) {
        x=NAN;
        return x;
    }
    na = floor(alpha);
    
    double cond = fabs(alpha-na);
    double B;
    
    if(cond<=DBL_EPSILON)
    {
        B =0;
    }
    else
    {
        B = bessel_kk(x, -alpha, expo) * 2.;
    }
    
    x = bessel_ii(x, -alpha, expo) + B;
    return(x);
}

double bessel_kk(double x, double alpha, double expo)
{
    int nb, ncalc, ize;
    
    if (x < 0) {
        
        x=NAN;
        return x;
    }
    ize = (int)expo;
    if(alpha < 0) alpha = -alpha;
    nb = 1+ (int)floor(alpha);
    
    alpha -= (double)(nb-1);
    double bk[nb];
    
    KK_bessel(&x, &alpha, &nb, &ize, bk, &ncalc);
    
    x = bk[nb-1];
    
    return x;
}


static void II_bessel(double *x, double *alpha, int *nb,
                      int *ize, double *bi, int *ncalc)
{
    
    
    
    double const__ = 1.585;
    
   
    int nend, intx, nbmx, k, l, n, nstart;
    double pold, test,    p, em, en, empal, emp2al, halfx,
    aa, bb, cc, psave, plast, tover, psavel, sum, nu, twonu;
    
    
    --bi;
    nu = *alpha;
    twonu = nu + nu;
    
  
    
    if (*nb > 0 && *x >= 0. &&    (0. <= nu && nu < 1.) &&
        (1 <= *ize && *ize <= 2) ) {
        
        *ncalc = *nb;
        if(*ize == 1 && *x > exparg_BESS) {
            for(k=1; k <= *nb; k++)
                bi[k]=INFINITY;
            return;
            
        }
        if(*ize == 2 && *x > xlrg_BESS_IJ) {
            for(k=1; k <= *nb; k++)
                bi[k]= 0.;
            return;
        }
        intx = (int) (*x);
        if (*x >= rtnsig_BESS) {
            nbmx = *nb - intx;
            n = intx + 1;
            en = (double) (n + n) + twonu;
            plast = 1.;
            p = en / *x;
           
            test = ensig_BESS + ensig_BESS;
            if (intx << 1 > nsig_BESS * 5) {
                test = sqrt(test * p);
            } else {
                test /= pow(const__, intx);
            }
            if (nbmx >= 3) {
                
                tover = enten_BESS / ensig_BESS;
                nstart = intx + 2;
                nend = *nb - 1;
                for (k = nstart; k <= nend; ++k)
                {
                    n = k;
                    en += 2.;
                    pold = plast;
                    plast = p;
                    p = en * plast / *x + pold;
                    if (p > tover) {
                        
                        tover = enten_BESS;
                        p /= tover;
                        plast /= tover;
                        psave = p;
                        psavel = plast;
                        nstart = n + 1;
                        do {
                            ++n;
                            en += 2.;
                            pold = plast;
                            plast = p;
                            p = en * plast / *x + pold;
                        }
                        while (p <= 1.);
                        
                        bb = en / *x;
                        
                        test = pold * plast / ensig_BESS;
                        test *= .5 - .5 / (bb * bb);
                        p = plast * tover;
                        --n;
                        en -= 2.;
                        nend = min(*nb,n);
                        for (l = nstart; l <= nend; ++l) {
                            *ncalc = l;
                            pold = psavel;
                            psavel = psave;
                            psave = en * psavel / *x + pold;
                            if (psave * psavel > test) {
                                goto L90;
                            }
                        }
                        *ncalc = nend + 1;
                    L90:
                        --(*ncalc);
                        goto L120;
                    }
                }
                n = nend;
                en = (double)(n + n) + twonu;
                
                test = max(test,sqrt(plast * ensig_BESS) * sqrt(p + p));
            }
            
            do {
                ++n;
                en += 2.;
                pold = plast;
                plast = p;
                p = en * plast / *x + pold;
            } while (p < test);
            
        L120:
           
            ++n;
            en += 2.;
            bb = 0.;
            aa = 1. / p;
            em = (double) n - 1.;
            empal = em + nu;
            emp2al = em - 1. + twonu;
            sum = aa * empal * emp2al / em;
            nend = n - *nb;
            if (nend < 0) {
                
                bi[n] = aa;
                nend = -nend;
                for (l = 1; l <= nend; ++l) {
                    bi[n + l] = 0.;
                }
            } else {
                if (nend > 0) {
                    
                    
                    for (l = 1; l <= nend; ++l) {
                        --n;
                        en -= 2.;
                        cc = bb;
                        bb = aa;
                        
                        if(nend > 100 && aa > 1e200) {
                            
                            cc    = ldexp(cc, -900);;
                            bb    = ldexp(bb, -900);;
                            sum = ldexp(sum,-900);;
                        }
                        aa = en * bb / *x + cc;
                        em -= 1.;
                        emp2al -= 1.;
                        if (n == 1) {
                            break;
                        }
                        if (n == 2) {
                            emp2al = 1.;
                        }
                        empal -= 1.;
                        sum = (sum + aa * empal) * emp2al / em;
                    }
                }
               
                bi[n] = aa;
                if (*nb <= 1) {
                    sum = sum + sum + aa;
                    goto L230;
                }
               
                --n;
                en -= 2.;
                bi[n] = en * aa / *x + bb;
                if (n == 1) {
                    goto L220;
                }
                em -= 1.;
                if (n == 2)
                    emp2al = 1.;
                else
                    emp2al -= 1.;
                
                empal -= 1.;
                sum = (sum + bi[n] * empal) * emp2al / em;
            }
            nend = n - 2;
            if (nend > 0) {
               
                for (l = 1; l <= nend; ++l) {
                    --n;
                    en -= 2.;
                    bi[n] = en * bi[n + 1] / *x + bi[n + 2];
                    em -= 1.;
                    if (n == 2)
                        emp2al = 1.;
                    else
                        emp2al -= 1.;
                    empal -= 1.;
                    sum = (sum + bi[n] * empal) * emp2al / em;
                }
            }
            
            bi[1] = 2. * empal * bi[2] / *x + bi[3];
        L220:
            sum = sum + sum + bi[1];
            
        L230:
            
            if (nu != 0.)
                sum *= (tgamma(1. + nu) * pow(*x * .5, -nu));
            if (*ize == 1)
                sum *= exp(-(*x));
            aa = enmten_BESS;
            if (sum > 1.)
                aa *= sum;
            for (n = 1; n <= *nb; ++n) {
                if (bi[n] < aa)
                    bi[n] = 0.;
                else
                    bi[n] /= sum;
            }
            return;
        } else {
            
            
            aa = 1.;
            empal = 1. + nu;
            
            if (*x > enmten_BESS)
                halfx = .5 * *x;
            else
                halfx = 0.;
            
            
            if (nu != 0.)
                aa = pow(halfx, nu) / tgamma(empal);
            if (*ize == 2)
                aa *= exp(-(*x));
            bb = halfx * halfx;
            bi[1] = aa + aa * bb / empal;
            if (*x != 0. && bi[1] == 0.)
                *ncalc = 0;
            if (*nb > 1) {
                if (*x == 0.) {
                    for (n = 2; n <= *nb; ++n)
                        bi[n] = 0.;
                } else {
                    
                    cc = halfx;
                    tover = (enmten_BESS + enmten_BESS) / *x;
                    if (bb != 0.)
                        tover = enmten_BESS / bb;
                    for (n = 2; n <= *nb; ++n) {
                        aa /= empal;
                        empal += 1.;
                        aa *= cc;
                        if (aa <= tover * empal)
                            bi[n] = aa = 0.;
                        else
                            bi[n] = aa + aa * bb / empal;
                        if (bi[n] == 0. && *ncalc > n)
                            *ncalc = n - 1;
                    }
                }
            }
        }
    } else {
        *ncalc = min(*nb,0) - 1;
        
    }
}



static void KK_bessel(double *x, double *alpha, int *nb,
                      int *ize, double *bk, int *ncalc)
{
    
    double a = .11593151565841244881;
    
    
    double p[8] = { .805629875690432845,20.4045500205365151,
        157.705605106676174,536.671116469207504,900.382759291288778,
        730.923886650660393,229.299301509425145,.822467033424113231 };
    double q[7] = { 29.4601986247850434,277.577868510221208,
        1206.70325591027438,2762.91444159791519,3443.74050506564618,
        2210.63190113378647,572.267338359892221 };
    
    double r[5] = { -.48672575865218401848,13.079485869097804016,
        -101.96490580880537526,347.65409106507813131,
        3.495898124521934782e-4 };
    double s[4] = { -25.579105509976461286,212.57260432226544008,
        -610.69018684944109624,422.69668805777760407 };
    
    double t[6] = { 1.6125990452916363814e-10,
        2.5051878502858255354e-8,2.7557319615147964774e-6,
        1.9841269840928373686e-4,.0083333333333334751799,
        .16666666666666666446 };
    
    double estm[6] = { 52.0583,5.7607,2.7782,14.4303,185.3004, 9.3715 };
    double estf[7] = { 41.8341,7.1075,6.4306,42.511,1.35633,84.5096,20.};
    
    
    int iend, i, j, k, m, ii, mplus1;
    double x2by4, twox, c, blpha, ratio, wminf;
    double d1, d2, d3, f0, f1, f2, p0, q0, t1, t2, twonu;
    double dm, ex, bk1, bk2, nu;
    
    ii = 0;
    
    ex = *x;
    nu = *alpha;
    *ncalc = min(*nb,0) - 2;
    if (*nb > 0 && (0. <= nu && nu < 1.) && (1 <= *ize && *ize <= 2)) {
        if(ex <= 0 || (*ize == 1 && ex > xmax_BESS_K)) {
            if(ex <= 0) {
                
                for(i=0; i < *nb; i++)
                    bk[i] = INFINITY;
            } else
                for(i=0; i < *nb; i++)
                    bk[i] = 0.;
            *ncalc = *nb;
            return;
        }
        k = 0;
        if (nu < sqxmin_BESS_K) {
            nu = 0.;
        } else if (nu > .5) {
            k = 1;
            nu -= 1.;
        }
        twonu = nu + nu;
        iend = *nb + k - 1;
        c = nu * nu;
        d3 = -c;
        if (ex <= 1.) {
            
            d1 = 0.; d2 = p[0];
            t1 = 1.; t2 = q[0];
            for (i = 2; i <= 7; i += 2) {
                d1 = c * d1 + p[i - 1];
                d2 = c * d2 + p[i];
                t1 = c * t1 + q[i - 1];
                t2 = c * t2 + q[i];
            }
            d1 = nu * d1;
            t1 = nu * t1;
            f1 = log(ex);
            f0 = a + nu * (p[7] - nu * (d1 + d2) / (t1 + t2)) - f1;
            q0 = exp(-nu * (a - nu * (p[7] + nu * (d1-d2) / (t1-t2)) - f1));
            f1 = nu * f0;
            p0 = exp(f1);
            
            d1 = r[4];
            t1 = 1.;
            for (i = 0; i < 4; ++i) {
                d1 = c * d1 + r[i];
                t1 = c * t1 + s[i];
            }
            
            if (fabs(f1) <= .5) {
                f1 *= f1;
                d2 = 0.;
                for (i = 0; i < 6; ++i) {
                    d2 = f1 * d2 + t[i];
                }
                d2 = f0 + f0 * f1 * d2;
            } else {
                d2 = sinh(f1) / nu;
            }
            f0 = d2 - nu * d1 / (t1 * p0);
            if (ex <= 1e-10) {
                
                bk[0] = f0 + ex * f0;
                if (*ize == 1) {
                    bk[0] -= ex * bk[0];
                }
                ratio = p0 / f0;
                c = ex * DBL_MAX;
                if (k != 0) {
                    
                    *ncalc = -1;
                    if (bk[0] >= c / ratio) {
                        return;
                    }
                    bk[0] = ratio * bk[0] / ex;
                    twonu += 2.;
                    ratio = twonu;
                }
                *ncalc = 1;
                if (*nb == 1)
                    return;
                
                
                *ncalc = -1;
                for (i = 1; i < *nb; ++i) {
                    if (ratio >= c)
                        return;
                    
                    bk[i] = ratio / ex;
                    twonu += 2.;
                    ratio = twonu;
                }
                *ncalc = 1;
                goto L420;
            } else {
                
                c = 1.;
                x2by4 = ex * ex / 4.;
                p0 = .5 * p0;
                q0 = .5 * q0;
                d1 = -1.;
                d2 = 0.;
                bk1 = 0.;
                bk2 = 0.;
                f1 = f0;
                f2 = p0;
                do {
                    d1 += 2.;
                    d2 += 1.;
                    d3 = d1 + d3;
                    c = x2by4 * c / d2;
                    f0 = (d2 * f0 + p0 + q0) / d3;
                    p0 /= d2 - nu;
                    q0 /= d2 + nu;
                    t1 = c * f0;
                    t2 = c * (p0 - d2 * f0);
                    bk1 += t1;
                    bk2 += t2;
                } while (fabs(t1 / (f1 + bk1)) > DBL_EPSILON ||
                         fabs(t2 / (f2 + bk2)) > DBL_EPSILON);
                bk1 = f1 + bk1;
                bk2 = 2. * (f2 + bk2) / ex;
                if (*ize == 2) {
                    d1 = exp(ex);
                    bk1 *= d1;
                    bk2 *= d1;
                }
                wminf = estf[0] * ex + estf[1];
            }
        } else if (DBL_EPSILON * ex > 1.) {
            
            *ncalc = *nb;
            bk1 = 1. / (M_SQRT_2dPI * sqrt(ex));
            for (i = 0; i < *nb; ++i)
                bk[i] = bk1;
            return;
            
        } else {
            
            twox = ex + ex;
            blpha = 0.;
            ratio = 0.;
            if (ex <= 4.) {
                
                d2 = trunc(estm[0] / ex + estm[1]);
                m = (int) d2;
                d1 = d2 + d2;
                d2 -= .5;
                d2 *= d2;
                for (i = 2; i <= m; ++i) {
                    d1 -= 2.;
                    d2 -= d1;
                    ratio = (d3 + d2) / (twox + d1 - ratio);
                }
                
                d2 = trunc(estm[2] * ex + estm[3]);
                m = (int) d2;
                c = fabs(nu);
                d3 = c + c;
                d1 = d3 - 1.;
                f1 = DBL_MIN;
                f0 = (2. * (c + d2) / ex + .5 * ex / (c + d2 + 1.)) * DBL_MIN;
                for (i = 3; i <= m; ++i) {
                    d2 -= 1.;
                    f2 = (d3 + d2 + d2) * f0;
                    blpha = (1. + d1 / d2) * (f2 + blpha);
                    f2 = f2 / ex + f1;
                    f1 = f0;
                    f0 = f2;
                }
                f1 = (d3 + 2.) * f0 / ex + f1;
                d1 = 0.;
                t1 = 1.;
                for (i = 1; i <= 7; ++i) {
                    d1 = c * d1 + p[i - 1];
                    t1 = c * t1 + q[i - 1];
                }
                p0 = exp(c * (a + c * (p[7] - c * d1 / t1) - log(ex))) / ex;
                f2 = (c + .5 - ratio) * f1 / ex;
                bk1 = p0 + (d3 * f0 - f2 + f0 + blpha) / (f2 + f1 + f0) * p0;
                if (*ize == 1) {
                    bk1 *= exp(-ex);
                }
                wminf = estf[2] * ex + estf[3];
            } else {
               
                dm = trunc(estm[4] / ex + estm[5]);
                m = (int) dm;
                d2 = dm - .5;
                d2 *= d2;
                d1 = dm + dm;
                for (i = 2; i <= m; ++i) {
                    dm -= 1.;
                    d1 -= 2.;
                    d2 -= d1;
                    ratio = (d3 + d2) / (twox + d1 - ratio);
                    blpha = (ratio + ratio * blpha) / dm;
                }
                bk1 = 1. / ((M_SQRT_2dPI + M_SQRT_2dPI * blpha) * sqrt(ex));
                if (*ize == 1)
                    bk1 *= exp(-ex);
                wminf = estf[4] * (ex - fabs(ex - estf[6])) + estf[5];
            }
           
            bk2 = bk1 + bk1 * (nu + .5 - ratio) / ex;
        }
       
        *ncalc = *nb;
        bk[0] = bk1;
        if (iend == 0)
            return;
        
        j = 1 - k;
        if (j >= 0)
            bk[j] = bk2;
        
        if (iend == 1)
            return;
        
        m = min((int) (wminf - nu),iend);
        for (i = 2; i <= m; ++i) {
            t1 = bk1;
            bk1 = bk2;
            twonu += 2.;
            if (ex < 1.) {
                if (bk1 >= DBL_MAX / twonu * ex)
                    break;
            } else {
                if (bk1 / ex >= DBL_MAX / twonu)
                    break;
            }
            bk2 = twonu / ex * bk1 + t1;
            ii = i;
            ++j;
            if (j >= 0) {
                bk[j] = bk2;
            }
        }
        
        m = ii;
        if (m == iend) {
            return;
        }
        ratio = bk2 / bk1;
        mplus1 = m + 1;
        *ncalc = -1;
        for (i = mplus1; i <= iend; ++i) {
            twonu += 2.;
            ratio = twonu / ex + 1./ratio;
            ++j;
            if (j >= 1) {
                bk[j] = ratio;
            } else {
                if (bk2 >= DBL_MAX / ratio)
                    return;
                
                bk2 *= ratio;
            }
        }
        *ncalc = max(1, mplus1 - k);
        if (*ncalc == 1)
            bk[0] = bk2;
        if (*nb == 1)
            return;
        
    L420:
        for (i = *ncalc; i < *nb; ++i) {
            
            bk[i] *= bk[i-1];
            (*ncalc)++;
        }
    }
}*/














//#define min0(x, y) (((x) <= (y)) ? (x) : (y))
//#define max0(x, y) (((x) <= (y)) ? (y) : (x))

double bessel_ii(double x, double alpha, double expo)
{
    int nb, ncalc, ize;
    //double na, *bi;
    double na;
#ifndef MATHLIB_STANDALONE
    const void *vmax;
#endif

#ifdef IEEE_754
    
    if (isnan(x) || isnan(alpha)) return x + alpha;
#endif
    if (x < 0) {
    
    return NAN;
    }
    ize = (int)expo;
    na = floor(alpha);
    
    
    if (alpha < 0) {
    
    return(bessel_ii(x, -alpha, expo) +
           ((alpha == na) ? 0 :
        bessel_k(x, -alpha, expo) *
        ((ize == 1)? 2. : 2.*exp(-2.*x))/M_PI * sinpi(-alpha)));
    }
    
    nb = 1 + (int)na;
    alpha -= (double)(nb-1);

    double bi[nb];
    
    I_bessel(&x, &alpha, &nb, &ize, bi, &ncalc);
    
    if(ncalc != nb) {
    if(ncalc < 0)
        return(-1);
    else
        return(-1);
    }
    x = bi[nb-1];
     
     

    return x;
}


double bessel_k(double x, double alpha, double expo)
{
    int nb, ncalc, ize;
    //double *bk;
#ifndef MATHLIB_STANDALONE
    const void *vmax;
#endif

#ifdef IEEE_754
    
    if (isnan(x) || isnan(alpha)) return x + alpha;
#endif
    if (x < 0) {
    //ML_WARNING(ME_RANGE, "bessel_k");
    return NAN;
    }
    ize = (int)expo;
    if(alpha < 0)
    alpha = -alpha;
    nb = 1+ (int)floor(alpha);/* nb-1 <= |alpha| < nb */
    alpha -= (double)(nb-1);
/*#ifdef MATHLIB_STANDALONE
    bk = (double *) calloc(nb, sizeof(double));
    if (!bk) return(-1);
#else
    vmax = vmaxget();
    bk = (double *) R_alloc((size_t) nb, sizeof(double));
#endif*/
    double bk[nb];
    K_bessel(&x, &alpha, &nb, &ize, bk, &ncalc);
    if(ncalc != nb) {/* error input */
      if(ncalc < 0)
          return(-1);
      else
          return(-1);
    }
    x = bk[nb-1];
/*#ifdef MATHLIB_STANDALONE
    free(bk);
#else
    vmaxset(vmax);
#endif*/
    return x;
}


double bessel_k_ex(double x, double alpha, double expo, double *bk)
{
    int nb, ncalc, ize;

#ifdef IEEE_754
    
    if (isnan(x) || isnan(alpha)) return x + alpha;
#endif
    if (x < 0) {
    //ML_WARNING(ME_RANGE, "bessel_k");
    return NAN;
    }
    ize = (int)expo;
    if(alpha < 0)
    alpha = -alpha;
    nb = 1+ (int)floor(alpha);
    alpha -= (double)(nb-1);
    K_bessel(&x, &alpha, &nb, &ize, bk, &ncalc);
    if(ncalc != nb) {
      if(ncalc < 0)
          return(-1);
      else
          return(-1);
    }
    x = bk[nb-1];
    return x;
}

static void K_bessel(double *x, double *alpha, int *nb,
             int *ize, double *bk, int *ncalc)
{

    double a = .11593151565841244881;

    
    double p[8] = { .805629875690432845,20.4045500205365151,
        157.705605106676174,536.671116469207504,900.382759291288778,
        730.923886650660393,229.299301509425145,.822467033424113231 };
    double q[7] = { 29.4601986247850434,277.577868510221208,
        1206.70325591027438,2762.91444159791519,3443.74050506564618,
        2210.63190113378647,572.267338359892221 };
    
    double r[5] = { -.48672575865218401848,13.079485869097804016,
        -101.96490580880537526,347.65409106507813131,
        3.495898124521934782e-4 };
    double s[4] = { -25.579105509976461286,212.57260432226544008,
        -610.69018684944109624,422.69668805777760407 };
    
    double t[6] = { 1.6125990452916363814e-10,
        2.5051878502858255354e-8,2.7557319615147964774e-6,
        1.9841269840928373686e-4,.0083333333333334751799,
        .16666666666666666446 };
    
    double estm[6] = { 52.0583,5.7607,2.7782,14.4303,185.3004, 9.3715 };
    double estf[7] = { 41.8341,7.1075,6.4306,42.511,1.35633,84.5096,20.};

    
    int iend, i, j, k, m, ii, mplus1;
    double x2by4, twox, c, blpha, ratio, wminf;
    double d1, d2, d3, f0, f1, f2, p0, q0, t1, t2, twonu;
    double dm, ex, bk1, bk2, nu;

    ii = 0;

    ex = *x;
    nu = *alpha;
    *ncalc = min(*nb,0) - 2;
    if (*nb > 0 && (0. <= nu && nu < 1.) && (1 <= *ize && *ize <= 2)) {
    if(ex <= 0 || (*ize == 1 && ex > xmax_BESS_K)) {
        if(ex <= 0) {
        if(ex < 0) return;
        for(i=0; i < *nb; i++)
            bk[i] = INFINITY;//ML_POSINF;
        } else{for(i=0; i < *nb; i++)
            bk[i] = 0.;}
        *ncalc = *nb;
        return;
    }
    k = 0;
    if (nu < sqxmin_BESS_K) {
        nu = 0.;
    } else if (nu > .5) {
        k = 1;
        nu -= 1.;
    }
    twonu = nu + nu;
    iend = *nb + k - 1;
    c = nu * nu;
    d3 = -c;
    if (ex <= 1.) {
        
        d1 = 0.; d2 = p[0];
        t1 = 1.; t2 = q[0];
        for (i = 2; i <= 7; i += 2) {
        d1 = c * d1 + p[i - 1];
        d2 = c * d2 + p[i];
        t1 = c * t1 + q[i - 1];
        t2 = c * t2 + q[i];
        }
        d1 = nu * d1;
        t1 = nu * t1;
        f1 = log(ex);
        f0 = a + nu * (p[7] - nu * (d1 + d2) / (t1 + t2)) - f1;
        q0 = exp(-nu * (a - nu * (p[7] + nu * (d1-d2) / (t1-t2)) - f1));
        f1 = nu * f0;
        p0 = exp(f1);
        
        d1 = r[4];
        t1 = 1.;
        for (i = 0; i < 4; ++i) {
        d1 = c * d1 + r[i];
        t1 = c * t1 + s[i];
        }
        
        if (fabs(f1) <= .5) {
        f1 *= f1;
        d2 = 0.;
        for (i = 0; i < 6; ++i) {
            d2 = f1 * d2 + t[i];
        }
        d2 = f0 + f0 * f1 * d2;
        } else {
        d2 = sinh(f1) / nu;
        }
        f0 = d2 - nu * d1 / (t1 * p0);
        if (ex <= 1e-10) {
        
        bk[0] = f0 + ex * f0;
        if (*ize == 1) {
            bk[0] -= ex * bk[0];
        }
        ratio = p0 / f0;
        c = ex * DBL_MAX;
        if (k != 0) {
           
            *ncalc = -1;
            if (bk[0] >= c / ratio) {
            return;
            }
            bk[0] = ratio * bk[0] / ex;
            twonu += 2.;
            ratio = twonu;
        }
        *ncalc = 1;
        if (*nb == 1)
            return;

        
        *ncalc = -1;
        for (i = 1; i < *nb; ++i) {
            if (ratio >= c)
            return;

            bk[i] = ratio / ex;
            twonu += 2.;
            ratio = twonu;
        }
        *ncalc = 1;
        goto L420;
        } else {
        
        c = 1.;
        x2by4 = ex * ex / 4.;
        p0 = .5 * p0;
        q0 = .5 * q0;
        d1 = -1.;
        d2 = 0.;
        bk1 = 0.;
        bk2 = 0.;
        f1 = f0;
        f2 = p0;
        do {
            d1 += 2.;
            d2 += 1.;
            d3 = d1 + d3;
            c = x2by4 * c / d2;
            f0 = (d2 * f0 + p0 + q0) / d3;
            p0 /= d2 - nu;
            q0 /= d2 + nu;
            t1 = c * f0;
            t2 = c * (p0 - d2 * f0);
            bk1 += t1;
            bk2 += t2;
        } while (fabs(t1 / (f1 + bk1)) > DBL_EPSILON ||
             fabs(t2 / (f2 + bk2)) > DBL_EPSILON);
        bk1 = f1 + bk1;
        bk2 = 2. * (f2 + bk2) / ex;
        if (*ize == 2) {
            d1 = exp(ex);
            bk1 *= d1;
            bk2 *= d1;
        }
        wminf = estf[0] * ex + estf[1];
        }
    } else if (DBL_EPSILON * ex > 1.) {
        
        *ncalc = *nb;
        bk1 = 1. / (M_SQRT_2dPI * sqrt(ex));
        for (i = 0; i < *nb; ++i)
        bk[i] = bk1;
        return;

    } else {
        
        twox = ex + ex;
        blpha = 0.;
        ratio = 0.;
        if (ex <= 4.) {
        
        d2 = trunc(estm[0] / ex + estm[1]);
        m = (int) d2;
        d1 = d2 + d2;
        d2 -= .5;
        d2 *= d2;
        for (i = 2; i <= m; ++i) {
            d1 -= 2.;
            d2 -= d1;
            ratio = (d3 + d2) / (twox + d1 - ratio);
        }
        
        d2 = trunc(estm[2] * ex + estm[3]);
        m = (int) d2;
        c = fabs(nu);
        d3 = c + c;
        d1 = d3 - 1.;
        f1 = DBL_MIN;
        f0 = (2. * (c + d2) / ex + .5 * ex / (c + d2 + 1.)) * DBL_MIN;
        for (i = 3; i <= m; ++i) {
            d2 -= 1.;
            f2 = (d3 + d2 + d2) * f0;
            blpha = (1. + d1 / d2) * (f2 + blpha);
            f2 = f2 / ex + f1;
            f1 = f0;
            f0 = f2;
        }
        f1 = (d3 + 2.) * f0 / ex + f1;
        d1 = 0.;
        t1 = 1.;
        for (i = 1; i <= 7; ++i) {
            d1 = c * d1 + p[i - 1];
            t1 = c * t1 + q[i - 1];
        }
        p0 = exp(c * (a + c * (p[7] - c * d1 / t1) - log(ex))) / ex;
        f2 = (c + .5 - ratio) * f1 / ex;
        bk1 = p0 + (d3 * f0 - f2 + f0 + blpha) / (f2 + f1 + f0) * p0;
        if (*ize == 1) {
            bk1 *= exp(-ex);
        }
        wminf = estf[2] * ex + estf[3];
        } else {
        
        dm = trunc(estm[4] / ex + estm[5]);
        m = (int) dm;
        d2 = dm - .5;
        d2 *= d2;
        d1 = dm + dm;
        for (i = 2; i <= m; ++i) {
            dm -= 1.;
            d1 -= 2.;
            d2 -= d1;
            ratio = (d3 + d2) / (twox + d1 - ratio);
            blpha = (ratio + ratio * blpha) / dm;
        }
        bk1 = 1. / ((M_SQRT_2dPI + M_SQRT_2dPI * blpha) * sqrt(ex));
        if (*ize == 1)
            bk1 *= exp(-ex);
        wminf = estf[4] * (ex - fabs(ex - estf[6])) + estf[5];
        }
        
        bk2 = bk1 + bk1 * (nu + .5 - ratio) / ex;
    }
    
    *ncalc = *nb;
    bk[0] = bk1;
    if (iend == 0)
        return;

    j = 1 - k;
    if (j >= 0)
        bk[j] = bk2;

    if (iend == 1)
        return;

    m = min((int) (wminf - nu),iend);
    for (i = 2; i <= m; ++i) {
        t1 = bk1;
        bk1 = bk2;
        twonu += 2.;
        if (ex < 1.) {
        if (bk1 >= DBL_MAX / twonu * ex)
            break;
        } else {
        if (bk1 / ex >= DBL_MAX / twonu)
            break;
        }
        bk2 = twonu / ex * bk1 + t1;
        ii = i;
        ++j;
        if (j >= 0) {
        bk[j] = bk2;
        }
    }

    m = ii;
    if (m == iend) {
        return;
    }
    ratio = bk2 / bk1;
    mplus1 = m + 1;
    *ncalc = -1;
    for (i = mplus1; i <= iend; ++i) {
        twonu += 2.;
        ratio = twonu / ex + 1./ratio;
        ++j;
        if (j >= 1) {
        bk[j] = ratio;
        } else {
        if (bk2 >= DBL_MAX / ratio)
            return;

        bk2 *= ratio;
        }
    }
    *ncalc = max(1, mplus1 - k);
    if (*ncalc == 1)
        bk[0] = bk2;
    if (*nb == 1)
        return;

L420:
    for (i = *ncalc; i < *nb; ++i) {
#ifndef IEEE_754
        if (bk[i-1] >= DBL_MAX / bk[i])
        return;
#endif
        bk[i] *= bk[i-1];
        (*ncalc)++;
    }
    }
 
    return;
}






double bessel_i_ex(double x, double alpha, double expo, double *bi)
{
    int nb, ncalc, ize;
    double na;

#ifdef IEEE_754
    
    if (isnan(x) || isnan(alpha)) return x + alpha;
#endif
    if (x < 0) {
    //ML_WARNING(ME_RANGE, "bessel_i");
    return NAN;
    }
    ize = (int)expo;
    na = floor(alpha);
    if (alpha < 0) {
    
    return(bessel_i_ex(x, -alpha, expo, bi) +
           ((alpha == na) ? 0 :
        bessel_k_ex(x, -alpha, expo, bi) *
        ((ize == 1)? 2. : 2.*exp(-2.*x))/M_PI * sinpi(-alpha)));
    }
    nb = 1 + (int)na;
    alpha -= (double)(nb-1);
    I_bessel(&x, &alpha, &nb, &ize, bi, &ncalc);
    if(ncalc != nb) {
    if(ncalc < 0)
        return(-1);
    else
        return(-1);
    }
    x = bi[nb-1];
    return x;
}

double fmax2(double x, double y)
{
#ifdef IEEE_754
    if (isnan(x) || isnan(y))
        return x + y;
#endif
    return (x < y) ? y : x;
}

static void I_bessel(double *x, double *alpha, int *nb,
             int *ize, double *bi, int *ncalc)
{

    double const__ = 1.585;

   
    int nend, intx, nbmx, k, l, n, nstart;
    double pold, test,    p, em, en, empal, emp2al, halfx,
    aa, bb, cc, psave, plast, tover, psavel, sum, nu, twonu;

   
    --bi;
    nu = *alpha;
    twonu = nu + nu;

    if (*nb > 0 && *x >= 0. &&    (0. <= nu && nu < 1.) &&
    (1 <= *ize && *ize <= 2) ) {
    *ncalc = *nb;
    if(*ize == 1 && *x > exparg_BESS) {
        for(k=1; k <= *nb; k++)
        bi[k]=INFINITY;
        return;
    }
    if(*ize == 2 && *x > xlrg_BESS_IJ) {
        for(k=1; k <= *nb; k++)
        bi[k]= 0.;
        return;
    }
    intx = (int) (*x);
    if (*x >= rtnsig_BESS) {

        nbmx = *nb - intx;
        n = intx + 1;
        en = (double) (n + n) + twonu;
        plast = 1.;
        p = en / *x;
        test = ensig_BESS + ensig_BESS;
        if (intx << 1 > nsig_BESS * 5) {
        test = sqrt(test * p);
        } else {
        test /= pow(const__, intx);
        }
        if (nbmx >= 3) {
        tover = enten_BESS / ensig_BESS;
        nstart = intx + 2;
        nend = *nb - 1;
        for (k = nstart; k <= nend; ++k) {
            n = k;
            en += 2.;
            pold = plast;
            plast = p;
            p = en * plast / *x + pold;
            if (p > tover) {
            
            tover = enten_BESS;
            p /= tover;
            plast /= tover;
            psave = p;
            psavel = plast;
            nstart = n + 1;
            do {
                ++n;
                en += 2.;
                pold = plast;
                plast = p;
                p = en * plast / *x + pold;
            }
            while (p <= 1.);

            bb = en / *x;
            
            test = pold * plast / ensig_BESS;
            test *= .5 - .5 / (bb * bb);
            p = plast * tover;
            --n;
            en -= 2.;
            nend = min(*nb,n);
            for (l = nstart; l <= nend; ++l) {
                *ncalc = l;
                pold = psavel;
                psavel = psave;
                psave = en * psavel / *x + pold;
                if (psave * psavel > test) {
                goto L90;
                }
            }
            *ncalc = nend + 1;
L90:
            --(*ncalc);
            goto L120;
            }
        }
            
        n = nend;
            
        en = (double)(n + n) + twonu;
       
        test = fmax2(test,sqrt(plast * ensig_BESS) * sqrt(p + p));
        }
       
        do {
        ++n;
        en += 2.;
        pold = plast;
        plast = p;
        p = en * plast / *x + pold;
        } while (p < test);

L120:

        ++n;
        en += 2.;
        bb = 0.;
        aa = 1. / p;
        em = (double) n - 1.;
        empal = em + nu;
        emp2al = em - 1. + twonu;
        sum = aa * empal * emp2al / em;
        nend = n - *nb;
        if (nend < 0) {
        
        bi[n] = aa;
        nend = -nend;
        for (l = 1; l <= nend; ++l) {
            bi[n + l] = 0.;
        }
        } else {
        if (nend > 0) {
           

            for (l = 1; l <= nend; ++l) {
            --n;
            en -= 2.;
            cc = bb;
            bb = aa;
            
            if(nend > 100 && aa > 1e200) {
               
                cc    = ldexp(cc, -900);
                bb    = ldexp(bb, -900);
                sum = ldexp(sum,-900);
            }
            aa = en * bb / *x + cc;
            em -= 1.;
            emp2al -= 1.;
            if (n == 1) {
                break;
            }
            if (n == 2) {
                emp2al = 1.;
            }
            empal -= 1.;
            sum = (sum + aa * empal) * emp2al / em;
            }
        }
        
        bi[n] = aa;
        if (*nb <= 1) {
            sum = sum + sum + aa;
            goto L230;
        }
      
        --n;
        en -= 2.;
        bi[n] = en * aa / *x + bb;
        if (n == 1) {
            goto L220;
        }
        em -= 1.;
        if (n == 2)
            emp2al = 1.;
        else
            emp2al -= 1.;

        empal -= 1.;
        sum = (sum + bi[n] * empal) * emp2al / em;
        }
        nend = n - 2;
        if (nend > 0) {
        
        for (l = 1; l <= nend; ++l) {
            --n;
            en -= 2.;
            bi[n] = en * bi[n + 1] / *x + bi[n + 2];
            em -= 1.;
            if (n == 2)
            emp2al = 1.;
            else
            emp2al -= 1.;
            empal -= 1.;
            sum = (sum + bi[n] * empal) * emp2al / em;
        }
        }
        
        bi[1] = 2. * empal * bi[2] / *x + bi[3];
L220:
        sum = sum + sum + bi[1];

L230:
       
        if (nu != 0.)
        sum *= (Rf_gamma_cody(1. + nu) * pow(*x * .5, -nu));
        if (*ize == 1)
        sum *= exp(-(*x));
        aa = enmten_BESS;
        if (sum > 1.)
        aa *= sum;
        for (n = 1; n <= *nb; ++n) {
        if (bi[n] < aa)
            bi[n] = 0.;
        else
            bi[n] /= sum;
        }
        return;
    } else {
        
        aa = 1.;
        empal = 1. + nu;
#ifdef IEEE_754
       
        halfx = .5 * *x;
#else
        if (*x > enmten_BESS)
            halfx = .5 * *x;
        else
            halfx = 0.;
#endif
        if (nu != 0.)
        aa = pow(halfx, nu) / Rf_gamma_cody(empal);
        if (*ize == 2)
        aa *= exp(-(*x));
        bb = halfx * halfx;
        bi[1] = aa + aa * bb / empal;
        if (*x != 0. && bi[1] == 0.)
        *ncalc = 0;
        if (*nb > 1) {
        if (*x == 0.) {
            for (n = 2; n <= *nb; ++n)
            bi[n] = 0.;
        } else {
           
            cc = halfx;
            tover = (enmten_BESS + enmten_BESS) / *x;
            if (bb != 0.)
            tover = enmten_BESS / bb;
            for (n = 2; n <= *nb; ++n) {
            aa /= empal;
            empal += 1.;
            aa *= cc;
            if (aa <= tover * empal)
                bi[n] = aa = 0.;
            else
                bi[n] = aa + aa * bb / empal;
            if (bi[n] == 0. && *ncalc > n)
                *ncalc = n - 1;
            }
        }
        }
    }
    } else {
    *ncalc = min(*nb,0) - 1;
    }
}


double Rf_gamma_cody(double x)
{

    double sqrtpi = .9189385332046727417803297;


    double xbig = 171.624;
    // ML_POSINF ==   const double xinf = 1.79e308;
    // DBL_EPSILON = const double eps = 2.22e-16;
    // DBL_MIN ==   const double xminin = 2.23e-308;

    
    double p[8] = {
    -1.71618513886549492533811,
    24.7656508055759199108314,-379.804256470945635097577,
    629.331155312818442661052,866.966202790413211295064,
    -31451.2729688483675254357,-36144.4134186911729807069,
    66456.1438202405440627855 };
    double q[8] = {
    -30.8402300119738975254353,
    315.350626979604161529144,-1015.15636749021914166146,
    -3107.77167157231109440444,22538.1184209801510330112,
    4755.84627752788110767815,-134659.959864969306392456,
    -115132.259675553483497211 };
    
    double c[7] = {
    -.001910444077728,8.4171387781295e-4,
    -5.952379913043012e-4,7.93650793500350248e-4,
    -.002777777777777681622553,.08333333333333333331554247,
    .0057083835261 };

   
    int i, n;
    int parity;
    double fact, xden, xnum, y, z, yi, res, sum, ysq;

    parity = (0);
    fact = 1.;
    n = 0;
    y = x;
    if (y <= 0.) {
    
    y = -x;
    yi = trunc(y);
    res = y - yi;
    if (res != 0.) {
        if (yi != trunc(yi * .5) * 2.)
        parity = (1);
        fact = -M_PI / sinpi(res);
        y += 1.;
    } else {
        return(INFINITY);
    }
    }
   
    if (y < DBL_EPSILON) {
   
    if (y >= DBL_MIN) {
        res = 1. / y;
    } else {
        return(INFINITY);
    }
    } else if (y < 12.) {
    yi = y;
    if (y < 1.) {
        
        z = y;
        y += 1.;
    } else {
        
        n = (int) y - 1;
        y -= (double) n;
        z = y - 1.;
    }
    
    xnum = 0.;
    xden = 1.;
    for (i = 0; i < 8; ++i) {
        xnum = (xnum + p[i]) * z;
        xden = xden * z + q[i];
    }
    res = xnum / xden + 1.;
    if (yi < y) {
       
        res /= yi;
    } else if (yi > y) {
        
        for (i = 0; i < n; ++i) {
        res *= y;
        y += 1.;
        }
    }
    } else {
    
    if (y <= xbig) {
        ysq = y * y;
        sum = c[6];
        for (i = 0; i < 6; ++i) {
        sum = sum / ysq + c[i];
        }
        sum = sum / y - y + sqrtpi;
        sum += (y - .5) * log(y);
        res = exp(sum);
    } else {
        return(INFINITY);
    }
    }
    
    if (parity)
    res = -res;
    if (fact != 1.)
    res = fact / res;
    return res;
}


// ===================================== END Bessel  =====================================//




// ===================================== START Integrate  =====================================//
// https://github.com/wch/r-source/blob/trunk/src/appl/integrate.c

typedef void integr_fn(double *x, int n, void *ex);
void Rdqags(integr_fn f, void *ex, double *a, double *b,
            double *epsabs, double *epsrel,
            double *result, double *abserr, int *neval, int *ier,
            int *limit, int *lenw, int *last,  int *iwork,  double *work);


static void rdqagse(integr_fn f, void *ex, double *, double *,
                    double *, double *, int *, double *, double *,
                    int *, int *, double *, double *, double *,
                    double *, int *, int *);

static void rdqk21(integr_fn f, void *ex,
                   double *, double *, double *, double *, double *, double *);
static void rdqelg(int *, double *, double *, double *, double *, int *);


static void rdqpsrt(int *, int *, int *, double *, double *, int *, int *);



void Rdqags(integr_fn f, void *ex, double *a, double *b,
            double *epsabs, double *epsrel,
            double *result, double *abserr, int *neval, int *ier,
            int *limit, int *lenw, int *last,  int *iwork,  double *work)
{
    int l1, l2, l3;
    
    //         check validity of limit and lenw.
    
    *ier = 6;
    *neval = 0;
    *last = 0;
    *result = 0.;
    *abserr = 0.;
    if (*limit < 1 || *lenw < *limit *4) {return;}
    
    //         prepare call for dqagse.
    
    l1 = *limit;
    l2 = *limit + l1;
    l3 = *limit + l2;
    
    rdqagse(f, ex, a, b, epsabs, epsrel, limit, result, abserr, neval, ier,
            work, &work[l1], &work[l2], &work[l3], iwork, last);
    
    return;
}

static void rdqagse(integr_fn f, void *ex, double *a, double *b, double *
                    epsabs, double *epsrel, int *limit, double *result,
                    double *abserr, int *neval, int *ier, double *alist,
                    double *blist, double *rlist, double *elist, int *
                    iord, int *last)
{
    // Local variables
    bool noext, extrap;
    int k,ksgn, nres;
    int ierro;
    int ktmin, nrmax;
    int iroff1, iroff2, iroff3;
    int id;
    int numrl2;
    int jupbnd;
    int maxerr;
    double res3la[3];
    double rlist2[52];
    double abseps, area, area1, area2, area12, dres, epmach;
    double a1, a2, b1, b2, defabs, defab1, defab2, oflow, uflow, resabs, reseps;
    double error1, error2, erro12, errbnd, erlast, errmax, errsum;
    
    double correc = 0.0, erlarg = 0.0, ertest = 0.0, small = 0.0;
    
    
    // ===first executable statement  dqagse
    // Parameter adjustments
    --iord;
    --elist;
    --rlist;
    --blist;
    --alist;
    
    // Function Body
    epmach = DBL_EPSILON;
    
    //            test on validity of parameters
    //            ------------------------------
    *ier = 0;
    *neval = 0;
    *last = 0;
    *result = 0.;
    *abserr = 0.;
    alist[1] = *a;
    blist[1] = *b;
    rlist[1] = 0.;
    elist[1] = 0.;
    if (*epsabs <= 0. && *epsrel < max(epmach * 50., 5e-29)) {
        *ier = 6;
        return;
    }
    
    //           first approximation to the integral
    //           -----------------------------------
    
    uflow = DBL_MIN;
    oflow = DBL_MAX;
    ierro = 0;
    rdqk21(f, ex, a, b, result, abserr, &defabs, &resabs);
    
    //           test on accuracy.
    
    dres = fabs(*result);
    errbnd = max(*epsabs, *epsrel * dres);
    *last = 1;
    rlist[1] = *result;
    elist[1] = *abserr;
    iord[1] = 1;
    if (*abserr <= epmach * 100. * defabs && *abserr > errbnd)
    {*ier = 2;}
    if (*limit == 1)
    {*ier = 1;}
    if (*ier != 0 || (*abserr <= errbnd && *abserr != resabs)
        || *abserr == 0.) {goto L140;}
    
    //           initialization
    //           --------------
    
    rlist2[0] = *result;
    errmax = *abserr;
    maxerr = 1;
    area = *result;
    errsum = *abserr;
    *abserr = oflow;
    nrmax = 1;
    nres = 0;
    numrl2 = 2;
    ktmin = 0;
    extrap = false;
    noext = false;
    iroff1 = 0;
    iroff2 = 0;
    iroff3 = 0;
    ksgn = -1;
    if (dres >= (1. - epmach * 50.) * defabs) {
        ksgn = 1;
    }
    
    //           main do-loop
    //           ------------
    
    for (*last = 2; *last <= *limit; ++(*last)) {
        
        //           bisect the subinterval with the nrmax-th largest error estimate.
        
        a1 = alist[maxerr];
        b1 = (alist[maxerr] + blist[maxerr]) * .5;
        a2 = b1;
        b2 = blist[maxerr];
        erlast = errmax;
        rdqk21(f, ex, &a1, &b1, &area1, &error1, &resabs, &defab1);
        rdqk21(f, ex, &a2, &b2, &area2, &error2, &resabs, &defab2);
        
        //           improve previous approximations to integral
        //and error and test for accuracy.
        
        area12 = area1 + area2;
        erro12 = error1 + error2;
        errsum = errsum + erro12 - errmax;
        area = area + area12 - rlist[maxerr];
        if (!(defab1 == error1 || defab2 == error2)) {
            
            if (fabs(rlist[maxerr] - area12) <= fabs(area12) * 1e-5 &&
                erro12 >= errmax * .99) {
                if (extrap){
                    ++iroff2;}
                else //if(! extrap)
                { ++iroff1;}
            }
            if (*last > 10 && erro12 > errmax)
            {++iroff3;}
        }
        rlist[maxerr] = area1;
        rlist[*last] = area2;
        errbnd = max(*epsabs, *epsrel * fabs(area));
        
        //          test for roundoff error and eventually set error flag.
        
        if (iroff1 + iroff2 >= 10 || iroff3 >= 20)
        {*ier = 2;}
        if (iroff2 >= 5)
        {ierro = 3;}
        
        //set error flag in the case that the number of subintervals equals limit.
        if (*last == *limit)
        {*ier = 1;}
        
        //          set error flag in the case of bad integrand behaviour
        //at a point of the integration range.
        
        if (max(fabs(a1), fabs(b2)) <=
            (epmach * 100. + 1.) * (fabs(a2) + uflow * 1e3)) {
            *ier = 4;
        }
        
        //           append the newly-created intervals to the list.
        
        if (error2 > error1) {
            alist[maxerr] = a2;
            alist[*last] = a1;
            blist[*last] = b1;
            rlist[maxerr] = area2;
            rlist[*last] = area1;
            elist[maxerr] = error2;
            elist[*last] = error1;
        } else {
            alist[*last] = a2;
            blist[maxerr] = b1;
            blist[*last] = b2;
            elist[maxerr] = error1;
            elist[*last] = error2;
        }
        
        //           call subroutine dqpsrt to maintain the descending ordering
        // in the list of error estimates and select the subinterval
        //with nrmax-th largest error estimate (to be bisected next).
        
        //L30:
        rdqpsrt(limit, last, &maxerr, &errmax, &elist[1], &iord[1], &nrmax);
        
        if (errsum <= errbnd)   {goto L115;}// ===jump out of do-loop
        if (*ier != 0)        {break;}
        if (*last == 2)    { // L80:
            small = fabs(*b - *a) * .375;
            erlarg = errsum;
            ertest = errbnd;
            rlist2[1] = area;    continue;
        }
        if (noext)        {continue;}
        
        erlarg -= erlast;
        if (fabs(b1 - a1) > small) {
            erlarg += erro12;
        }
        if (!extrap) {
            
            //         test whether the interval to be bisected next is the
            // smallest interval.
            
            if (fabs(blist[maxerr] - alist[maxerr]) > small) {
                continue;
            }
            extrap = true;
            nrmax = 2;
        }
        
        if (ierro != 3 && erlarg > ertest) {
            
            //           the smallest interval has the largest error.
            // before bisecting decrease the sum of the errors over the
            // larger intervals (erlarg) and perform extrapolation.
            
            id = nrmax;
            jupbnd = *last;
            if (*last > *limit / 2 + 2) {
                jupbnd = *limit + 3 - *last;
            }
            for (k = id; k <= jupbnd; ++k) {
                maxerr = iord[nrmax];
                errmax = elist[maxerr];
                if (fabs(blist[maxerr] - alist[maxerr]) > small) {
                    goto L90;
                }
                ++nrmax;
                // L50:
            }
        }
        //           perform extrapolation.  L60:
        
        ++numrl2;
        rlist2[numrl2 - 1] = area;
        rdqelg(&numrl2, rlist2, &reseps, &abseps, res3la, &nres);
        ++ktmin;
        if (ktmin > 5 && *abserr < errsum * .001) {
            *ier = 5;
        }
        if (abseps < *abserr) {
            ktmin = 0;
            *abserr = abseps;
            *result = reseps;
            correc = erlarg;
            ertest = max(*epsabs, *epsrel * fabs(reseps));
            if (*abserr <= ertest) {
                break;
            }
        }
        
        //           prepare bisection of the smallest interval.  L70:
        
        if (numrl2 == 1) {
            noext = true;
        }
        if (*ier == 5) {
            break;
        }
        maxerr = iord[1];
        errmax = elist[maxerr];
        nrmax = 1;
        extrap = false;
        small *= .5;
        erlarg = errsum;
    L90:
        ;
    }
    
    
    // L100:    set final result and error estimate.
    //        ------------------------------------
    
    if (*abserr == oflow)     {goto L115;}
    if (*ier + ierro == 0)     {goto L110;}
    if (ierro == 3)
        *abserr += correc;
    if (*ier == 0)
        *ier = 3;
    if (*result == 0. || area == 0.) {
        if (*abserr > errsum)     {goto L115;}
        if (area == 0.)     {goto L130;}
    }
    else { // L105:
        if (*abserr / fabs(*result) > errsum / fabs(area))
        {goto L115;}
    }
    
L110://        test on divergence.
    if (ksgn == -1 && max(fabs(*result), fabs(area)) <= defabs * .01) {
        goto L130;
    }
    if (.01 > *result / area || *result / area > 100. || errsum > fabs(area)) {
        *ier = 5;
    }
    goto L130;
    
L115://        compute global integral sum.
    *result = 0.;
    for (k = 1; k <= *last; ++k)
        *result += rlist[k];
    *abserr = errsum;
L130:
    if (*ier > 2)
    {L140:
        *neval = *last * 42 - 21;}
    return;
}


static void rdqelg(int *n, double *epstab, double *
                   result, double *abserr, double *res3la, int *nres)
{
    // Local variables
    int i__, indx, ib, ib2, ie, k1, k2, k3, num, newelm, limexp;
    double delta1, delta2, delta3, e0, e1, e1abs, e2, e3, epmach, epsinf;
    double oflow, ss, res;
    double errA, err1, err2, err3, tol1, tol2, tol3;
    
    
    
    // ===first executable statement  dqelg
    // Parameter adjustments
    --res3la;
    --epstab;
    
    // Function Body
    epmach = DBL_EPSILON;
    oflow = DBL_MAX;
    ++(*nres);
    *abserr = oflow;
    *result = epstab[*n];
    if (*n < 3) {
        goto L100;
    }
    limexp = 50;
    epstab[*n + 2] = epstab[*n];
    newelm = (*n - 1) / 2;
    epstab[*n] = oflow;
    num = *n;
    k1 = *n;
    for (i__ = 1; i__ <= newelm; ++i__) {
        k2 = k1 - 1;
        k3 = k1 - 2;
        res = epstab[k1 + 2];
        e0 = epstab[k3];
        e1 = epstab[k2];
        e2 = res;
        e1abs = fabs(e1);
        delta2 = e2 - e1;
        err2 = fabs(delta2);
        tol2 = max(fabs(e2), e1abs) * epmach;
        delta3 = e1 - e0;
        err3 = fabs(delta3);
        tol3 = max(e1abs, fabs(e0)) * epmach;
        if (err2 <= tol2 && err3 <= tol3) {
            //           if e0, e1 and e2 are equal to within machine
            // accuracy, convergence is assumed.
            *result = res;//        result = e2
            *abserr = err2 + err3;//    abserr = fabs(e1-e0)+fabs(e2-e1)
            
            goto L100;    // ===jump out of do-loop
        }
        
        e3 = epstab[k1];
        epstab[k1] = e1;
        delta1 = e1 - e3;
        err1 = fabs(delta1);
        tol1 = max(e1abs, fabs(e3)) * epmach;
        
        //          if two elements are very close to each other, omit
        // a part of the table by adjusting the value of n
        
        if (err1 > tol1 && err2 > tol2 && err3 > tol3) {
            ss = 1. / delta1 + 1. / delta2 - 1. / delta3;
            epsinf = fabs(ss * e1);
            
            //           test to detect irregular behaviour in the table, and
            // eventually omit a part of the table adjusting the value of n.
            
            if (epsinf > 1e-4) {
                goto L30;
            }
        }
        
        *n = i__ + i__ - 1;
        goto L50;// ===jump out of do-loop
        
        
    L30:// compute a new element and eventually adjust the value of result.
        
        res = e1 + 1. / ss;
        epstab[k1] = res;
        k1 += -2;
        errA = err2 + fabs(res - e2) + err3;
        if (errA <= *abserr) {
            *abserr = errA;
            *result = res;
        }
    }
    
    //           shift the table.
    
L50:
    if (*n == limexp) {
        *n = (limexp / 2 << 1) - 1;
    }
    
    if (num / 2 << 1 == num) {ib = 2;} else {ib = 1;}
    ie = newelm + 1;
    for (i__ = 1; i__ <= ie; ++i__) {
        ib2 = ib + 2;
        epstab[ib] = epstab[ib2];
        ib = ib2;
    }
    if (num != *n) {
        indx = num - *n + 1;
        for (i__ = 1; i__ <= *n; ++i__) {
            epstab[i__] = epstab[indx];
            ++indx;
        }
    }
    //L80:
    if (*nres >= 4) {
        // L90:
        *abserr = fabs(*result - res3la[3]) +
        fabs(*result - res3la[2]) +
        fabs(*result - res3la[1]);
        res3la[1] = res3la[2];
        res3la[2] = res3la[3];
        res3la[3] = *result;
    } else {
        res3la[*nres] = *result;
        *abserr = oflow;
    }
    
L100:// compute error estimate
    *abserr = max(*abserr, epmach * 5. * fabs(*result));
    return;
}



static void  rdqk21(integr_fn f, void *ex, double *a, double *b, double *result,
                    double *abserr, double *resabs, double *resasc)
{
    // Initialized data
    
    double wg[5] = { .066671344308688137593568809893332,
        .149451349150580593145776339657697,
        .219086362515982043995534934228163,
        .269266719309996355091226921569469,
        .295524224714752870173892994651338 };
    double xgk[11] = { .995657163025808080735527280689003,
        .973906528517171720077964012084452,
        .930157491355708226001207180059508,
        .865063366688984510732096688423493,
        .780817726586416897063717578345042,
        .679409568299024406234327365114874,
        .562757134668604683339000099272694,
        .433395394129247190799265943165784,
        .294392862701460198131126603103866,
        .14887433898163121088482600112972,0. };
    double wgk[11] = { .011694638867371874278064396062192,
        .03255816230796472747881897245939,
        .05475589657435199603138130024458,
        .07503967481091995276704314091619,
        .093125454583697605535065465083366,
        .109387158802297641899210590325805,
        .123491976262065851077958109831074,
        .134709217311473325928054001771707,
        .142775938577060080797094273138717,
        .147739104901338491374841515972068,
        .149445554002916905664936468389821 };
    
    
    // Local variables
    double fv1[10], fv2[10], vec[21];
    double absc, resg, resk, fsum, fval1, fval2;
    double hlgth, centr, reskh, uflow;
    double fc, epmach, dhlgth;
    int j, jtw, jtwm1;
    
    
    
    // ===first executable statement  dqk21
    epmach = DBL_EPSILON;
    uflow = DBL_MIN;
    
    centr = (*a + *b) * .5;
    hlgth = (*b - *a) * .5;
    dhlgth = fabs(hlgth);
    
    //           compute the 21-point kronrod approximation to
    // the integral, and estimate the absolute error.
    
    resg = 0.;
    vec[0] = centr;
    for (j = 1; j <= 5; ++j) {
        jtw = j << 1;
        absc = hlgth * xgk[jtw - 1];
        vec[(j << 1) - 1] = centr - absc;
        // L5:
        vec[j * 2] = centr + absc;
    }
    for (j = 1; j <= 5; ++j) {
        jtwm1 = (j << 1) - 1;
        absc = hlgth * xgk[jtwm1 - 1];
        vec[(j << 1) + 9] = centr - absc;
        vec[(j << 1) + 10] = centr + absc;
    }
    f(vec, 21, ex);
    fc = vec[0];
    resk = wgk[10] * fc;
    *resabs = fabs(resk);
    for (j = 1; j <= 5; ++j) {
        jtw = j << 1;
        absc = hlgth * xgk[jtw - 1];
        fval1 = vec[(j << 1) - 1];
        fval2 = vec[j * 2];
        fv1[jtw - 1] = fval1;
        fv2[jtw - 1] = fval2;
        fsum = fval1 + fval2;
        resg += wg[j - 1] * fsum;
        resk += wgk[jtw - 1] * fsum;
        *resabs += wgk[jtw - 1] * (fabs(fval1) + fabs(fval2));
        // L10:
    }
    for (j = 1; j <= 5; ++j) {
        jtwm1 = (j << 1) - 1;
        absc = hlgth * xgk[jtwm1 - 1];
        fval1 = vec[(j << 1) + 9];
        fval2 = vec[(j << 1) + 10];
        fv1[jtwm1 - 1] = fval1;
        fv2[jtwm1 - 1] = fval2;
        fsum = fval1 + fval2;
        resk += wgk[jtwm1 - 1] * fsum;
        *resabs += wgk[jtwm1 - 1] * (fabs(fval1) + fabs(fval2));
        // L15:
    }
    reskh = resk * .5;
    *resasc = wgk[10] * fabs(fc - reskh);
    for (j = 1; j <= 10; ++j) {
        *resasc += wgk[j - 1] * (fabs(fv1[j - 1] - reskh) +
                                 fabs(fv2[j - 1] - reskh));
        // L20:
    }
    *result = resk * hlgth;
    *resabs *= dhlgth;
    *resasc *= dhlgth;
    *abserr = fabs((resk - resg) * hlgth);
    if (*resasc != 0. && *abserr != 0.) {
        *abserr = *resasc * min(1., pow(*abserr * 200. / *resasc, 1.5));
    }
    if (*resabs > uflow / (epmach * 50.)) {
        *abserr = max(epmach * 50. * *resabs, *abserr);
    }
    return;
}



static void rdqpsrt(int *limit, int *last, int *maxerr,
                    double *ermax, double *elist, int *iord, int *nrmax)
{
    // Local variables
    int i, j, k, ido, jbnd, isucc, jupbn;
    double errmin, errmax;
    
    
    // Parameter adjustments
    --iord;
    --elist;
    
    // Function Body
    
    //           check whether the list contains more than
    // two error estimates.
    if (*last <= 2) {
        iord[1] = 1;
        iord[2] = 2;
        goto Last;
    }
    //           this part of the routine is only executed if, due to a
    // difficult integrand, subdivision increased the error
    // estimate. in the normal case the insert procedure should
    // start after the nrmax-th largest error estimate.
    
    errmax = elist[*maxerr];
    if (*nrmax > 1) {
        ido = *nrmax - 1;
        for (i = 1; i <= ido; ++i) {
            isucc = iord[*nrmax - 1];
            if (errmax <= elist[isucc])
            {break;} // out of for-loop
            iord[*nrmax] = isucc;
            --(*nrmax);
            // L20:
        }
    }
    
    //L30:       compute the number of elements in the list to be maintained
    // in descending order. this number depends on the number of
    // subdivisions still allowed.
    if (*last > *limit / 2 + 2)
    {jupbn = *limit + 3 - *last;}
    else
        jupbn = *last;
    
    errmin = elist[*last];
    
    //          insert errmax by traversing the list top-down,
    // starting comparison from the element elist(iord(nrmax+1)).
    
    jbnd = jupbn - 1;
    for (i = *nrmax + 1; i <= jbnd; ++i) {
        isucc = iord[i];
        if (errmax >= elist[isucc]) {// ===jump out of do-loop
            // L60: insert errmin by traversing the list bottom-up.
            iord[i - 1] = *maxerr;
            for (j = i, k = jbnd; j <= jbnd; j++, k--) {
                isucc = iord[k];
                if (errmin < elist[isucc]) {
                    // goto L80; ===jump out of do-loop
                    iord[k + 1] = *last;
                    goto Last;
                }
                iord[k + 1] = isucc;
            }
            iord[i] = *last;
            goto Last;
        }
        iord[i - 1] = isucc;
    }
    
    iord[jbnd] = *maxerr;
    iord[jupbn] = *last;
    
Last:// set maxerr and ermax.
    
    *maxerr = iord[*nrmax];
    *ermax = elist[*maxerr];
    return;
}


double beta (double x, double y)
{
    return( (  tgamma(x)*tgamma(y)  )/ tgamma(x+y)  );
}


// integrand  in  generalized wendland function*/
double int_gen(double x,double mu, double alpha,double lag,double supp)
{
    double res=0.0,y;
    y=lag/supp;
    res=pow(1-x,mu-1)*pow(x*x-y*y,alpha)/beta(2*alpha+1,mu);
    return (res);
}

// function generalized wendland  to integrate

void integr_gen(double *x, int n, void *ex)
{
    int i;double mu,alpha,beta,y;
    mu =    ((double*)ex)[0];  //mu
    alpha = ((double*)ex)[1];  //alpha
    beta =     ((double*)ex)[2];  //csupp
    y =     ((double*)ex)[3];  //h
    for (i=0;i<n;i++) {x[i]=int_gen(x[i],mu,alpha,y,beta);}
    return;
}

// function computing generalized wendland
double wendintegral(double x, double par0,double par1,double par2)
{
    double ex[4], lower, upper, epsabs, epsrel, result, abserr;
    int neval, ier, subdiv, lenw, last;
    subdiv = 100;
    int iwork[subdiv];
    double work[4 * subdiv];
    epsabs = pow(DBL_EPSILON, 0.25);
    epsrel = epsabs;
    lenw = 4 * subdiv;             // as instructed in WRE
    ex[0] = par0; ex[1] = par1; ex[2] = par2;ex[3]=x;
    lower=x/(ex[2]);
    upper=1;
    // Compute the integral
    if(x<=par2) {
        Rdqags(integr_gen, (void *) &ex,
               &lower, &upper, &epsabs, &epsrel, &result,
               &abserr, &neval, &ier, &subdiv, &lenw, &last, iwork, work);
        
    }else   {result=0;}
    return(result);
}


// ===================================== END Integrate  =====================================//



// ============= START qnorm



#define R_Q_P01_boundaries(p, _LEFT_, _RIGHT_)        \
if (log_p) {                    \
if(p > 0)                    \
return NAN;                \
if(p == 0)             \
return lower_tail ? _RIGHT_ : _LEFT_;    \
if(p == -INFINITY)                \
return lower_tail ? _LEFT_ : _RIGHT_;    \
}                            \
else {                     \
if(p < 0 || p > 1)                \
return NAN;                \
if(p == 0)                    \
return lower_tail ? _LEFT_ : _RIGHT_;    \
if(p == 1)                    \
return lower_tail ? _RIGHT_ : _LEFT_;    \
}

#define R_D_Cval(p)    (lower_tail ? (0.5 - (p) + 0.5) : (p))

#define R_DT_CIv(p)    (log_p ? (lower_tail ? -expm1(p) : exp(p)) \
: R_D_Cval(p))

#define R_D_Lval(p)    (lower_tail ? (p) : (0.5 - (p) + 0.5))


#define R_DT_qIv(p)    (log_p ? (lower_tail ? exp(p) : - expm1(p)) \
: R_D_Lval(p))


double qnorm55(double p, double mu, double sigma, int lower_tail, int log_p)
{
    double p_, q, r, val;
    
    
    R_Q_P01_boundaries(p, -INFINITY, INFINITY);
    
    if(sigma  < 0)    return NAN;
    if(sigma == 0)    return mu;
    
    p_ = R_DT_qIv(p);
    q = p_ - 0.5;
    
    if (fabs(q) <= .425) {
        r = .180625 - q * q;
        val =
        q * (((((((r * 2509.0809287301226727 +
                   33430.575583588128105) * r + 67265.770927008700853) * r +
                 45921.953931549871457) * r + 13731.693765509461125) * r +
               1971.5909503065514427) * r + 133.14166789178437745) * r +
             3.387132872796366608)
        / (((((((r * 5226.495278852854561 +
                 28729.085735721942674) * r + 39307.89580009271061) * r +
               21213.794301586595867) * r + 5394.1960214247511077) * r +
             687.1870074920579083) * r + 42.313330701600911252) * r + 1.);
    }
    else {
        if (q > 0)
        {r = R_DT_CIv(p);}
        else
        {r = p_;}
        
        r = sqrt(- ((log_p &&
                     ((lower_tail && q <= 0) || (!lower_tail && q > 0))) ?
                    p : log(r)));
        
        if (r <= 5.) {
            r += -1.6;
            val = (((((((r * 7.7454501427834140764e-4 +
                         .0227238449892691845833) * r + .24178072517745061177) *
                       r + 1.27045825245236838258) * r +
                      3.64784832476320460504) * r + 5.7694972214606914055) *
                    r + 4.6303378461565452959) * r +
                   1.42343711074968357734)
            / (((((((r *
                     1.05075007164441684324e-9 + 5.475938084995344946e-4) *
                    r + .0151986665636164571966) * r +
                   .14810397642748007459) * r + .68976733498510000455) *
                 r + 1.6763848301838038494) * r +
                2.05319162663775882187) * r + 1.);
        }
        else {
            r += -5.;
            val = (((((((r * 2.01033439929228813265e-7 +
                         2.71155556874348757815e-5) * r +
                        .0012426609473880784386) * r + .026532189526576123093) *
                      r + .29656057182850489123) * r +
                     1.7848265399172913358) * r + 5.4637849111641143699) *
                   r + 6.6579046435011037772)
            / (((((((r *
                     2.04426310338993978564e-15 + 1.4215117583164458887e-7)*
                    r + 1.8463183175100546818e-5) * r +
                   7.868691311456132591e-4) * r + .0148753612908506148525)
                 * r + .13692988092273580531) * r +
                .59983220655588793769) * r + 1.);
        }
        
        if(q < 0.0)
            val = -val;
    }
    
    return (mu + sigma * val);
}

/*double qnorm55(double p, double mu, double sigma, int lower_tail, int log_p)
 {
 return(0.5);
 }*/

// ============= END: qnorm


// ===================================== START: Bivariate Normal  =====================================//

double Phi(double x);
double Phi2diag( double x, double a, double px, double pxs );
double Phi2help( double x, double y, double rho );
double Phi2( double x, double y, double rho );
double cdf_norm_OCL(double lim1,double lim2,double a11,double a12);
double cdf_norm2_OCL(double lim1,double lim2,double a11,double a12, double a22);


// https://www.jstatsoft.org/article/view/v052i10/v52i10.pdf

double pnorm_OCL(double x, double mu, double sd)
{
    double z = (x-mu)/(sd);
    return  (  (2-erfc(z/HSQRT))/2  )  ;
}

double Phi(double x)
{
    double val =(1+     (1-erfc(x/HSQRT) )    )/2;
    //double val =(1+     (1-0.1 )    )/2;
    return ( val );
}


double Phi2diag( double x, double a, double px, double pxs )
{
    double sol=NAN;
    if( a <= 0.0 ) sol = px;
    if( a >= 1.0 ) sol =  px * px;
    double b = 2.0 - a, sqrt_ab = sqrt( a * b );
    double c1 = 6.36619772367581343e-001;
    double c2 = 1.25331413731550025;
    double c3 = 1.57079632679489662;
    double c4 = 1.591549430918953358e-001;
    //double asr = ( a > 0.1 ? asin( 1.0 - a ) : acos( sqrt_ab ) );
    double asr;
    if(a > 0.1)
    {
        asr = asin( 1.0 - a );
    }else
    {
        asr = acos( sqrt_ab );
    }
    
    double comp = px * pxs;
    if( comp * ( 1.0 - a - c1 * asr ) < 5e-17 ) sol =  b * comp;
    double tmp = c2 * x;
    double alpha = a * x * x / b;
    double a_even = -tmp * a;
    double a_odd = -sqrt_ab * alpha;
    double beta = x * x;
    double b_even = tmp * sqrt_ab;
    double b_odd = sqrt_ab * beta;
    double delta = 2.0 * x * x / b;
    double d_even = ( 1.0 - a ) * c3 - asr;
    double d_odd = tmp * ( sqrt_ab - a );
    double res = 0.0, res_new = d_even + d_odd;
    int k = 2;
    /*while( res != res_new )
     {
     d_even = ( a_odd + b_odd + delta * d_even ) / k;
     a_even *= alpha / k;
     b_even *= beta / k;
     k++;
     a_odd *= alpha / k;
     b_odd *= beta / k;
     d_odd = ( a_even + b_even + delta * d_odd ) / k;
     k++;
     res = res_new;
     res_new += d_even + d_odd;
     }*/
    double cond = fabs(res-res_new);
    while( cond>DEPSILON )
    {
        d_even = ( a_odd + b_odd + delta * d_even ) / k;
        a_even *= alpha / k;
        b_even *= beta / k;
        k++;
        a_odd *= alpha / k;
        b_odd *= beta / k;
        d_odd = ( a_even + b_even + delta * d_odd ) / k;
        k++;
        res = res_new;
        res_new += d_even + d_odd;
        cond = fabs(res-res_new);
    }
    double sol1;
    if(isnan(sol))
    {
        res *= exp( -x * x / b ) * c4;
        sol1 =  max( ( 1.0 + c1 * asr ) * comp, b * comp - max( 0.0, res ) );
    }else{
        sol1 = sol;
    }
    return sol1;
}


double Phi2help( double x, double y, double rho )
{
    double s = sqrt( ( 1.0 - rho ) * ( 1.0 + rho ) );
    double a = 0.0, b1 = -fabs( x ), b2 = 0.0;
    if( rho > 0.99 )
    {
        double tmp = sqrt( ( 1.0 - rho ) / ( 1.0 + rho ) );
        b2 = -fabs( ( x - y ) / s - x * tmp );
        a = pow( ( x - y ) / x / s - tmp,2 );
    }
    else if( rho < -0.99 )
    {
        double tmp = sqrt( ( 1.0 + rho ) / ( 1.0 - rho ) );
        b2 = -fabs( ( x + y ) / s - x * tmp );
        a = pow( ( x + y ) / x / s - tmp,2 );
    }
    else
    {
        b2 = -fabs( rho * x - y ) / s;
        a = pow( b2 / x ,2);
    }
    
    double p1 = Phi( b1 ), p2 = Phi( b2 ), q = 0.0;
    if( a <= 1.0 )
        q = 0.5 * Phi2diag( b1, 2.0 * a / ( 1.0 + a ), p1, p2 );
    else
        q = p1 * p2 - 0.5 * Phi2diag( b2, 2.0 / ( 1.0 + a ), p2, p1 );
    int c1 = ( y / x >= rho ), c2 = ( x < 0.0 ), c3 = c2 && ( y >= 0.0 );
    
    bool c13 = (c1 && c3);
    bool c12 = (c1 && c2);
    double sol;
    if(c13) {sol = (q - 0.5);}
    else if(c12) {sol = (q);}
    else if(c1 ) {sol = (0.5 - p1 + q);}
    else if(c3 ) {sol = (p1 - q - 0.5);}
    else if(c2 ) {sol = (p1 - q);}
    else {sol = (0.5 - q);}
    
    //return (0.5 - p1 + q );
    return (sol );
    //return ( c1 && c3 ? q - 0.5
    //        : c1 && c2 ? q
    //        : c1 ? 0.5 - p1 + q
    //        : c3 ? p1 - q - 0.5
    //        : c2 ? p1 - q
    //        : 0.5 - q );
}

double Phi2( double x, double y, double rho )
{
    double sol = NAN;
    if( ( 1.0 - rho ) * ( 1.0 + rho ) <= 0.0 )
    {
        if( rho > 0.0 )
        {
            //return (Phi( min( x, y ) ));
            sol = (Phi( min( x, y ) ));
        }
        else
        {
            //return (max( 0.0, min( 1.0, Phi( x ) + Phi( y ) - 1.0 ) ));
            sol = (max( 0.0, min( 1.0, Phi( x ) + Phi( y ) - 1.0 ) ));
        }
    }
    if( x == 0.0 && y == 0.0 )
    {
        if( rho > 0.0 )
        {
            //return (Phi2diag( 0.0, 1.0 - rho, 0.5, 0.5 ));
            sol = (Phi2diag( 0.0, 1.0 - rho, 0.5, 0.5 ));
        }
        else
        {
            //return (0.5 - Phi2diag( 0.0, 1.0 + rho, 0.5, 0.5 ));
            sol = (0.5 - Phi2diag( 0.0, 1.0 + rho, 0.5, 0.5 ));
        }
    }
    else
    {
        sol = (max( 0.0,
                   min( 1.0,
                       Phi2help( x, y, rho ) + Phi2help( y, x, rho ) ) ));
    }
    
    return (sol);
}


double cdf_norm_OCL(double lim1,double lim2,double a11,double a12)
{
    double res=0;
    //double  uppe[2]={lim1/sqrt(a11),lim2/sqrt(a11)}, corre[1] ={a12/a11};
    //int infin[2]={0,0};
    double auxil=1-pow(a12/a11,2);
    double det=pow(a11,2)-pow(a12,2) ;
    //res= a11* sqrt(auxil/det) *  Phi2(uppe[0],uppe[1],corre[0]);
    res= a11* sqrt(auxil/det) *  Phi2(lim1/sqrt(a11),lim2/sqrt(a11),a12/a11);
    //res= a11* sqrt(auxil/det) *  Phi(a12/a11);
    return(res);
    //return(0.5);
}

double pbnorm22(double lim1,double lim2,double corr)
{
    double value            = Phi2(lim1,lim2,corr);
    return(value);
    //return(0.1);
}

double cdf_norm2_OCL(double lim1,double lim2,double a11,double a12, double a22)
{
    double res=0;
    double corre = a12/sqrt(a11*a22);
    //double  uppe[2]={lim1/sqrt(a11),lim2/sqrt(a11)}, corre[1] ={a12/a11};
    //int infin[2]={0,0};
    double auxil=1-pow(corre,2);
    double det=a11*a22-pow(a12,2) ;
    //res= a11* sqrt(auxil/det) *  Phi2(uppe[0],uppe[1],corre[0]);
    res= sqrt(a11*a22)* sqrt(auxil/det) *  Phi2(lim1/sqrt(a11),lim2/sqrt(a22),corre);
    //res= a11* sqrt(auxil/det) *  Phi(a12/a11);
    return(res);
}

// ===================================== END: Bivariate Normal  =====================================//


// compute  bivariate normal standard pdf:
double d22norm(double x, double y,double v11,double v22,double v12)
{
  double res=0.0;
  double cc=sqrt(v11*v22);
  double rho=v12/cc;
  double omr=1-pow(rho,2);
  double aa= 2*M_PI*cc*sqrt(omr);
  double zz=pow(x,2)/v11  + pow(y,2)/v22-2*rho*x*y/cc;
  res=exp(-0.5*zz/omr)/aa;
  return(res);
}

// ===================================== START Distance Functions  =====================================//

// Utility.c
double Dist_chordal(double loni, double lati, double lonj, double latj,double radius)
{
    double ai, bi, aj, bj, val=0.0;
    if (loni == lonj && lati == latj) return val;
    ai = (lati)*M_PI/180;
    bi = (loni)*M_PI/180;
    aj = (latj)*M_PI/180;
    bj = (lonj)*M_PI/180;
    val=radius  *sqrt(pow(cos(ai) * cos(bi)-cos(aj)  *cos(bj) ,2) +
                      pow(cos(ai) * sin(bi)-cos(aj) * sin(bj) ,2)+
                      pow(sin(ai)-sin(aj) ,2));
    return(val);
}

// Computes the Geodesic distance between to coordinates:
double Dist_geodesic(double loni, double lati, double lonj, double latj,double radius)
{
    double ai, bi, aj, bj, val=0.0,val2=0.0;
    if (loni == lonj && lati == latj) return val;
    ai = (lati)*M_PI/180;
    bi = (loni)*M_PI/180;
    aj = (latj)*M_PI/180;
    bj = (lonj)*M_PI/180;
    val = sin(ai) * sin(aj) + cos(ai) * cos(aj) * cos(bi - bj);
    if(val<= -1)  val2=M_PI*radius;
    if(val>=1) val2=0;
    val2 = acos(val)*radius;
    return(val2);
}

double dist(int type_dist,double coordx,double locx,double coordy,double locy,double radius)
{
    double lags=0.0;
    
    if(type_dist==0) lags=hypot(coordx-locx,coordy-locy);                        //euclidean
    if(type_dist==2) lags=Dist_geodesic(coordx,coordy,locx,locy,radius);           //great circle
    if(type_dist==1) lags=Dist_chordal(coordx,coordy,locx,locy,radius);      //chordal
    
    return(lags);
}

// ===================================== END Distance Functions  =====================================//

// ===================================== START CorrelationFunction.c  ==================================//
// Cauhcy class of correlation models:
double CorFunCauchy(double lag, double power2, double scale)
{
    double rho=0.0;
    // Computes the correlation:
    rho=pow((1+pow(lag/scale,2)),-power2/2);
    return rho;
}

// Stable class of correlation models:
double CorFunStable(double lag, double power, double scale)
{
    double rho=0.0;
    // Computes the correlation:
    rho=exp(-pow(lag/scale,power));
    return rho;
}
// Dagum:
double CorFunDagum(double lag, double power1, double power2, double scale)
{
    double rho=0.0;
    rho=1-pow(pow(lag/scale,power1)/(1+pow(lag/scale,power1)), power2/power1);
    return rho;
}


// Whittle=matern class of correlation models:
/*double CorFunWitMat(double lag, double scale, double smooth)
{
    double rho=0.0;
    double a=lag/scale;
     if(lag<1e-32) {rho=1; return(rho);}
     if(smooth==0.5) {rho=exp(-a);return(rho);}
     if(smooth==1.5) {rho=exp(-a)*(1+a);return(rho);}
     if(smooth==2.5) {rho=exp(-a)*(1+a+ pow(a,2)/3);return(rho);}
     if(smooth==3.5) {rho=exp(-a)*(1+a/2+ pow(a,2)*6/15+pow(a,3)/15);return(rho);}
     rho=exp((smooth*log(a) + log(bessel_k(a,smooth,2)) -a)- ((smooth-1)*log(2.0)+lgamma(smooth)));
    return(rho);
}*/

double CorFunWitMat(double lag, double scale, double smooth)
{
  double rho=0.0;
  double a=lag/scale;
  // Computes the correlation:
  if(lag<1e-150) {rho=1; return(rho);}
  if(smooth==0.5) {rho=exp(-a); return(rho);}
  if(smooth==1.5) {rho=exp(-a)*(1+a);return(rho);}
  if(smooth==2.5) {rho=exp(-a)*(1+a+ pow(a,2)/3);return(rho);}
  if(smooth==3.5) {rho=exp(-a)*(1+a+ pow(a,2)*0.4+pow(a,3)*0.0666667);return(rho);}
  rho=(pow(a,smooth)*bessel_k(a,smooth,1))/(pow(2,smooth-1)*tgamma(smooth));
    
    //rho=0.4;
 
  return(rho);
}


/* wendland function alpha=2*/
double CorFunW2(double lag,double scale,double smoo)
{
    double rho=0.0,x=0;
    x=lag/scale;
    if(x<=1)  rho=pow(1-x,smoo+2)*(3+x*(3*smoo+6)+x*x*(pow(smoo,2)+4*smoo+3))/3;
    else rho=0;
    return rho;
}
// Wave  correlation model:
double CorFunWave(double lag, double scale)
{
    double rho=0.0;
    if(lag==0) { rho=1;}
    else       { rho=(scale/lag)*sin(lag/(scale));}
    return rho;
}

/* generalized wendland function*/

double CorFunW_gen(double lag,double power1,double smooth,double scale)  // mu alpha beta
{
    double rho=0.0,x=0.0;

    if(lag==0) {rho=1; return(rho);}
     x=lag/scale;
    if(smooth==0) {
         if(x<=1)   rho=pow(1-x,power1);
         else rho=0;
         return(rho);
    }
    if(smooth==1) {
         if(x<=1) rho=pow(1-x,power1+1)*(1+x*(power1+1));
         else rho=0;
         return(rho);
    }
    if(smooth==2) {
        
         if(x<=1) rho=pow(1-x,power1+2)*(1+x*(power1+2)+x*x*(power1*power1 +4*power1 +3 )/3  );
         else rho=0;
         return(rho);
    }  
     /*    if(x<=1) rho=(tgamma(smooth)*tgamma(smooth+ temp+1))/(tgamma(2*smooth)*tgamma(temp+1)*pow(2,power1+1))*pow(1-x*x,temp)*hypergeo(power1/2,0.5*(power1+1),temp+1, 1-x*x);
         else rho=0;*/

  if(x<=1) rho=exp((lgamma(smooth)+lgamma(2*smooth+power1+1))-(lgamma(2*smooth)+lgamma(smooth+power1+1)))
         *pow(2,-power1-1)*pow(1-x*x,smooth+power1)*hypergeo(power1/2,(power1+1)/2,smooth+power1+1, 1-x*x);
  else rho=0;
    
    
    /*if(smooth>0) {
        x=lag;
        rho=wendintegral(x,power1,smooth,scale);
    }*/
    return(rho);
}

double CorFct(int cormod, double h, double u, double par0,double par1,double par2,double par3, int c11, int c22)
{
    double arg=0.0, col=0.0,power=0.0, power1=0.0, power2=0.0, power_s=0.0, power_t=0.0, var11=0.0, var22=0.0;
    double rho=0.0, sep=0, scale=0.0, smooth=0.0,smooth_s=0.0,smooth_t=0.0, scale_s=0.0, scale_t=0, x=0, nug11=0.0, nug22=0.0;
    double scale11=0.0, scale22=0.0, scale12=0.0, smoo11=0.0, smoo22=0.0, smoo12=0.0,power11=0.0, power22=0.0, power12=0.0;
    switch(cormod) // Correlation functions are in alphabetical order
    {
            // ========================   SPACE
        case 1:// Cauchy correlation function
            power1=2;
            power2=par0;
            scale=par1;
            rho=CorFunCauchy(h, power2, scale);
            break;
        case 2:// Matern1
            scale=par0;
            rho=exp(-h/scale)*(1+h/scale);
            break;
        case 3:// Matern2
            scale=par0;
             rho=exp(-h/scale)*(1+h/scale+pow(h/scale,2)/3);
      break;  
        case 4:// Exponential correlation function
            power=1;
            scale=par0;
            rho=CorFunStable(h, power, scale);
            break;
        case 5: // Dagum
            power1=par0;
            power2=par1;
            scale=par2;
            rho=CorFunDagum(h, power1, power2, scale);
            break;
        case 8: // Generalised Cuachy correlation function
            power1=par0;
            power2=par1;
            scale=par2;
            rho=CorFunGenCauchy(h, power1, power2, scale);
            break;
        case 10:// Skarofski correlation function
            scale_s=par0;
            scale_t=par1;
            smooth=par2;
            rho=Shkarofski(h*h, scale_s,scale_t,smooth);
            break;
        case 11://wen0
            power=par0;
            scale=par1;
            rho=CorFunW0(h,scale,power);
            break;
        case 12:// Stable correlation function
            power=par0;
            scale=par1;
            rho=CorFunStable(h, power, scale);
            break;
        case 13://wen1
            power=par0;
            scale=par1;
            rho=CorFunW1(h,scale,power);
            break;
        case 14://  Whittle-Matern correlation function
            scale=par0;
            smooth=par1;
            rho=CorFunWitMat(h, scale, smooth);
            break;
        case 15://wen2
            power=par0;
            scale=par1;
            rho=CorFunW2(h,scale,power);
            break;
        case 16: //wave
            scale=par0;
            rho=CorFunWave(h,scale);
            break;
        case 17://  multiquadric correlation function valid on sphere
            power=par0;
            scale=par1;
            rho=pow(1-power/2,2*scale)/pow(1+pow(power/2,2)-power*cos(h),scale);
            break;
        case 18://  (sinpower) sinsphere correlation function valid on sphere
            power=par0;
            rho=1-pow(sin(h/(2)),power);
            break;
        case 19: // Generalised wend correlation function
            power1=par0;
            scale=par1;
            smooth=par2;
            rho=CorFunW_gen(h, power1, smooth, scale);
            break;
        case 6: // Generalised2 wend correlation function
            power1=1/par0;
            scale=par1;
            smooth=par2;
        sep=exp( (lgamma(2*smooth+power1+1)-lgamma(power1))/ (1+2*smooth)   );
        rho=CorFunW_gen(h, power1, smooth,  scale * sep);
           break;
    }
    return rho;
}

double CorFct_st(int cormod, double h, double u, double par0,double par1,double par2,double par3,double par4,double par5,double par6, int c11, int c22)
{
    double arg=0.0, col=0.0,power=0.0, power1=0.0, power2=0.0, power_s=0.0, power_t=0.0, var11=0.0, var22=0.0;
    double rho=0.0, sep=0, scale=0.0, smooth=0.0,smooth_s=0.0,smooth_t=0.0, scale_s=0.0, scale_t=0, x=0, nug11=0.0, nug22=0.0;
    double scale11=0.0, scale22=0.0, scale12=0.0, smoo11=0.0, smoo22=0.0, smoo12=0.0,power11=0.0, power22=0.0, power12=0.0;
   
    switch(cormod) // Correlation functions are in alphabetical order
    {
            // ========================   SPACE TIME
        case 42:   //Gneiting correlation model as in (14) Gneitint (2002) with tau=1
            power_s=par0;
            power_t=par1;
            scale_s=par2;
            scale_t=par3;
            sep=1/(1+exp(-par4));par4;
            arg=1+pow(u/scale_t, power_t);
            rho=exp(-(pow(h/scale_s, power_s))*pow(arg, -0.5*sep*power_s))/arg;
            break;
        case 44:// Iaco-Cesare model as in (14) of Gneitint (2006): note that power parameters are in [0,1]
            power2=par0;
            power_s=par1;
            power_t=par2;
            scale_s=par3;
            scale_t=par4;
            rho=pow(1+pow(h/scale_s, power_s)+pow(u/scale_t, power_t),-power2);
            break;
        case 46://Porcu model as in (4) of Porcu Bevilacqua et al (2010), with beta_1=beta_2=1
            power_s=par0;
            power_t=par1;
            scale_s=par2;
            scale_t=par3;
            sep=par4;
            if(sep>0) rho=pow(0.5*pow(1+pow(h/scale_s, power_s),sep)+0.5*pow(1+pow(u/scale_t, power_t),sep),-1/sep);
            else rho=pow((1+pow(h/scale_s, power_s))*(1+pow(u/scale_t,power_t)),-1);
            break;
        case 50:   //Gneiting correlation with prac ranges "giusto"
            power_s=par0;
            power_t=par1;
            scale_s=par2;
            scale_t=par3;
            sep=par4;
            arg=1+pow(u, power_t)/scale_t;
            rho=exp(-(pow(h, power_s)/scale_s)*pow(arg, 0.5*sep*power_s))/pow(arg,1.5);
            break;
        case 52:// Gneiting correlation model valid on the sphere (equation 8)
            power_s=par0;
            power_t=par1;
            scale_s=par2;
            scale_t=par3;
            sep=par4;
            arg=1+pow(h/scale_s, 2*power_s);
            rho=exp(-pow(u/scale_t, 2*power_t)/(pow(arg, sep*power_t)))/arg;
            break;
        case 54:// Gneiting correlation model valid on the sphere  (equazione 9)
            power_s=par0;
            power_t=par1;
            scale_s=par2;
            scale_t=par3;
            sep=par4;
            arg=1+pow(u/scale_t, 2*power_t);
            rho=exp(-pow(h/scale_s, power_s)*pow(arg,power_s*sep))/pow(arg,1);
            break;
        case 58:  //st multiquaderic
            power_s=par0;
            power_t=par1;
            scale_s=par2;
            scale_t=par3;
            arg=pow(1+pow(u/scale_t,power_t),-1);
            rho= pow(pow(1-power_s/2,2)/(1+pow(power_s/2,2)-power_s*arg*cos(h)),scale_s);   // model B2 in the paper  (eq 9 right part)
            break;
        case 61:  //no sep gneiting  with temporal matern margin
            power_s=par0;
            power=par1;
            scale_s=par2;
            scale_t=par3;
            sep=par4;
            smooth=par5;
            arg=1+pow(h/scale_s, power_s);
            if(u>0) rho=pow(arg,-power)*CorFunWitMat(u,scale_t*pow(arg,sep/2),smooth);
            else  rho=pow(arg,-power);
            break;
        case 62:  //no sep gneiting  with spatial matern margin
            power_t=par0;
            power=par1;
            scale_s=par2;
            scale_t=par3;
            sep=par4;
            smooth=par5;
            arg=1+pow(u/scale_t, power_t);
            if(h)  rho=pow(arg,-power)*CorFunWitMat(h,scale_s*pow(arg,sep/2),smooth);
            else  rho=pow(arg,-power);
            break;
        case 63:  //
            power_t=par0;
            power_s=par1;
            power=par2;
            scale_s=par3;
            scale_t=par4;
            sep=par5;
            arg=pow(1+pow(u/scale_t,power_t),-1);
            rho=pow(arg,power)*CorFunW0(h,scale_s*pow(arg,sep),power_s);
            break;
        case 64:
            power_s=par0;
            power=par1;
            power_t=par2;
            scale_s=par3;
            scale_t=par4;
            sep=par5;
            arg=pow(1+pow(h/scale_s,power_s),-1);
            rho=pow(arg,power)*CorFunW0(u,scale_t*pow(arg,sep),power_t);  //2.5+2*0
            break;
        case 65:
            power_t=par0;
            power_s=par1;
            power=par2;
            scale_s=par3;
            scale_t=par4;
            sep=par5;
            arg=pow(1+pow(u/scale_t,power_t),-1);
            rho=pow(arg,power)*CorFunW1(h,scale_s*pow(arg,sep),power_s);
            break;
        case 66:
            power_s=par0;
            power=par1;
            power_t=par2;
            scale_s=par3;
            scale_t=par4;
            sep=par5;
            arg=pow(1+pow(h/scale_s,power_s),-1);
            rho=pow(arg,power)*CorFunW1(u,scale_t*pow(arg,sep),power_t); //2.5+2*1
            break;
        case 67:  //
            power_t=par0;
            power_s=par1;
            power=par2;
            scale_s=par3;
            scale_t=par4;
            sep=par5;
            arg=pow(1+pow(u/scale_t,power_t),-1);
            rho=pow(arg,power)*CorFunW2(h,scale_s*pow(arg,sep),power_s);
            break;
        case 68:
            power_s=par0;
            power_t=par2;
            power=par1;
            scale_s=par3;
            scale_t=par4;
            sep=par5;
            arg=pow(1+pow(h/scale_s,power_s),-1);
            rho=pow(arg,power)*CorFunW2(u,scale_t*pow(arg,sep),power_t); ////2.5+2*2
            break;
            
        case 86:// Matern Matern
          scale_s=par0;
          scale_t=par1;
          smooth_s=par2;
           smooth_t=par3;
          rho=CorFunWitMat(h, scale_s,smooth_s)*CorFunWitMat(u, scale_t, smooth_t);
          break;
            
        case 87:
            power_t=par0;
            power_s=par1;
            power=par2;
            scale_s=par3;
            scale_t=par4;
            sep=par5;
            smooth=par6;
            arg=pow(1+pow(u/scale_t,power_t),-1);
            rho=pow(arg,power)*CorFunW_gen(h,power_s,smooth,scale_s*pow(arg,sep));
            break;
        case 88:
            power_s=par0;
            power=par1;
            power_t=par2;
            scale_s=par3;
            scale_t=par4;
            sep=par5;
            smooth=par6;
            arg=pow(1+pow(h/scale_s,power_s),-1);
            rho=pow(arg,power)*CorFunW_gen(u,power_t,smooth,scale_t*pow(arg,sep));
            break;
        case 69:
            power_s=par0;
            power_t=par1;
            scale_s=par2;
            scale_t=par3;
            rho=CorFunW0(h,scale_s,power_s)*CorFunW0(u,scale_t,power_t);
            break;
        case 70:
            power_s=par0;
            power_t=par1;
            scale_s=par2;
            scale_t=par3;
            rho=CorFunW0(h,scale_s,power_s)*CorFunW1(u,scale_t,power_t);
            break;
        case 71:
            power_s=par0;
            power_t=par1;
            scale_s=par2;
            scale_t=par3;
            rho=CorFunW0(h,scale_s,power_s)*CorFunW2(u,scale_t,power_t);
            break;
        case 72:
            power_s=par0;
            power_t=par1;
            scale_s=par2;
            scale_t=par3;
            rho=CorFunW1(h,scale_s,power_s)*CorFunW0(u,scale_t,power_t);
            break;
        case 73:
            power_s=par0;
            power_t=par1;
            scale_s=par2;
            scale_t=par3;
            rho=CorFunW1(h,scale_s,power_s)*CorFunW1(u,scale_t,power_t);
            break;
        case 74:
            power_s=par0;
            power_t=par1;
            scale_s=par2;
            scale_t=par3;
            rho=CorFunW1(h,scale_s,power_s)*CorFunW2(u,scale_t,power_t);
            break;
        case 75:
            power_s=par0;
            power_t=par1;
            scale_s=par2;
            scale_t=par3;
            rho=CorFunW2(h,scale_s,power_s)*CorFunW0(u,scale_t,power_t);
            break;
        case 77:
            power_s=par0;
            power_t=par1;
            scale_s=par2;
            scale_t=par3;
            rho=CorFunW2(h,scale_s,power_s)*CorFunW2(u,scale_t,power_t);
            break;
            // END non-separable correlation functions
            // START separable correlation functions:
        case 84:// Double exp:
            scale_s=par0;
            scale_t=par1;
            rho=CorFunStable(h,1,scale_s)*CorFunStable(u,1,scale_t);
            break;
        case 94:// Stable-stab:
            power_s=par0;
            power_t=par1;
            scale_s=par2;
            scale_t=par3;
            rho=CorFunStable(h,power_s,scale_s)*CorFunStable(u,power_t,scale_t);
            break;
    }
    return rho;
}

// Computes the spatio-temporal variogram:
double Variogram(int cormod, double h, double u, double nugget, double var, double par0,double par1,double par2,double par3)
{
    double vario=0.0;
    //Computes the variogram
    vario=nugget+var*(1-CorFct(cormod,h,u,par0,par1,par2,par3,0,0));
    return vario;
}
double Variogram_st(int cormod, double h, double u, double nugget, double var, double par0,double par1,double par2,double par3,double par4,double par5,double par6)
{
    double vario=0.0;
    //Computes the variogram
    vario=var*(1-nugget)*(1-CorFct_st(cormod,h,u,par0,par1,par2,par3,par4,par5,par6,0,0));
    return vario;
}


double CorFunBohman(double lag,double scale)
{
    double rho=0.0,x=0;
    x=lag/scale;
    if(x<=1)
    {
        if (x>0) rho=(1-x)*(sin(2*M_PI*x)/(2*M_PI*x))+(1-cos(2*M_PI*x))/(2*M_PI*M_PI*x);
        else   rho=1;
    }
    else rho=0;
    return rho;
}
double CorFunBohman1(double lag,double scale)
{
    double rho=0.0,x=0;
    x=lag/scale;
    if(x<=1)
    {
        if (x>0) rho=(1-x)*(sin(2*M_PI*x)/(2*M_PI*x))+(1-cos(2*M_PI*x))/(2*M_PI*M_PI*x);
        else   rho=1;
    }
    else rho=0;
    return rho;
}
double CorFunBohman2(double lag,double scale)
{
    double rho=0.0,x=0;
    x=lag/scale;
    if(x<=1)
    {
        if (x>0) rho=(1-x)*(sin(2*M_PI*x)/(2*M_PI*x))+(1-cos(2*M_PI*x))/(2*M_PI*M_PI*x);
        else   rho=1;
    }
    else rho=0;
    return rho;
}

// Generalised Cauhcy class of correlation models:
double CorFunGenCauchy(double lag, double power1, double power2, double scale)
{
    double rho=0.0;
    rho=pow((1+pow(lag/scale,power1)), -power2/power1);
    return rho;
}

// Sferical class of correlation models:
double CorFunSferical(double lag, double scale)
{
    double rho=0.0;
    if(lag<=scale) rho=1-1.5*lag/scale+0.5*pow(lag/scale, 3);
    else rho=0;
    return rho;
}

double Shkarofski(double lag, double a,double b, double k)
{
    double corr=0.0;
    if(a==0 && k>0) return( pow(1+sqrt(lag/b),-2*k));
    if(b==0 && k<0) return( pow(2,1+k) * pow(tgamma(-k),-1)  *
                           pow(sqrt(lag/a),-k) * bessel_k(sqrt(lag/a),k,1));
    
    corr=pow(1+lag/b,-k/2)*bessel_k(sqrt((b+lag)/a),k,1)/bessel_k(sqrt(b/a),k,1);
    return(corr);
}

/* wendland function alpha=0*/
double CorFunW0(double lag,double scale,double smoo)
{
    double rho=0.0,x=0;
    x=lag/scale;
    if(x<=1) rho=  pow(1-x,smoo);
    else rho=0;
    return rho;
}

/* wendland function alpha=1*/
double CorFunW1(double lag,double scale,double smoo)
{
    double rho=0.0,x=0;
    x=lag/scale;
    if(x<=1)
    {rho=pow(1-x,smoo+1)*(1+(smoo+1)*x);}
    else rho=0;
    return rho;
}

// ===================================== END CorrelationFunction.c  ==================================//



// ===================================== START HyperGeo  ==================================//


/**************** for bivaraite T distribution */////////////////////////



// ===================================== END HyperGeo  ==================================//





// ===================================== START: Distributions.c  ==================================//

//********** ST: functions for bivariate tukey h *******************//

// compute lambert w function
/*
double LambertW(double z) {
    int i;
    const double eps=4.0e-16, em1=0.3678794411714423215955237701614608;
    double p,e,t,w;
    //if (dbgW) fprintf(stderr,"LambertW: z=%g\n",z);
    if (z<-em1 || isinf(z) || isnan(z)) {
        //fprintf(stderr,"LambertW: bad argument %g, exiting.\n",z); exit(1);
        //printf("LambertW: bad argument %g, exiting.\n");
        return 0.0;
    }
    if (0.0==z) return 0.0;
    if (z<-em1+1e-4) { // series near -em1 in sqrt(q)
        double q=z+em1,r=sqrt(q),q2=q*q,q3=q2*q;
        return
        -1.0
        +2.331643981597124203363536062168*r
        -1.812187885639363490240191647568*q
        +1.936631114492359755363277457668*r*q
        -2.353551201881614516821543561516*q2
        +3.066858901050631912893148922704*r*q2
        -4.175335600258177138854984177460*q3
        +5.858023729874774148815053846119*r*q3
        -8.401032217523977370984161688514*q3*q;  // error approx 1e-16
    }
    // initial approx for iteration...
    if (z<1.0) { // series near 0
        p=sqrt(2.0*(2.7182818284590452353602874713526625*z+1.0));
        w=-1.0+p*(1.0+p*(-0.333333333333333333333+p*0.152777777777777777777777));
    } else
        w=log(z); // asymptotic
    if (z>3.0) w-=log(w); // useful?
    for (i=0; i<10; i++) { // Halley iteration
        e=exp(w);
        t=w*e-z;
        p=w+1.0;
        t/=e*p-0.5*(p+1.0)*t/p;
        w-=t;
        if (fabs(t)<eps*(1.0+fabs(w))) return w; // rel-abs error
    }
    // should never get here
    //fprintf(stderr,"LambertW: No convergence at z=%g, exiting.\n",z);exit(1);
    return 0.0;
}*/



double LambertW(double z) {
  int i;
  const double eps=4.0e-16, em1=0.3678794411714423215955237701614608;
  double p,e,t,w;
  //if (dbgW) fprintf(stderr,"LambertW: z=%g\n",z);
  if (z<-em1 || isinf(z) || isnan(z)) {
    //fprintf(stderr,"LambertW: bad argument %g, exiting.\n",z); exit(1);
      return 0.0;
  }
  if (0.0==z) return 0.0;
  if (z<-em1+1e-4) { // series near -em1 in sqrt(q)
    double q=z+em1,r=sqrt(q),q2=q*q,q3=q2*q;
    return
     -1.0
     +2.331643981597124203363536062168*r
     -1.812187885639363490240191647568*q
     +1.936631114492359755363277457668*r*q
     -2.353551201881614516821543561516*q2
     +3.066858901050631912893148922704*r*q2
     -4.175335600258177138854984177460*q3
     +5.858023729874774148815053846119*r*q3
     -8.401032217523977370984161688514*q3*q;  // error approx 1e-16
  }
  /* initial approx for iteration... */
  if (z<1.0) { /* series near 0 */
    p=sqrt(2.0*(2.7182818284590452353602874713526625*z+1.0));
    w=-1.0+p*(1.0+p*(-0.333333333333333333333+p*0.152777777777777777777777));
  } else
    w=log(z); /* asymptotic */
  if (z>3.0) w-=log(w); /* useful? */
  for (i=0; i<10; i++) { /* Halley iteration */
    e=exp(w);
    t=w*e-z;
    p=w+1.0;
    t/=e*p-0.5*(p+1.0)*t/p;
    w-=t;
    if (fabs(t)<eps*(1.0+fabs(w))) return w; /* rel-abs error */
  }
  /* should never get here */
  //fprintf(stderr,"LambertW: No convergence at z=%g, exiting.\n",z);
    return 0.0;
  //exit(1);
}

// pdf bivariate gaussian distribution
double dbnorm(double x_i,double x_j,double mean_i,double mean_j,double sill,double corr)
{
    double  fraq = 1.0,dens = 0.0,aux1 = 1.0,z1 = 1.0,z2 = 1.0,z3 = 1.0,z = 1.0;
    fraq = 2*M_PI*sill*sqrt(1-corr*corr);
    z1   = (x_i - mean_i)*(x_i - mean_i);
    z2   = (x_j - mean_j)*(x_j - mean_j);
    z3   = 2*corr*(x_i - mean_i)*(x_j - mean_j);
    z    = (z1 + z2 - z3)/sill;
    aux1 = 2*(1-corr*corr);
    dens = (1/fraq)*exp(-z/aux1);
    return(dens);
}


// compute the inverse lambert w transformation

double inverse_lamb(double x,double tail)
{
    double sign,value;
    value = sqrt(LambertW(tail*x*x)/tail);
    if (x >= 0) sign= 1;
    //if(x==0) sign=1;
    if (x < 0) sign= -1;
    return(sign*value);
}
// pdf bivariate tukey h random field

/*double biv_tukey_h(double corr,double data_i, double data_j, double mean_i, double mean_j, double tail, double sill)
{
    double dens = 0.0,x_i = 0.0,x_j = 0.0,est_mean_i = 0.0,est_mean_j = 0.0;
    double est_mean_ij = 1.0,extra = 1.0;
    
    est_mean_i = (data_i - mean_i)/sqrt(sill);
    est_mean_j = (data_j - mean_j)/sqrt(sill);
    
    x_i = inverse_lamb(est_mean_i,tail);
    x_j = inverse_lamb(est_mean_j,tail);
    
    est_mean_ij = 1/(est_mean_i*est_mean_j);
    extra       = 1/( (1 + LambertW(tail*est_mean_i*est_mean_i))*(1 + LambertW(tail*est_mean_j*est_mean_j)));
    dens = dbnorm(x_i,x_j,0,0,1,corr)*
    x_i*x_j*est_mean_ij*extra/sill;
    return(dens);
}*/

double biv_tukey_h(double corr,double data_i, double data_j, double mean_i, double mean_j, double tail, double sill)
{
  double dens = 0.0,x_i = 0.0,x_j = 0.0,est_mean_i = 0.0,est_mean_j = 0.0;
  double est_mean_ij = 1.0,extra = 1.0;

  est_mean_i = (data_i - mean_i)/sqrt(sill);
  est_mean_j = (data_j - mean_j)/sqrt(sill);
  
  x_i = inverse_lamb(est_mean_i,tail);
  x_j = inverse_lamb(est_mean_j,tail);

  est_mean_ij = 1/(est_mean_i*est_mean_j);
  extra       = 1/( (1 + LambertW(tail*est_mean_i*est_mean_i))*(1 + LambertW(tail*est_mean_j*est_mean_j)));
  dens = dbnorm(x_i,x_j,0,0,1,corr)*x_i*x_j * est_mean_ij * extra/sill;

  
  if((x_i==0.0)&&(x_j!=0.0))  dens = dbnorm(x_i,x_j,0,0,1,corr)*x_j/(est_mean_j*(1 + LambertW(tail*est_mean_j*est_mean_j)));
  if((x_j==0.0)&&(x_i!=0.0))  dens = dbnorm(x_i,x_j,0,0,1,corr)*x_i/(est_mean_i*(1 + LambertW(tail*est_mean_i*est_mean_i)));
  if((x_j==0.0)&&(x_i==0.0))  dbnorm(x_i,x_j,0,0,1,corr);
  return(dens);
}


//********** END: functions for bivariate tukey h *******************//


// compute  bivariate log-normal pdf:

double d2lognorm(double x, double y, double sill,double nugget, double mux,double muy,double rho)
{
   // rho=(1-nugget)*rho;
    double KK=exp(sill/2);
    x=x*KK; y=y*KK;
    double res=0.0, q=0.0, omr=pow(sill,2)-pow(rho*sill,2);
    
    q=(sill*pow((log(x)-mux),2)+sill*pow((log(y)-muy),2)-2*rho*sill*(log(x)-mux)*(log(y)-muy))/omr;
    res=exp(-q/2)/(2*x*y*M_PI*sqrt(omr));
    
    return(res*pow(KK,2));
}

double biv_sinh(double corr,double zi,double zj,double mi,double mj,double skew,double tail,double vari)
{
    double b1=0.0,b2=0.0,A=0.0,B=0.0,k=0.0,res=0.0,Z1,Z2;
    double xi=(zi-mi)/sqrt(vari);
    double xj=(zj-mj)/sqrt(vari);
    b1=tail * asinh(xi)-skew;
    b2=tail * asinh(xj)-skew;
    k=1-pow(corr,2);
    A=pow(2 * M_PI * pow(k,0.5) * vari,-1) * cosh(b1) * cosh(b2) * pow(tail,2)/sqrt((pow(xi,2)+1) * (pow(xj,2)+1));
    Z1=sinh(b1);Z2=sinh(b2);
    B=exp(- (Z1*Z1 + Z2*Z2 - 2*corr*Z1*Z2)/(2*k)  );
    res=A*B;
    return(res);
}

double biv_wrapped (double alfa,double u, double v,double mi,double mj,double nugget,double sill,double corr)
{
    double x,y,s1=0.0,s12=0.0,quadr=0.0,det=0.0,wrap_gauss=0.0; // 5???
    //2*atan(mean[i])-M_PI
    x=u-2*atan(mi)-M_PI; y=v-2*atan(mj)-M_PI;
    s1=sill;
    s12=sill*corr; //sill * corr
    det=pow(s1,2)-pow(s12,2);
    double k1=-alfa,k2=-alfa;
    while(k1<=alfa){
        while(k2<=alfa){
            quadr = -0.5*(1.0/det)*(s1*pow((y+2*k1*M_PI),2.0)+s1*pow((x+2*k2*M_PI),2.0)
                                    -2.0*s12*(x+2*k2*M_PI)*(y+2*k1*M_PI));
            wrap_gauss +=  (1/2.0*M_PI)*(1/sqrt(det)*exp(quadr)) ;
            k2 = k2+1;}
        k1 = k1+1;k2 = -alfa;}
    return(wrap_gauss);
}

double log_biv_Norm(double corr,double zi,double zj,double mi,double mj,double vari, double nugget)
{
    double u,v,u2,v2,det,s1,s12,dens;
    u=zi-mi;
    v=zj-mj;
    u2=pow(u,2);v2=pow(v,2);
    s1=vari;
    s12=vari*corr*(1-nugget);
    det=pow(s1,2)-pow(s12,2);
    dens=(-0.5*(2*log(2*M_PI)+log(det)+(s1*(u2+v2)-2*s12*u*v)/det));
    return(dens);
}
double log_biv_Norm1(double corr,double zi,double zj,double mi,double mj,double vari, double nugget)
{
    double u,v,u2,v2,det,s1,s12,dens;
    u=zi-mi;
    v=zj-mj;
    u2=pow(u,2);v2=pow(v,2);
    s1=vari+nugget;
    s12=vari*corr;
    det=pow(s1,2)-pow(s12,2);
    dens=(-0.5*(2*log(2*M_PI)+log(det)+(s1*(u2+v2)-2*s12*u*v)/det));
    return(dens);
}

double log_biv_Norm_mem(double corr,double zi,double zj,double mi,double mj,double vari, double nugget)
{
    //printf("IN\n");
    double u,v,u2,v2,det,s1,s12,dens;
    u=zi-mi;
    v=zj-mj;
    u2=pow(u,2);v2=pow(v,2);
    s1=vari+nugget;
    s12=vari*corr;
    det=pow(s1,2)-pow(s12,2);
    dens=(-0.5*(2*log(2*M_PI)+log(det)+(s1*(u2+v2)-2*s12*u*v)/det));
return(dens);
}

#define M_LN2 M_LN2_F
#define M_1_SQRT_2PI     0.3989422804014327
#define M_LN_SQRT_2PI     0.9189385332046728

/*double dnorm(double x, double mu, double sigma, int give_log)
{
#ifdef IEEE_754
    if (isnan(x) || isnan(mu) || isnan(sigma))
    return x + mu + sigma;
#endif
    if (sigma < 0) NAN;
    if(!isfinite(sigma)) return 0.0;
    if(!isfinite(x) && mu == x) return NAN;
    if (sigma == 0)
        return (x == mu) ? DBL_MAX : 0.0;
    x = (x - mu) / sigma;

    if(!isfinite(x)) return 0.0;

    x = fabs (x);
    if (x >= 2 * sqrt(DBL_MAX)) return 0.0;
    if (give_log)
    return -(M_LN_SQRT_2PI + 0.5 * x * x + log(sigma));
    
#ifdef MATHLIB_FAST_dnorm
    
    return M_1_SQRT_2PI * exp(-0.5 * x * x) / sigma;
#else
    
    if (x < 5)    return M_1_SQRT_2PI * exp(-0.5 * x * x) / sigma;

    
    if (x > sqrt(-2*M_LN2*(DBL_MIN_EXP + 1-DBL_MANT_DIG))) return 0.;

    
    double x1 =
    ldexp( nearbyint(ldexp(x, 16)), -16);
    double x2 = x - x1;
    return M_1_SQRT_2PI / sigma *
    (exp(-0.5 * x1 * x1) * exp( (-0.5 * x2 - x1) * x2 ) );
#endif
}
 */

//#define ML_NEGINF    INFINITY*(-1)
//#define give_log log_p

//#define R_D__0    (log_p ? ML_NEGINF : 0.)
#define     DBL_MANT_DIG   53
#define     DBL_MIN_EXP   -1021
double dnorm(double x, double mu, double sigma, int give_log)
{
#ifdef IEEE_754
    if (isnan(x) || isnan(mu) || isnan(sigma))
    return x + mu + sigma;
#endif
    if(!isfinite(sigma)) return R_D__0(give_log);
    if(!isfinite(x) && mu == x) return NAN;
    if (sigma <= 0) {
    if (sigma < 0) NAN;
    
    return (x == mu) ? INFINITY : R_D__0(give_log);
    }
    x = (x - mu) / sigma;

    if(!isfinite(x)) return R_D__0(give_log);

    x = fabs (x);
    if (x >= 2 * sqrt(DBL_MAX)) return R_D__0(give_log);
    if (give_log)
    return -(M_LN_SQRT_2PI + 0.5 * x * x + log(sigma));
    //  M_1_SQRT_2PI = 1 / sqrt(2 * pi)
#ifdef MATHLIB_FAST_dnorm
    
    return M_1_SQRT_2PI * exp(-0.5 * x * x) / sigma;
#else
    // more accurate, less fast :
    if (x < 5)    return M_1_SQRT_2PI * exp(-0.5 * x * x) / sigma;

   
    if (x > sqrt(-2*M_LN2*(DBL_MIN_EXP + 1-DBL_MANT_DIG))) return 0.;

    
    double x1 =
    ldexp( nearbyint(ldexp(x, 16)), -16);
    double x2 = x - x1;
    return M_1_SQRT_2PI / sigma *
    (exp(-0.5 * x1 * x1) * exp( (-0.5 * x2 - x1) * x2 ) );
#endif
}


//bivariate skew gaussian distribution
/*
double biv_skew(double corr,double zi,double zj,double mi,double mj,double vari,double skew)
{
    double aux1=0.0,aux2=0.0,pdf1,pdf2,quadr;
    zi=zi-mi;
    zj=zj-mj;
    double dens,det,fact1,fact2, fact3,c1,lim1,lim2,cdf1,cdf2,a11,a12;
    double nu2=pow(skew,2.0);
    double tau2 =vari;
    if(-LOW<skew<LOW)
    { det=pow(tau2,2)-pow(tau2*corr,2);
        quadr=(1.0/det)*( aux1*(pow(zj,2.0)+pow(zi,2.0)) - 2.0*corr*zi*zj  ) ;
        dens=(0.5/M_PI) * (1/sqrt(det)) * exp(- 0.5 * quadr) ;}
    else{
        
        c1= 1.0 /  (1-pow(corr,2)) ;
        aux1 = tau2 + nu2 ;
        aux2 =  tau2*corr + nu2*corr ;
        det =   pow(aux1,2) - pow(aux2,2) ;
        quadr= (1.0/det)*( aux1*(pow(zj,2.0)+pow(zi,2.0)) - 2.0*aux2*zi*zj  ) ;
        pdf1=  (0.5/M_PI) * (1/sqrt(det)) * exp(- 0.5 * quadr) ;
        //////
        aux1 = (nu2/tau2)*c1 + c1 ;
        aux2 = (nu2/tau2)*c1*corr + c1*corr;
        det=  pow(aux1,2) - pow(aux2,2) ;
        a11  =  (1/det)* aux1   ;
        a12  =  (1/det)* aux2   ;
        fact3 =( c1*skew)/ ( tau2 * det ) ;
        fact1 = fact3 * (aux1 - corr*aux2) ;
        fact2 = fact3 * (aux2 - corr*aux1) ;
        lim1 =   fact1*zi +  fact2*zj   ;
        lim2 =   fact2*zi +  fact1*zj   ;
        cdf1 = cdf_norm_OCL(lim1,lim2,a11,a12)  ;//cdf1 = cdf_norm_OCL(lim1,lim2,a11,a12) ;
        //printf("lim1: %f\tlim2: %f\ta11: %f\ta12: %f\tcdf1: %f\n",lim1,lim2,a11,a12,cdf1);
        //////////////////////////////////////////////////////////////////////////////////
        aux1 = tau2 + nu2 ;
        aux2 =  tau2*corr - nu2*corr ;
        det =   pow(aux1,2) - pow(aux2,2) ;
        quadr= (1.0/det)*( aux1*(pow(zj,2.0)+pow(zi,2.0)) - 2.0*aux2*zi*zj  ) ;
        pdf2=  (0.5/M_PI) * (1/sqrt(det)) * exp(- 0.5 * quadr) ;
        //////
        aux1 = (nu2/tau2)*c1 + c1 ;
        aux2 = (nu2/tau2)*c1*corr - c1*corr;
        det=  pow(aux1,2) - pow(aux2,2) ;
        a11  =  (1/det)* aux1   ;
        a12  =  (1/det)* aux2   ;
        fact3 =( c1*skew)/ ( tau2 * det  ) ;
        fact1 = fact3 * (aux1 - corr*aux2) ;
        fact2 = fact3 * (aux2 - corr*aux1) ;
        lim1 =   fact1*zi +  fact2*zj   ;
        lim2 =   fact2*zi +  fact1*zj   ;
        cdf2 = cdf_norm_OCL(lim1,lim2,a11,a12) ; //cdf2 = cdf_norm_OCL(lim1,lim2,a11,a12)
        //printf("lim1: %f\tlim2: %f\ta11: %f\ta12: %f\tcdf2: %f\n",lim1,lim2,a11,a12,cdf2);
        
        dens=2*(pdf1*cdf1+pdf2*cdf2);
    }
    
    //printf("dens: %f\n",dens);
    return(dens);
}

*/

double biv_skew(double corr,double z1,double z2,double mi,double mj,double vari,double skew,double nugget)
{
   double aux1=0.0, aux2=0.0, pdf1=0,pdf2=0,cdf1=0,cdf2=0,zi,zj;
    zi=z1-mi;
    zj=z2-mj;
    double dens,lim1,lim2,a11,a12,bb;
    double skew2  = pow(skew,2);
    double vari2  = pow(vari,1);
    double skew4  = pow(skew,4);
    double skew3  = skew2*skew;
    double vari4  = pow(vari,2);
    double corr1=(1-nugget)*corr;
    double corr2=corr*corr;
    double corr12=corr1*corr1;
    double s2v2=skew2*vari2;
    double pp1=skew*vari2*corr1;
    double pp =skew*vari2*corr;

                                      // pdf 1
                                       aux1  =  vari2 + skew2 ;
                                       aux2  =   corr1*vari2 + corr*skew2;
                                       pdf1  =  d22norm(zi, zj,aux1,aux1,aux2);
                                  /***************************/
                                   
                                       bb= vari4*corr12+2*s2v2*corr*corr1+skew4*corr2-vari4-2*s2v2-skew4;
                                       lim1  =((pp1-pp)*zj+(pp*corr1+skew3*corr2-skew*vari2-skew3)*zi)/bb;
                                       lim2  =((pp1-pp)*zi+(pp*corr1+skew3*corr2-skew*vari2-skew3)*zj)/bb;
                                       

                                       a11   = (vari4*corr12+s2v2*corr2-vari4-s2v2)/bb;
                                       a12   = (vari4*corr*corr12+(s2v2*corr2-s2v2)*corr1-vari4*corr)/bb;
                                       

                                       cdf1  =  cdf_norm_OCL(lim1,lim2,a11,a12) ;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                                       // pdf 2
                                       aux1  =  vari2 + skew2 ;
                                       aux2  =  vari2 * corr1 - skew2 * corr ;
                                       pdf2  =  d22norm(zi, zj,aux1,aux1,aux2);


                                       bb= vari4*corr12-2*s2v2*corr*corr1+skew4*corr2-vari4-2*s2v2-skew4;
                                       lim1  =  (( pp1+pp)*zj+(-pp*corr1+skew3*corr2-skew*vari2-skew3)*zi)/bb;
                                       lim2  = -((-pp1-pp)*zi+( pp*corr1-skew3*corr2+skew*vari2+skew3)*zj)/bb;

                       
                                       a11   =  (vari4*corr12+s2v2*corr2-vari4-s2v2)/bb;
                                       a12   = -(vari4*corr*corr12+(s2v2-s2v2*corr2)*corr1-vari4*corr)/bb;
                                     

                                       cdf2  =  cdf_norm_OCL(lim1,lim2,a11,a12) ;
 
dens = 2*(pdf1 * cdf1 + pdf2 * cdf2);
return(dens);
}

//bivariate skew gaussian bivariate  distribution
double biv_skew2(double corr,double zi,double zj,double vari1,double vari2,double rho ,double skew1,double skew2)
{
   
    double aux1,aux2,aux3,pdf1,pdf2,quadr;
    double dens,det,fact1,fact2, fact3,fact4,factor,c1,lim1,lim2,cdf1,cdf2,a11,a12,a22;
       double taul=pow(vari1,0.5); double taur=pow(vari2,0.5);
                                       c1= 1.0 /  (1-pow(corr,2)) ;
                                       aux1 = pow(taul,2) + pow(skew1,2) ;
                                       aux2 =  taul*taur*corr + skew1*skew2*corr ;
                                       aux3 = pow(taur,2) + pow(skew2,2) ;
                                       det =   aux1*aux3 - pow(aux2,2) ;

                                       quadr= (1.0/det)*( aux1*pow(zj,2.0)+aux3*pow(zi,2.0) - 2.0*aux2*zi*zj  ) ;
                                       pdf1=  (0.5/M_PI) * (1/sqrt(det)) * exp(- 0.5 * quadr) ;
                                       //////
                                       aux1 = (pow(skew1/taul,2)+1)*c1;
                                       aux2 = ((skew1*skew2)/(taul*taur)+1)*c1*corr;
                                       aux3 = (pow(skew2/taur,2)+1)*c1;

                                       det =   aux1*aux3 - pow(aux2,2) ;
                                       a11  =  (1/det)* aux3   ;
                                       a12  =  (1/det)* aux2   ;
                                       a22  =  (1/det)* aux1   ;
                                       factor = c1 /  det ;
                                       fact1 = factor * (aux3*(skew1/pow(taul,2)) - aux2*(skew2/(taul*taur))*corr) ;
                                       fact2 = factor * (-aux3*(skew1/(taul*taur))*corr + aux2*(skew2/pow(taur,2)) ) ;
                                       fact3 = factor * (aux2*(skew1/pow(taul,2)) - aux1*(skew2/(taul*taur))*corr) ;
                                       fact4 = factor * (-aux2*(skew1/(taul*taur))*corr + aux1*(skew2/pow(taur,2)) ) ;

                                       lim1 =   fact1*zi +  fact2*zj   ;
                                       lim2 =   fact3*zi +  fact4*zj   ;
                                       cdf1 = cdf_norm2(lim1,lim2,a11,a12,a22) ;
                                       //////////////////////////////////////////////////////////////////////////////////
                                       aux1 = pow(taul,2) + pow(skew1,2) ;
                                       aux2 =  taul*taur*corr - skew1*skew2*corr ;
                                       aux3 = pow(taur,2) + pow(skew2,2) ;
                                       det =   aux1*aux3 - pow(aux2,2) ;
                                       quadr= (1.0/det)*( aux1*pow(zj,2.0)+aux3*pow(zi,2.0) - 2.0*aux2*zi*zj  ) ;
                                       pdf2=  (0.5/M_PI) * (1/sqrt(det)) * exp(- 0.5 * quadr) ;
                                       //////
                                       aux1 = pow(skew1/taul,2)*c1 + c1 ;
                                       aux2 = (skew1*skew2)/(taul*taur)*c1*corr - c1*corr;
                                       aux3 = pow(skew2/taur,2)*c1 + c1 ;
                                       det =   aux1*aux3 - pow(aux2,2) ;
                                       a11  =  (1/det)* aux3   ;
                                       a12  =  (1/det)* aux2   ;
                                       a22  =  (1/det)* aux1   ;
                                       factor = c1 /  det ;
                                       fact1 = factor * (aux3*(skew1/pow(taul,2)) - aux2*(skew2/(taul*taur))*corr) ;
                                       fact2 = factor * (-aux3*(skew1/(taul*taur))*corr + aux2*(skew2/pow(taur,2)) ) ;
                                       fact3 = factor * (aux2*(skew1/pow(taul,2)) - aux1*(skew2/(taul*taur))*corr) ;
                                       fact4 = factor * (-aux2*(skew1/(taul*taur))*corr + aux1*(skew2/pow(taur,2) )) ;
                                       lim1 =   fact1*zi +  fact2*zj   ;
                                       lim2 =   fact3*zi +  fact4*zj   ;
                                       cdf2 = cdf_norm2(lim1,lim2,a11,a12,a22) ;
                            dens=2*(pdf1*cdf1+pdf2*cdf2);

return(dens);
}


double biv_tukey_hh(double corr,double data_i,double data_j,double mui,double muj,
    double sill,double hl,double hr)
           
{

  double res = 0.0,A=0.0,B=0.0,hl_i,hr_i,hl_j,hr_j;
  double  Lhl_i=1.0,Lhr_i=1.0,Lhl_j=1.0,Lhr_j=1.0;
  double z_i = (data_i - mui)/sqrt(sill);
  double z_j = (data_j - muj)/sqrt(sill);
  hl_i = inverse_lamb(z_i,hl);
  hl_j = inverse_lamb(z_j,hl);

  hr_i = inverse_lamb(z_i,hr);
  hr_j = inverse_lamb(z_j,hr);


  Lhl_i = (1 + LambertW(hl*z_i*z_i));
  Lhl_j = (1 + LambertW(hl*z_j*z_j));
  Lhr_i = (1 + LambertW(hr*z_i*z_i));
  Lhr_j = (1 + LambertW(hr*z_j*z_j));


if(fabs(corr)>1e-30){
if(z_i>=0&&z_j>=0)
{res=dbnorm(hr_i,hr_j,0,0,1,corr)*hr_i*hr_j/(z_i*z_j*Lhr_i*Lhr_j);}
if(z_i>=0&&z_j<0)
{res=dbnorm(hr_i,hl_j,0,0,1,corr)*hr_i*hl_j/(z_i*z_j*Lhr_i*Lhl_j);}
if(z_i<0&&z_j>=0)
{res=dbnorm(hl_i,hr_j,0,0,1,corr)*hl_i*hr_j/(z_i*z_j*Lhl_i*Lhr_j);}
if(z_i<0&&z_j<0)
{res=dbnorm(hl_i,hl_j,0,0,1,corr)*hl_i*hl_j/(z_i*z_j*Lhl_i*Lhl_j);}
}
else
{
if(z_i>=0)
{A=dnorm(hr_i,0,1,0)*hr_i/(z_i*Lhr_i);}
if(z_i<0)
{A=dnorm(hl_i,0,1,0)*hl_i/(z_i*Lhl_i);}
if(z_j>=0)
{B=dnorm(hr_j,0,1,0)*hr_j/(z_j*Lhr_j);}
if(z_j<0)
{B=dnorm(hl_j,0,1,0)*hl_j/(z_j*Lhl_j);}
res=A*B;
}
return(res/sill);
}


double corr_tukeygh(double rho,double eta,double tail)
{
    double mu,rho2,a,eta2,tail2,u,A1,A2,A3,cova,vari,rho1;
if(fabs(rho)<1e-16){return(0.0);}
    else{

        if(fabs(eta)>1e-5){
                  rho2=rho*rho; tail2=tail*tail;
                  eta2=eta*eta;
                  u=1-tail; a=1+rho;
                  A1=exp(a*eta2/(1-tail*a));
                  A2=2*exp(0.5*eta2*  (1-tail*(1-rho2))  / (u*u- tail2*rho2)  );
                  A3=eta2*sqrt(u*u- rho2*tail2);
                  mu=(exp(eta2/(2*u))-1)/(eta*sqrt(u));
                  cova=((A1-A2+1)/A3-mu*mu);
                  vari=((exp(2*eta2/(1-2*tail))-2*exp(eta2/(2*(1-2*tail)))+1)/(eta2*
                  sqrt(1-2*tail))-mu*mu);
                  rho1=cova/vari;
                  }
       if(fabs(eta)<=1e-5) {
                 a=pow(1-2*tail,-1.5);
                 rho1=(-rho/((1+tail*(rho-1))*(-1+tail+tail*rho)*pow(1+tail*(-2+tail-tail*rho*rho),0.5)))/a;
               //  Rprintf("%f %f %f %f \n",rho1,tail,eta,rho);
                 }
}
return(rho1);
}

/*double biv_binom(int NN, int u, int v, double p01,double p10,double p11)
{
    
    int a;
    double kk=0.0,dens=0.0;
    for(a=max(0,u+v-NN);a<=min(u,v);a++)
    {
        double aux1 = a+1;
        double aux2 = u-a+1;
        double aux3 = v-a+1;
        double aux4 = NN+1;
        double aux5 = NN-u-v+a+1;
        //kk=exp(logfac(NN)-(logfac(a)+logfac(u-a)+logfac(v-a)+logfac(NN-u-v+a)));
        kk=exp(lgamma(aux4)-(lgamma(aux1)+lgamma(aux2)+lgamma(aux3)+lgamma(aux5)));
        dens+=kk*(pow(p11,a)*pow(p01-p11,u-a)*pow(p10-p11,v-a)*pow(1+p11-(p01+p10),NN-u-v+a));
    }
    return(dens);
}*/

double biv_binom(int NN, int u, int v, double p01,double p10,double p11)
{
    
int a;
double kk=0.0,dens=0.0;
for(a=fmax(double(0),double(u+v-NN));a<=fmin(double(u),double(v));a++){
kk=exp(lgamma(double(NN+1))-(lgamma(double(a+1))+lgamma(double(u-a+1))+lgamma(double(v-a+1))+lgamma(double(NN-u-v+a+1))));
dens+=kk*(pow(p11,a)*pow(p01-p11,u-a)*pow(p10-p11,v-a)*pow(1+p11-(p01+p10),NN-u-v+a));
 }
    return(dens);
}

// compute the bivariate normal cdf for the bernoulli RF:

double pbnorm(int cormod, double h, double u, double mean1, double mean2, double nugget, double var,double par0,double par1,double par2,double par3, double thr)
{ 
    double res=0;
    double lim_inf[2]={0,0};//lower bound for the integration
    double lim_sup[2]={mean1,mean2};
    int infin[2]={0,0};//set the bounds for the integration
    double corr[1]={(1-nugget)*CorFct(cormod,h,u,par0,par1,par2,par3,0,0)};
    //res=F77_CALL(bvnmvn)(lim_inf,lim_sup,infin,corr);
    res = Phi2(lim_sup[0],lim_sup[1],corr[0]);
    return(res);
}


double aux_biv_binomneg_simple(int NN, int u, double p01,double p10,double p11)
{
          int i=0;
  double kk1=0.0,dens=0.0;

    for(i=fmax(double (0),double (NN-u-1));i<=NN-1;i++){
      kk1=exp(lgamma(double(NN-1+u+1))-(lgamma(double(i+1))+lgamma(double(NN-i))+lgamma(double(NN-i))+lgamma(double(u-NN+2+i))));
      dens+=kk1*pow(p11,i+1)*pow(1+p11-(p01+p10),u-NN+1+i)*pow(p01-p11,NN-1-i)*pow(p10-p11,NN-1-i);
       }
         return(dens);
}

double aux_biv_binomneg (int NN, int u, int v, double x,double y,double p11)
{
  int a=0,i=0;
  double kk1=0.0,kk2=0.0,dens1=0.0,dens2=0.0;
    

    for(a=fmax(double (0),(double)(u-v+NN-1));a<=NN-2;a++){
   for(i=fmax(double (0),double(a-u));i<=fmin(double (a),(double)(NN-1));i++){
    kk1=exp(lgamma(double(NN+u))-(lgamma(double(i+1))+lgamma(double(NN-i))+lgamma(double(a-i+1))+lgamma(double(u-a+i+1))));
    kk2=exp(lgamma(double(v-u))-(lgamma(double(v+a-NN-u+2))+lgamma(double(NN-a-1))));
    dens1+=kk1*kk2*pow(p11,i+1)*pow(1+p11-(x+y),u-a+i)*
             pow(x-p11,NN-i-1)*pow(y-p11,a-i)*pow(1-y,v-u-NN+a+1)*pow(y,NN-a-1);
  }}

    for(a=fmax(double (0),(double)(u-v+NN));a<=NN-1;a++){
    for(i=fmax(double (0),double (a-u));i<=fmin((double) (a),(double)(NN-1));i++){
    kk1=exp(lgamma(double(NN+u))-(lgamma(double(i+1))+lgamma(double(NN-1-i+1))+lgamma(double(a-i+1))+lgamma(double(u-a+i+1))));
    kk2=exp(lgamma(double(v-u))-(lgamma(double(v+a-NN-u+1))+lgamma(double(NN-a))));
    dens2+=kk1*kk2*pow(p11,i)*pow(1+p11-(x+y),u-a+i)*
                 pow(x-p11,NN-i)*pow(y-p11,a-i)*pow(1-y,v-u-NN+a)*pow(y,NN-a);
  }}
  return(dens1+dens2);
    
    //return(0.1);
}

double biv_binomneg (int NN, int u, int v, double p01,double p10,double p11)
{
double dens=0.0;
    if(u<v)    {dens=aux_biv_binomneg(NN,u,v,p01,p10,p11);}

    if(u==v)     { dens=aux_biv_binomneg_simple(NN,v,p10,p01,p11);}//

    if(u>v)    {dens=aux_biv_binomneg(NN,v,u,p10,p01,p11);}
return(dens);
}
/**********************************************************************/
/*double bin_aux(int a,int NN,int u,int v,double p1, double p2,double p11)
{
  double kk,dens;
kk=exp(lgamma(double (NN+1))-(lgamma(double(a+1))+lgamma(double(u-a+1))+lgamma(double(v-a+1))+lgamma(double(NN-u-v+a+1))));
dens=kk*(pow(p11,a)*pow(p1-p11,u-a)*pow(p2-p11,v-a)*pow(1+p11-(p1+p2),NN-u-v+a));
return(dens);
}*/

// bivariate pois-binomial
double biv_poisbin (int NN, int u, int  v, double p01,double p10,double p11)
{
    int a=0,a_u=0;
    double dens=0.0, kk=0.0;
    a_u=min(u,v);
    dens=0;
    for(a=0;a<=a_u;a++){
        double aux1 = a+1;
        double aux2 = u-a+1;
        double aux3 = v-a+1;
        kk=exp(-(lgamma(aux1)+lgamma(aux2)+lgamma(aux3)));//exp(-(lgamma(aux1)+lgamma(aux2)+lgamma(aux3)))
        dens+=kk*(pow(NN*p11,a)*pow(NN*(p01-p11),u-a)*pow(NN*(p10-p11),v-a));
    }
    return(exp(-NN*(p01+p10-p11))*dens);
}

// bivariate pois-bineg
double biv_poisbinneg (int NN, int u, int v, double p01,double p10,double p11)
{
    int a=0,a_u=0;
    double dens=0.0,pp=0.0,bb=0.0, kk=0.0;
    a_u=min(u,v);
    dens=0;
    pp=p11*p01*p10;
    bb=(1-p11)/p11;
    for(a=0;a<=a_u;a++){
        double aux1 = a+1;
        double aux2 = u-a+1;
        double aux3 = v-a+1;
        kk=exp(-(lgamma(aux1)+lgamma(aux2)+lgamma(aux3)));
dens+=kk*(pow(NN*((p11*(p01+p10)-p01*p10*(p11+1))/pp),a)*pow(NN*((p10-p11)/(p10*p11)),u-a)*pow(NN*bb,v-a));
    }
    return(exp(-NN*bb)*dens);
}


double pbnorm_st(int cormod, double h, double u, double mean1, double mean2, double nugget, double var, double par0, double par1, double par2, double par3, double par4, double par5, double par6, double thr)
{
    double res = 0;
    //double lim_inf[2]={0,0};//lower bound for the integration
    double lim_sup[2] = { mean1,mean2 };
    //int infin[2]={0,0};//set the bounds for the integration
    double corr[1] = { var*CorFct_st(cormod,h,u,par0,par1,par2,par3,par4,par5,par6,0,0) };
    //res=F77_CALL(bvnmvn)(lim_inf,lim_sup,infin,corr);
    res = Phi2(lim_sup[0], lim_sup[1], corr[0]);
    return(res);
}


double biv_Logistic(double corr, double zi, double zj, double mui, double muj, double sill)
{
    double a = 0.0, A = 0.0, res = 0.0, B = 0.0, C = 0.0;
    double ci = mui; double cj = muj;
    double ki = exp((zi - ci) / sqrt(sill));
    double kj = exp((zj - cj) / sqrt(sill));
    double rho2 = pow(corr, 2);
        a = 1 - rho2;
        A = (ki*kj) / (pow(a, -2)*sill);
        B = pow((ki + 1)*(kj + 1), -2);
        C = appellF4(2, 2, 1, 1,
                     (rho2*ki*kj) / ((ki + 1)*(kj + 1)),
                     rho2 / ((ki + 1)*(kj + 1)));
        res = A*B*C;
    return(res);
}


double biv_LogLogistic(double corr,double zi,double zj,double mui, double muj, double shape)
{
    double c=tgamma(1+1/shape)*tgamma(1-1/shape);
    double A=0.0,res=0.0,B=0.0,C=0.0;
    double ci=exp(mui);double cj=exp(muj);
    double ki=pow(c*zi/ci,shape)+1;
    double kj=pow(c*zj/cj,shape)+1;
    double rho2=pow(corr,2);
    double kij=ki*kj;
    
    A=(pow(c*shape,2)/(ci*cj))*pow((c*c*zi*zj)/(ci*cj),shape-1)*pow(1-rho2,2);
    B=pow(kij,-2);
    C=appellF4(2,2,1,1,
               (rho2*pow(c*c*zi*zj,shape))/(pow(ci*cj,shape)*kij),
               rho2/(kij));
    res=A*B*C;
    return(res);
    
}
double asy_log_besselI(double z,double nu)
{
     double val;
     double K=4*pow(nu,2);
     val =  (z-0.5*log(2*M_PI*z))+
           log((1-(K-1)/(8*z)*(1-(K-9)/(2*8*z)*(1-(K-25)/(3*8*z)))));
     return(val);
}



/*double biv_Weibull(double corr,double zi,double zj,double mui, double muj, double shape)
{
    double res1=0.0,ui=0.0, uj=0.0,z=0.0,a=0.0,A=0.0,k=0.0,res=0.0,B=0.0;double ci=exp(mui);double cj=exp(muj);;
      k=pow(tgamma(1+1/shape),-1);
    ui=zi/ci;uj=zj/cj;
        a=1-pow(corr,2);
        z=2*fabs(corr)*pow(ui*uj,shape/2)*pow(k,-shape)/a;
        A=pow(shape,2)*pow(k,-2*shape)*pow(ui*uj,shape-1)/a;
        B= exp(-pow(k,-shape)*(pow(ui,shape)+pow(uj,shape))/a);
        if(z<700) 
               res=A*B*bessel_ii(z,0,1)/(ci*cj);
        else{
               B=-pow(k,-shape)*(pow(ui,shape)+pow(uj,shape))/a;
               res1=(log(A)+B-(log(ci)+log(cj))) + asy_log_besselI(z,0);
               res=exp(res1);
             }
    return(res);
}*/

double biv_Weibull(double corr,double zi,double zj,double mui, double muj, double shape)
{
    double ui=0.0, uj=0.0,z=0.0,a=0.0,A=0.0,k=0.0,res=0.0,B=0.0;double ci=exp(mui);double cj=exp(muj);;
    k=pow(tgamma(1+1/shape),-1);
    ui=zi/ci;uj=zj/cj;
        a=1-pow(corr,2);
        z=2*fabs(corr)*pow(ui*uj,shape/2)*pow(k,-shape)/a;
        A=2*log(shape)  +  (-2*shape)*log(k) + (shape-1)*log(ui*uj) - log(a);
        B= -pow(k,-shape)*(pow(ui,shape)+pow(uj,shape))/a;
               res=A+B+ log(bessel_ii(z,0,2))+z  - (mui+muj);
       
    return(exp(res));
}

/*
double biv_Weibull(double corr,double zi,double zj,double mui, double muj, double shape)
{
    double ui=0.0, uj=0.0,z=0.0,a=0.0,A=0.0,k=0.0,res=0.0,B=0.0;double ci=exp(mui);double cj=exp(muj);;
    k=pow(tgamma(1+1/shape),-1);
    ui=zi/ci;uj=zj/cj;
   // if(corr)   {
        a=1-pow(corr,2);
        z=2*fabs(corr)*pow(ui*uj,shape/2)*pow(k,-shape)/a;
        A=pow(shape,2)*pow(k,-2*shape)*pow(ui*uj,shape-1)/a;
        B= exp(-pow(k,-shape)*(pow(ui,shape)+pow(uj,shape))/a);
        res=A*B*bessel_ii(z,0,1)/(ci*cj);
    return(res);
    
}*/


/*********************************/

/*double biv_gamma(double corr,double zi,double zj,double mui, double muj, double shape)
{
    double res1=0.0,a=0.0,A=0.0,D=0.0,z=0.0,res=0.0,B=0.0,C=0.0;
    double ci=zi/exp(mui);double cj=zj/exp(muj);
  double gam = tgamma(shape/2);
        a=1-pow(corr,2);  

        z=shape*fabs(corr)*sqrt((ci)*(cj))/a;

        A=pow((ci)*(cj),shape/2-1) * pow(z/2,1-shape/2) ; ///ok
        C= exp(-shape*((ci)+(cj))/(2*a));//ok
        B=gam*pow(a,shape/2)*pow(2,shape)*pow(shape,-shape);  
        D=bessel_ii(z,shape/2-1,1); //ok
        if(z<700) 
             res=(A*C*D)/(exp(muj)*exp(muj)*B);
        else{
            C=-shape*((ci)+(cj))/(2*a);
            res1=log(A)+C-(mui-muj-log(B))+asy_log_besselI(z,shape/2-1);
            res=exp(res1);
        }
        return(res);
}*/

double biv_gamma(double corr,double zi,double zj,double mui, double muj, double shape)
{
    double a=0.0,A=0.0,D=0.0,z=0.0,res=0.0,B=0.0,C=0.0;
    double ci=zi/exp(mui);double cj=zj/exp(muj);
    double gam = tgamma(shape/2);
    a=1-pow(corr,2);

    if((bool)(corr)){
        z=shape*fabs(corr)*sqrt(ci*cj)/a;
        A=(shape/2-1)*log(ci*cj) -shape*(ci+cj)/(2*a); ///ok
        C=(1-shape/2)*log(z/2); //ok
        B=log(gam)+(shape/2)*log(a)+shape*log(2.0)-shape*log(shape);
        D=log(bessel_ii(z,shape/2-1,2))+z; //ok
        res=(A+C+D)-(mui+muj+B);
        return(exp(res));
       }else
    {
        B=(pow((shape/(2*exp(mui))),shape/2)*pow(zi,shape/2-1)*exp(-(shape*ci/(2))))/gam;
        C=(pow((shape/(2*exp(muj))),shape/2)*pow(zj,shape/2-1)*exp(-(shape*cj/(2))))/gam;
        res=B*C;
    }
return(res);
    //return(0.5);
}


/*double biv_Kumara(double rho,double zi,double zj,double ai,double aj,double shape1,double shape2)
{
    double xx=0.0,yy=0.0,ki=0.0,kj=0.0,p1=0.0,p2=0.0,rho2=0.0,res=0.0;
    ki=1-pow(zi,shape2); kj=1-pow(zj,shape2);
    
    rho2=rho*rho;
    xx=rho2*pow(ki*kj,shape1);
    yy=rho2*(1-pow(ki,shape1))*(1-pow(kj,shape1));
    p1=pow(shape1*shape2,2)*pow(zi*zj,shape2-1)*pow(ki*kj,shape1-1)*pow(1-rho2,2);
    p2= appellF4(2,2,1,1,xx,yy);
    res=p1*p2;
    
    return(res);
}*/
double biv_Kumara(double rho,double zi,double zj,double ai,double aj,double shape1,double shape2,double min,double  max)
{
  double xx=0.0,yy=0.0,ki=0.0,kj=0.0,p1=0.0,p2=0.0,rho2=0.0,res=0.0;
    double dd=(max-min);
  zi=(zi-min)/dd;zj=(zj-min)/dd;

 ki=1-pow(zi,shape2); kj=1-pow(zj,shape2);
if(rho) {
  rho2=rho*rho;
  xx=rho2*pow(ki*kj,shape1);
  yy=rho2*(1-pow(ki,shape1))*(1-pow(kj,shape1));
  p1=pow(shape1*shape2,2)*pow(zi*zj,shape2-1)*pow(ki*kj,shape1-1)*pow(1-rho2,2);
  p2= appellF4(2,2,1,1,xx,yy);
  res=p1*p2;}
 else  {p1=shape1*shape2*pow(zi,shape2-1)* pow(ki,shape1-1);
         p2=shape1*shape2*pow(zj,shape2-1)* pow(kj,shape1-1);
         res=p1*p2;}
return(res/pow(dd,2));
}


/*********** START bivariate T distribution********************/
/*********** START bivariate T distribution********************/
double biv_T(double rho, double zi, double zj, double nuu,double nugget)
{
    int k=0;
    double nu=1/nuu;
    double res0=0.0,RR=0.0,pp1=0.0,pp2=0.0;
    double bb1,bb2;
    double x=zi;double y=zj;
    double cc=(nu+1)/2; double nu2=nu/2;
    double rho1=rho*(1-nugget);
    double rho2=pow(1-rho*rho,-nu2-1);
    double rho12=pow(1-rho1*rho1,-nu-0.5);
    double x1=(x*x*(1-rho*rho)+nu*(1-rho1*rho1));
    double y1=(y*y*(1-rho*rho)+nu*(1-rho1*rho1));
    double C,B;


    double b1 = exp( nu*log(nu)-cc*log(x1*y1)+2*lgamma(cc));
    double c1 = exp(log(M_PI)+ 2*lgamma(nu/2)+log(rho12)+log(rho2));

    double b2 = rho1*x*y*pow(nu,nu+2)*pow(x1*y1,-nu2-1);
    double c2 = 2*M_PI*pow(1-rho1*rho1,-nu-0.5)*pow(1-rho*rho,-nu2-2);

    double a1 = 0.0; double a2 = 0.0;
    double aux  = pow(rho1*x*y*(1-rho*rho),2)/(x1*y1);
    double aux1 = pow(rho*nu*(1-rho1*rho1),2)/(x1*y1);
    
    
   if(rho> DEPSILON){
    while( k<=3000 )
      {
      pp1=(0.5-2*(cc+k))*log(1-aux)+log(hypergeo(0.5-(cc+k),0.5-(cc+k),0.5,aux));
      bb1=pp1+k*log(aux1)+2*(lgamma(cc+k)-lgamma(cc))-lgamma(double(k+1))-lgamma(nu2+k)+lgamma(nu2);
      a1 = a1 + exp(bb1);
      pp2=(1.5-2*(nu2+1+k))*log(1-aux)+log(hypergeo(1.5-(nu2+1+k),1.5-(nu2+1+k),1.5,aux));
      bb2=pp2+k*log(aux1)+2*log((1+k/nu2))+lgamma(nu2+k)-lgamma(double(k+1))-lgamma(nu2);
      a2 = a2 + exp(bb2);
      RR=(b1/c1)*a1+(b2/c2)*a2;
      if((fabs(RR-res0)<1e-10||!isfinite(RR))  ) {break;}
      else {res0=RR;}
          k++;
      }
          if(!isfinite(RR)) RR=1e-320;
  return(RR);
  }
    if(rho< DEPSILON)
    {
      C = lgamma(cc)+log(pow((1+x*x/nu),-cc))-log(sqrt(M_PI*nu))-lgamma(nu/2);
      B = lgamma(cc)+log(pow((1+y*y/nu),-cc))-log(sqrt(M_PI*nu))-lgamma(nu/2);
      return(exp(B)*exp(C));
    }
}
double appellF4(double a, double b, double c, double d, double x, double y)

{
    
    double RR = 0.0, bb = 0.0, res0 = 0.0;
    int k = 0;
    while (k <= 5000)
    {
        bb = k*log(y)+(lgamma(a+k)+lgamma(b+k)+lgamma(d))-(lgamma(a)+lgamma(b)+lgamma(d+k)+lgamma(k+1.0))+(c-(a+k)-(b+k))*log(1.0-x)+log(hypergeo(c-a-k,c-b-k,c,x)); //euler
        RR = RR + exp(bb);
        if (RR>DBL_MAX) return(res0);
        if ((fabs(RR - res0)<1e-10)) { break; }
        else { res0 = RR; }
        //RR = RR + exp(bb);
        k++;
    }
    return(RR);
}

/*double appellF4(double a, double b, double c, double d, double x, double y)

{
    
    double RR = 0.0, bb = 0.0, res0 = 0.0;
    int k = 0;
    while (k <= 5000)
    {
        bb = k*log(y)+(lgamma(a+k)+lgamma(b+k)+lgamma(d))-(lgamma(a)+lgamma(b)+lgamma(d+k)+lgamma(k+1.0))+(c-(a+k)-(b+k))*log(1.0-x)+log(hypergeo(c-a-k,c-b-k,c,x)); //euler
        RR = RR + exp(bb);
        if (RR>DBL_MAX) return(res0);
        if ((fabs(RR - res0)<1e-30)) { break; }
        else { res0 = RR; }
        k++;
    }
    if(!isfinite(RR)) RR=1e-320;
    return(RR);
}*/

/*double appellF4_mod(double nu, double rho2, double x, double y)
{
    double xx, yy, x2, y2, arg, arg1, pp1, pp2, app;
    xx = x*x; yy = y*y;
    x2 = xx + nu;
    y2 = yy + nu;
    arg = (nu + 1) / 2;
    arg1 = nu / 2;
    pp1 = pow(nu, nu)*pow(x2*y2, -arg)*pow(tgamma(arg), 2);
    pp2 = M_PI*pow(tgamma(arg1), 2)*pow(1 - rho2, -arg);
    app = appellF4(arg, arg, 0.5, arg1, rho2*xx*yy / (x2*y2), nu*nu*rho2 / (x2*y2));
    return(4 * pp1*app / pp2);
}*/

double appellF4_mod(double nu,double rho,double x,double y,double nugget)
{
  double x2,y2,arg,arg1,pp1,pp2,app;
  double rho1=rho*(1-nugget);
  double rho22=pow(1-rho*rho,-nu/2-1);
  double rho12=pow(1-rho1*rho1,-nu-0.5);

x2=(x*x*(1-rho*rho)+nu*(1-rho1*rho1));
y2=(y*y*(1-rho*rho)+nu*(1-rho1*rho1));

arg=(nu+1)/2;  arg1=nu/2;
pp1=exp(nu*log(nu)-arg*log(x2*y2)+2*lgamma(arg));
pp2=exp(log(M_PI)+2*lgamma(arg1)+log(rho12)+log(rho22));
app=appellF4(arg,arg,0.5,arg1,pow(rho1*x*y*(1-rho*rho),2)/(x2*y2), pow(rho*nu*(1-rho1*rho1),2)/(x2*y2));
return(4*pp1*app/pp2);
    //return(50);


}

/*********** END bivariate T distribution********************/

/*********** bivariate two piece-T distribution********************/

double biv_two_pieceT(double rho,double zi,double zj,double sill,double nuu,double eta,
             double p11,double mui,double muj,double nugget)
{
double res;
double nu=1/nuu;
double etamas=1+eta;
double etamos=1-eta;
double zistd=(zi-mui)/sqrt(sill);
double zjstd=(zj-muj)/sqrt(sill);

    if(rho>DBL_EPSILON){
    if(zistd>=0&&zjstd>=0)
{res=          (p11/pow(etamos,2))*appellF4_mod(nu,rho,zistd/etamos,zjstd/etamos,nugget);}
    if(zistd>=0&&zjstd<0)
{res=((1-eta-2*p11)/(2*(1-eta*eta)))*appellF4_mod(nu,rho,zistd/etamos,-zjstd/etamas,nugget);}
      if(zistd<0&&zjstd>=0)
{res=((1-eta-2*p11)/(2*(1-eta*eta)))*appellF4_mod(nu,rho,-zistd/etamas,zjstd/etamos,nugget);}
    if(zistd<0&&zjstd<0)
{res=    ((p11+eta)/pow(etamas,2))*appellF4_mod(nu,rho,-zistd/etamas,-zjstd/etamas,nugget);}

}
    if(rho<DBL_EPSILON){ // OJO!
    
    if(zi>=mui)
{res=0.5*2*exp((nu/2)*log(nu)+lgamma((nu+1.0)/2)-((nu+1)/2)*log(pow(zistd/etamos,2)+nu)-0.5*log(M_PI)-lgamma(nu/2));}
         if(zj<muj)
         {res=0.5*2*exp((nu/2)*log(nu)+lgamma((nu+1.0)/2)-((nu+1)/2)*log(pow(zjstd/etamas,2)+nu)-0.5*log(M_PI)-lgamma(nu/2));}
    
    
      }
return(res/sill);
    
}



/***** bivariate half gaussian ****/
double biv_half_Gauss(double rho,double zi,double zj)
{
double kk=0, dens=0,a=0,b=0,rho2=1-rho*rho;
  kk=(M_PI)*sqrt(rho2);
  a=exp(- (1/(2*(rho2)))*(pow(zi,2)+pow(zj,2)-2*rho*zi*zj));
  b=exp(- (1/(2*(rho2)))*(pow(zi,2)+pow(zj,2)+2*rho*zi*zj));
  dens=(a+b)/kk;
  return(dens);
}
/***** bivariate two piece gaussian ****/
double biv_two_pieceGaussian(double rho,double zi,double zj,double sill,double eta,
             double p11,double mui,double muj)
{
double res;
double etamas=1+eta;
double etamos=1-eta;
double zistd=(zi-mui)/sqrt(sill);
double zjstd=(zj-muj)/sqrt(sill);
if(zi>=mui&&zj>=muj)
{res=          (p11/pow(etamos,2))*biv_half_Gauss(rho,zistd/etamos,zjstd/etamos);}
if(zi>=mui&&zj<muj)
{res=((1-eta-2*p11)/(2*(1-eta*eta)))*biv_half_Gauss(rho,zistd/etamos,-zjstd/etamas);}
if(zi<mui&&zj>=muj)
{res=((1-eta-2*p11)/(2*(1-eta*eta)))*biv_half_Gauss(rho,-zistd/etamas,zjstd/etamos);}
if(zi<mui&&zj<muj)
{res=    ((p11+eta)/pow(etamas,2))*biv_half_Gauss(rho,-zistd/etamas,-zjstd/etamas);}
return(res/sill);
}

// End: biv_two_pieceGaussian

// ===================================== END: Distributions.c  ==================================//


double polevl(double x, double * coef, int N)
{
    double ans;
    int i;
    const double *p;
    
    p = coef;
    ans = *p++;
    i = N;
    
    do
        ans = ans * x + *p++;
    while (--i);
    
    return (ans);
}

/*                                                     p1evl() */
/*                                          N
 * Evaluate polynomial when coefficient of x  is 1.0.
 * Otherwise same as polevl.
 */

double p1evl(double x,  double *coef, int N)
{
    double ans;
    const double *p;
    int i;
    
    p = coef;
    ans = x + *p++;
    i = N - 1;
    
    do
        ans = ans * x + *p++;
    while (--i);
    
    return (ans);
}



double lgam(double x)
{
    int sign;
    return lgam_sgn(x, &sign);
}

double lgam_sgn(double x, int *sign)
{
    
    
    double A[] = {
        8.11614167470508450300E-4,
        -5.95061904284301438324E-4,
        7.93650340457716943945E-4,
        -2.77777777730099687205E-3,
        8.33333333333331927722E-2
    };
    
    double B[] = {
        -1.37825152569120859100E3,
        -3.88016315134637840924E4,
        -3.31612992738871184744E5,
        -1.16237097492762307383E6,
        -1.72173700820839662146E6,
        -8.53555664245765465627E5
    };
    
    double C[] = {
        /* 1.00000000000000000000E0, */
        -3.51815701436523470549E2,
        -1.70642106651881159223E4,
        -2.20528590553854454839E5,
        -1.13933444367982507207E6,
        -2.53252307177582951285E6,
        -2.01889141433532773231E6
    };
    
    
    double p, q, u, w, z;
    int i;
    
    *sign = 1;
    
    if (!isfinite(x))
        return x;
    
    if (x < -34.0) {
        q = -x;
        w = lgam_sgn(q, sign);
        p = floor(q);
        if (p == q) {
        lgsing:
            //mtherr("lgam", SING);
            // printf("SIGN\n");
            return (NPY_INFINITY);
        }
        i = p;
        if ((i & 1) == 0)
            *sign = -1;
        else
            *sign = 1;
        z = q - p;
        if (z > 0.5) {
            p += 1.0;
            z = p - q;
        }
        z = q * sin(NPY_PI * z);
        if (z == 0.0)
            goto lgsing;
        /*     z = log(NPY_PI) - log( z ) - w; */
        z = LOGPI - log(z) - w;
        return (z);
    }
    
    if (x < 13.0) {
        z = 1.0;
        p = 0.0;
        u = x;
        while (u >= 3.0) {
            p -= 1.0;
            u = x + p;
            z *= u;
        }
        while (u < 2.0) {
            if (u == 0.0)
                goto lgsing;
            z /= u;
            p += 1.0;
            u = x + p;
        }
        if (z < 0.0) {
            *sign = -1;
            z = -z;
        }
        else
            *sign = 1;
        if (u == 2.0)
            return (log(z));
        p -= 2.0;
        x = x + p;
        p = x * polevl(x, B, 5) / p1evl(x, C, 6);
        return (log(z) + p);
    }
    
    if (x > MAXLGM) {
        return (*sign * NPY_INFINITY);
    }
    
    q = (x - 0.5) * log(x) - x + LS2PI;
    if (x > 1.0e8)
        return (q);
    
    p = 1.0 / (x * x);
    if (x >= 1000.0)
        q += ((7.9365079365079365079365e-4 * p
               - 2.7777777777777777777778e-3) * p
              + 0.0833333333333333333333) / x;
    else
        q += polevl(p, A, 4) / x;
    return (q);
}




double hyp2f1( double a,double b,double c,double x)
{
    double d, d1, d2, e;
    double p, q, r, s, y, ax;
    double ia, ib, ic, id, err;
    double t1;
    int i, aid;
    int neg_int_a = 0, neg_int_b = 0;
    int neg_int_ca_or_cb = 0;
    
    err = 0.0;
    ax = fabs(x);
    s = 1.0 - x;
    ia = round(a);        /* nearest integer to a */
    ib = round(b);
    
    if (x == 0.0) {
        return 1.0;
    }
    
    d = c - a - b;
    id = round(d);
    
    if ((a == 0 || b == 0) && c != 0) {
        return 1.0;
    }
    
    if (a <= 0 && fabs(a - ia) < EPS) {    /* a is a negative integer */
        neg_int_a = 1;
    }
    
    if (b <= 0 && fabs(b - ib) < EPS) {    /* b is a negative integer */
        neg_int_b = 1;
    }
    
    if (d <= -1 && !(fabs(d - id) > EPS && s < 0)
        && !(neg_int_a || neg_int_b)) {
        return pow(s, d) * hyp2f1(c - a, c - b, c, x);
    }
    if (d <= 0 && x == 1 && !(neg_int_a || neg_int_b))
        goto hypdiv;
    
    if (ax < 1.0 || x == -1.0) {
        /* 2F1(a,b;b;x) = (1-x)**(-a) */
        if (fabs(b - c) < EPS) {    /* b = c */
            if (neg_int_b) {
                y = hyp2f1_neg_c_equal_bc(a, b, x);
            } else {
                y = pow(s, -a);    /* s to the -a power */
            }
            goto hypdon;
        }
        if (fabs(a - c) < EPS) {    /* a = c */
            y = pow(s, -b);    /* s to the -b power */
            goto hypdon;
        }
    }
    
    
    
    if (c <= 0.0) {
        ic = round(c);        /* nearest integer to c */
        if (fabs(c - ic) < EPS) {    /* c is a negative integer */
            /* check if termination before explosion */
            if (neg_int_a && (ia > ic))
                goto hypok;
            if (neg_int_b && (ib > ic))
                goto hypok;
            goto hypdiv;
        }
    }
    
    if (neg_int_a || neg_int_b)    /* function is a polynomial */
        goto hypok;
    
    t1 = fabs(b - a);
    if (x < -2.0 && fabs(t1 - round(t1)) > EPS) {
        /* This transform has a pole for b-a integer, and
         * may produce large cancellation errors for |1/x| close 1
         */
        p = hyp2f1(a, 1 - c + a, 1 - b + a, 1.0 / x);
        q = hyp2f1(b, 1 - c + b, 1 - a + b, 1.0 / x);
        p *= pow(-x, -a);
        q *= pow(-x, -b);
        t1 = tgamma(c);
        s = t1 * tgamma(b - a) / (tgamma(b) * tgamma(c - a));
        y = t1 * tgamma(a - b) / (tgamma(a) * tgamma(c - b));
        return s * p + y * q;
    }
    else if (x < -1.0) {
        if (fabs(a) < fabs(b)) {
            return pow(s, -a) * hyp2f1(a, c - b, c, x / (x - 1));
        }
        else {
            return pow(s, -b) * hyp2f1(b, c - a, c, x / (x - 1));
        }
    }
    
    if (ax > 1.0)        /* series diverges  */
        goto hypdiv;
    
    p = c - a;
    ia = round(p);        /* nearest integer to c-a */
    if ((ia <= 0.0) && (fabs(p - ia) < EPS))    /* negative int c - a */
        neg_int_ca_or_cb = 1;
    
    r = c - b;
    ib = round(r);        /* nearest integer to c-b */
    if ((ib <= 0.0) && (fabs(r - ib) < EPS))    /* negative int c - b */
        neg_int_ca_or_cb = 1;
    
    id = round(d);        /* nearest integer to d */
    q = fabs(d - id);
    
    /* Thanks to Christian Burger <BURGER@DMRHRZ11.HRZ.Uni-Marburg.DE>
     * for reporting a bug here.  */
    if (fabs(ax - 1.0) < EPS) {    /* |x| == 1.0   */
        if (x > 0.0) {
            if (neg_int_ca_or_cb) {
                if (d >= 0.0)
                    goto hypf;
                else
                    goto hypdiv;
            }
            if (d <= 0.0)
                goto hypdiv;
            y = tgamma(c) * tgamma(d) / (tgamma(p) * tgamma(r));
            goto hypdon;
        }
        if (d <= -1.0)
            goto hypdiv;
    }
    
    /* Conditionally make d > 0 by recurrence on c
     * AMS55 #15.2.27
     */
    if (d < 0.0) {
        /* Try the power series first */
        y = hyt2f1(a, b, c, x, &err);
        if (err < ETHRESH)
            goto hypdon;
        /* Apply the recurrence if power series fails */
        err = 0.0;
        aid = 2 - id;
        e = c + aid;
        d2 = hyp2f1(a, b, e, x);
        d1 = hyp2f1(a, b, e + 1.0, x);
        q = a + b + 1.0;
        for (i = 0; i < aid; i++) {
            r = e - 1.0;
            y = (e * (r - (2.0 * e - q) * x) * d2 +
                 (e - a) * (e - b) * x * d1) / (e * r * s);
            e = r;
            d1 = d2;
            d2 = y;
        }
        goto hypdon;
    }
    
    
    if (neg_int_ca_or_cb)
        goto hypf;        /* negative integer c-a or c-b */
    
hypok:
    y = hyt2f1(a, b, c, x, &err);
    
    
hypdon:
    if (err > ETHRESH) {
        //mtherr("hyp2f1", PLOSS);
        //  printf( "Estimated err = %.2e\n", err );
    }
    return (y);
    
    /* The transformation for c-a or c-b negative integer
     * AMS55 #15.3.3
     */
hypf:
    y = pow(s, d) * hys2f1(c - a, c - b, c, x, &err);
    goto hypdon;
    
    /* The alarm exit */
hypdiv:
    //mtherr("hyp2f1", OVERFLOW);
    //printf( "Estimated err = %.2e\n", err );
    return NPY_INFINITY;
}






/* Apply transformations for |x| near 1
 * then call the power series
 */
double hyt2f1( double a, double b, double c, double x, double *loss )
{
    double p, q, r, s, t, y, w, d, err, err1;
    double ax, id, d1, d2, e, y1;
    int i, aid, sign;
    
    int ia, ib, neg_int_a = 0, neg_int_b = 0;
    
    ia = round(a);
    ib = round(b);
    
    if (a <= 0 && fabs(a - ia) < EPS) {    /* a is a negative integer */
        neg_int_a = 1;
    }
    
    if (b <= 0 && fabs(b - ib) < EPS) {    /* b is a negative integer */
        neg_int_b = 1;
    }
    
    err = 0.0;
    s = 1.0 - x;
    if (x < -0.5 && !(neg_int_a || neg_int_b)) {
        if (b > a)
            y = pow(s, -a) * hys2f1(a, c - b, c, -x / s, &err);
        
        else
            y = pow(s, -b) * hys2f1(c - a, b, c, -x / s, &err);
        
        goto done;
    }
    
    d = c - a - b;
    id = round(d);        /* nearest integer to d */
    
    if (x > 0.9 && !(neg_int_a || neg_int_b)) {
        if (fabs(d - id) > EPS) {
            int sgngam;
            
            /* test for integer c-a-b */
            /* Try the power series first */
            y = hys2f1(a, b, c, x, &err);
            if (err < ETHRESH)
                goto done;
            /* If power series fails, then apply AMS55 #15.3.6 */
            q = hys2f1(a, b, 1.0 - d, s, &err);
            sign = 1;
            w = lgam_sgn(d, &sgngam);
            sign *= sgngam;
            w -= lgam_sgn(c-a, &sgngam);
            sign *= sgngam;
            w -= lgam_sgn(c-b, &sgngam);
            sign *= sgngam;
            q *= sign * exp(w);
            r = pow(s, d) * hys2f1(c - a, c - b, d + 1.0, s, &err1);
            sign = 1;
            w = lgam_sgn(-d, &sgngam);
            sign *= sgngam;
            w -= lgam_sgn(a, &sgngam);
            sign *= sgngam;
            w -= lgam_sgn(b, &sgngam);
            sign *= sgngam;
            r *= sign * exp(w);
            y = q + r;
            
            q = fabs(q);    /* estimate cancellation error */
            r = fabs(r);
            if (q > r)
                r = q;
            err += err1 + (MACHEP * r) / y;
            
            y *= tgamma(c);
            goto done;
        }
        else {
            /* Psi function expansion, AMS55 #15.3.10, #15.3.11, #15.3.12
             *
             * Although AMS55 does not explicitly state it, this expansion fails
             * for negative integer a or b, since the psi and Gamma functions
             * involved have poles.
             */
            
            if (id >= 0.0) {
                e = d;
                d1 = d;
                d2 = 0.0;
                aid = id;
            }
            else {
                e = -d;
                d1 = 0.0;
                d2 = d;
                aid = -id;
            }
            
            ax = log(s);
            
            /* sum for t = 0 */
            y = digammaRD(1.0) + digammaRD(1.0 + e) - digammaRD(a + d1) - digammaRD(b + d1) - ax;
            y /= tgamma(e + 1.0);
            
            p = (a + d1) * (b + d1) * s / tgamma(e + 2.0);    /* Poch for t=1 */
            t = 1.0;
            do {
                r = digammaRD(1.0 + t) + digammaRD(1.0 + t + e) - digammaRD(a + t + d1)
                - digammaRD(b + t + d1) - ax;
                q = p * r;
                y += q;
                p *= s * (a + t + d1) / (t + 1.0);
                p *= (b + t + d1) / (t + 1.0 + e);
                t += 1.0;
                if (t > MAX_ITERATIONS) {    /* should never happen */
                    //mtherr("hyp2f1", TOOMANY);
                    // printf( "Estimated err = %.2e\n", err );
                    *loss = 1.0;
                    return NPY_NAN;
                }
            }
            while (y == 0 || fabs(q / y) > EPS);
            
            if (id == 0.0) {
                y *= tgamma(c) / (tgamma(a) * tgamma(b));
                goto psidon;
            }
            
            y1 = 1.0;
            
            if (aid == 1)
                goto nosum;
            
            t = 0.0;
            p = 1.0;
            for (i = 1; i < aid; i++) {
                r = 1.0 - e + t;
                p *= s * (a + t + d2) * (b + t + d2) / r;
                t += 1.0;
                p /= t;
                y1 += p;
            }
        nosum:
            p = tgamma(c);
            y1 *= tgamma(e) * p / (tgamma(a + d1) * tgamma(b + d1));
            
            y *= p / (tgamma(a + d2) * tgamma(b + d2));
            if ((aid & 1) != 0)
                y = -y;
            
            q = pow(s, id);    /* s to the id power */
            if (id > 0.0)
                y *= q;
            else
                y1 *= q;
            
            y += y1;
        psidon:
            goto done;
        }
        
    }
    
    /* Use defining power series if no special cases */
    y = hys2f1(a, b, c, x, &err);
    
done:
    *loss = err;
    return (y);
}





/* Defining power series expansion of Gauss hypergeometric function */

double hys2f1( double a,double b,double c,double x,double *loss )
{
    double f, g, h, k, m, s, u, umax;
    int i;
    int ib, intflag = 0;
    
    if (fabs(b) > fabs(a)) {
        /* Ensure that |a| > |b| ... */
        f = b;
        b = a;
        a = f;
    }
    
    ib = round(b);
    
    if (fabs(b - ib) < EPS && ib <= 0 && fabs(b) < fabs(a)) {
        /* .. except when `b` is a smaller negative integer */
        f = b;
        b = a;
        a = f;
        intflag = 1;
    }
    
    if ((fabs(a) > fabs(c) + 1 || intflag) && fabs(c - a) > 2
        && fabs(a) > 2) {
        /* |a| >> |c| implies that large cancellation error is to be expected.
         *
         * We try to reduce it with the recurrence relations
         */
        return hyp2f1ra(a, b, c, x, loss);
    }
    
    i = 0;
    umax = 0.0;
    f = a;
    g = b;
    h = c;
    s = 1.0;
    u = 1.0;
    k = 0.0;
    do {
        if (fabs(h) < EPS) {
            *loss = 1.0;
            return NPY_INFINITY;
        }
        m = k + 1.0;
        u = u * ((f + k) * (g + k) * x / ((h + k) * m));
        s += u;
        k = fabs(u);        /* remember largest term summed */
        if (k > umax)
            umax = k;
        k = m;
        if (++i > MAX_ITERATIONS) {    /* should never happen */
            *loss = 1.0;
            return (s);
        }
    }
    while (s == 0 || fabs(u / s) > MACHEP);
    
    /* return estimated relative error */
    *loss = (MACHEP * umax) / fabs(s) + (MACHEP * i);
    
    return (s);
}


/*
 * Evaluate hypergeometric function by two-term recurrence in `a`.
 *
 * This avoids some of the loss of precision in the strongly alternating
 * hypergeometric series, and can be used to reduce the `a` and `b` parameters
 * to smaller values.
 *
 * AMS55 #15.2.10
 */
double hyp2f1ra(double a, double b, double c, double x,
                double *loss)
{
    double f2, f1, f0;
    int n;
    double t, err, da;
    
    /* Don't cross c or zero */
    if ((c < 0 && a <= c) || (c >= 0 && a >= c)) {
        da = round(a - c);
    }
    else {
        da = round(a);
    }
    t = a - da;
    
    *loss = 0;
    
    //https://www.khronos.org/registry/OpenCL/sdk/1.0/docs/man/xhtml/restrictions.html
    //if((da != 0)){printf("assert(da != 0);\n");}
    
    if (fabs(da) > MAX_ITERATIONS) {
        /* Too expensive to compute this value, so give up */
        //mtherr("hyp2f1", TLOSS);
        //printf( "TLOSS\n");
        *loss = 1.0;
        return NPY_NAN;
    }
    
    if (da < 0) {
        /* Recurse down */
        f2 = 0;
        f1 = hys2f1(t, b, c, x, &err);
        *loss += err;
        f0 = hys2f1(t - 1, b, c, x, &err);
        *loss += err;
        t -= 1;
        for (n = 1; n < -da; ++n) {
            f2 = f1;
            f1 = f0;
            f0 = -(2 * t - c - t * x + b * x) / (c - t) * f1 - t * (x -
                                                                    1) /
            (c - t) * f2;
            t -= 1;
        }
    }
    else {
        /* Recurse up */
        f2 = 0;
        f1 = hys2f1(t, b, c, x, &err);
        *loss += err;
        f0 = hys2f1(t + 1, b, c, x, &err);
        *loss += err;
        t += 1;
        for (n = 1; n < da; ++n) {
            f2 = f1;
            f1 = f0;
            f0 = -((2 * t - c - t * x + b * x) * f1 +
                   (c - t) * f2) / (t * (x - 1));
            t += 1;
        }
    }
    
    return f0;
}


/*
 15.4.2 Abramowitz & Stegun.
 */
double hyp2f1_neg_c_equal_bc(double a, double b, double x)
{
    double k;
    double collector = 1;
    double sum = 1;
    double collector_max = 1;
    
    if (!(fabs(b) < 1e5)) {
        return NPY_NAN;
    }
    
    for (k = 1; k <= -b; k++) {
        collector *= (a + k - 1)*x/k;
        collector_max = fmax(fabs(collector), collector_max);
        sum += collector;
    }
    
    if (1e-16 * (1 + collector_max/fabs(sum)) > 1e-7) {
        return NPY_NAN;
    }
    
    return sum;
}



double hypergeo(double a,double b,double c,double x)
{
    double sol;
    sol =hyp2f1( a, b, c, x );
    return(sol);
}




/***** bivariate half tukey h ****/
double biv_half_Tukeyh(double rho,double ti,double tj,double tail)
{
  double dens = 0.0;
  dens = biv_tukey_h(rho,ti,tj,0,0,tail,1) + biv_tukey_h(rho,-ti,-tj,0,0,tail,1) + biv_tukey_h(rho,-ti,tj,0,0,tail,1) + biv_tukey_h(rho,ti,-tj,0,0,tail,1);
  return(dens);
}
 

/***** bivariate two piece tukey h ****/
double biv_two_pieceTukeyh(double rho,double zi,double zj,double sill,double eta,double tail,
             double p11,double mui,double muj)
{
double res;
double etamas=1+eta;
double etamos=1-eta;
double zistd=(zi-mui)/sqrt(sill);
double zjstd=(zj-muj)/sqrt(sill);


/*if(rho)   {*/
//if(zi>=mui&&zj>=muj)
    if(zistd>=0&&zjstd>=0)
{res=          (p11/pow(etamos,2))*biv_half_Tukeyh(rho,zistd/etamos,zjstd/etamos,tail);}
//if(zi>=mui&&zj<muj)
    if(zistd>=0&&zjstd<0)
{res=((1-eta-2*p11)/(2*(1-eta*eta)))*biv_half_Tukeyh(rho,zistd/etamos,-zjstd/etamas,tail);}
//if(zi<mui&&zj>=muj)
      if(zistd<0&&zjstd>=0)
{res=((1-eta-2*p11)/(2*(1-eta*eta)))*biv_half_Tukeyh(rho,-zistd/etamas,zjstd/etamos,tail);}
//if(zi<mui&&zj<muj)
    if(zistd<0&&zjstd<0)
{res=    ((p11+eta)/pow(etamas,2))*biv_half_Tukeyh(rho,-zistd/etamas,-zjstd/etamas,tail);}
/*}else{   if(zi>=mui)
         {res=dnorm(x_i,0,1,0)*x_i/((zistd/etamos)*(1+LambertW(tail*R_pow(zistd/etamos,2))));}
         if(zj<muj)
         {res=dnorm(x_j,0,1,0)*x_j/((zjstd/etamas)*(1+LambertW(tail*R_pow(zjstd/etamas,2))));}
      }*/
return(res/sill);

}



// Pois2

double  binomialCoeff(int n, int k)
{
    double res=0.0;
    res=lgamma((double)(n+1))-(lgamma((double)(k+1))+lgamma((double)(n-k+1)));
    return(exp(res));
}


double Prt(double corr,int r, int t, double mean_i, double mean_j){

       if(fabs(corr)<1e-10) {
        return(exp(-mean_i-mean_j+r*log(mean_i)+t*log(mean_j) -lgamma((double)(r+1))-lgamma((double)(t+1))));}
    else
    {
    double rho2= pow(corr,2);
    double prt,q1,q2,term =0, term1 =0, value = 0, value1 = 0,aux2=0, aux3=0, aux4=0,aux=0, aux1=0;
    double auxi= mean_i/(1-rho2);
    double auxj= mean_j/(1-rho2);
    int n,k=0,m=0, iter=1000;

    n= r-t;

        while(m<=iter){

            aux= m*(log(rho2)-log(1-rho2));
            aux1= lgamma((double)(t+m))+(t+m+n)*log(mean_i)-lgamma((double)(m+1))-lgamma((double)t);
             // q2=regularized1F1(n+1,t+m+n+1,rho2*auxi);     // it doesn't work
            q2=exp(log(hyperg(n+1,t+m+n+1, rho2*auxi))-lgamma((double)(t+m+n+1)));
            if(!isfinite(q2)) q2=aprox_reg_1F1(n+1,t+m+n+1,rho2*auxi);
                        

            term1= exp(aux+aux1+log(q2)+log(igam(t+m, auxj)));
            value1 =value1+ term1;
                for(k=0;k<=iter;k++){
                        aux2= (k+m)*(log(rho2)-log(1-rho2))+lgamma((double)(t+m));
                        aux3= lgamma((double)(m+1))+lgamma((double)t);
                        aux4= (m+n+t+k)*log(mean_i)+log(igam(1+k+m+t,auxj));
                        
                       q1=exp(log(hyperg(n,t+m+n+k+1, rho2*auxi))-lgamma((double)(t+m+n+k+1)));
                          if(!isfinite(q1)) q1=aprox_reg_1F1(n,t+m+n+k+1, rho2*auxi);
                                               
                        term= exp(aux2-aux3+aux4+log(q1));
                        value =value+ term;
                        if((fabs(term)<1e-10||!isfinite(term))  ) {break;}
                  
            }
       if((fabs(term1)<1e-10||!isfinite(term1))  ) {break;}
        m++;
    }

     prt= exp(-auxi+log(value1))- exp(-auxi+log(value));
     if(!isfinite(prt)) prt=1e-320;
     ///if(prt<=0) prt=0;
    return(prt);
}
}



/*

double Prr(double corr,int r, int t, double mean_i, double mean_j){

       if(fabs(corr)<1e-10) {
        return(exp(-mean_i-mean_j+r*log(mean_i)+t*log(mean_j) -lgamma((double)(r+1))-lgamma((double)(t+1))));}
    else
    {
    double rho2= pow(corr,2);
    double prr, term, term1=0.0, term2=0.0, term3=0.0;
    double value = 0, value1 = 0, value2 = 0, value3 = 0 ;
    int k = 0, m=0;
    double auxi= mean_i/(1-rho2);
    double auxj= mean_j/(1-rho2);
    int iter=10000;

    while(k<iter){

term1 = pow(rho2,k)*                exp(lgamma((double)(r+k)) + log(igam(r+k,      auxi))+log(igam(r+k,      auxj))-lgamma((double)(k+1))-lgamma((double)r));
term2 =exp(-mean_i)*pow(1/rho2,r)*exp(lgamma((double)(r+k)) + log(igam(r+k, rho2*auxi))+log(igam(r+k,      auxj))-lgamma((double)(k+1))-lgamma((double)r));
term3 =exp(-mean_j)*pow(1/rho2,r)*exp(lgamma((double)(r+k)) + log(igam(r+k,      auxi))+log(igam(r+k, rho2*auxj))-lgamma((double)(k+1))-lgamma((double)r));
      value1 =value1+ term1;
      value2 =value2+ term2;
      value3 =value3+ term3;

      m=0;
      while(m<iter){
                  term=(1-rho2)*pow(rho2,k+m)*
                       exp(lgamma((double)(r+m))-lgamma((double)r)-lgamma((double)(m+1))+log(igam(r+k+m+1,auxi))+log(igam(r+k+m+1,auxj)));
                  value =value+term;
                  if((fabs(term)<1e-10)||!isfinite(term)  ) {break;}
                  m++;
                 }
                  if((fabs(term1)<1e-10&&fabs(term2)<1e-10)||(!isfinite(term1))||(!isfinite(term2))) {break;}
          k++;
      }
    prr= pow((1-rho2),r)*(- value1 + value2 + value3 + value);
     //if(prr<=0) prr=0;//1e-320;
    return(prr);
}
   
}

double Pr0(double corr,int r, int t, double mean_i, double mean_j)
{

    if(fabs(corr)<1e-10) {
       // return(exp(-mean_i)*R_pow(mean_i,r) *exp(-mean_j)/gammafn(r+1));}
        return(exp(-mean_i+r*log(mean_i) -mean_j-lgamma((double)(r+1))));}
    else
    {
    double rho2= pow(corr,2);
    int j=0,k=0;
    double pr0,term =0.0, value = 0.0,aux=0.0, aux1=0.0;
    double auxi= mean_i/(1-rho2);
    double auxj= mean_j/(1-rho2);

    int iter=10000;
    for(j=0; j<=r-1; ++j){
            k=0;
    while(k<=iter){
  
            aux= binomialCoeff(r-1, j)*pow((1-rho2)/rho2,j+1);
            aux1= exp(lgamma((double)(j+k+1))+ (r-j-1)*log(mean_i)-lgamma((double)(k+1)))*pow(-1,(double )j);
            term= aux*aux1*igam(j+k+1, rho2*auxi)*igam(k+1, auxj);
            value =value+ term;
                if(fabs(term)<1e-10||!isfinite(term))  {break;}
            k++;}
    }
    pr0= exp(r*log(mean_i)-mean_i-lgamma((double)(r+1)))-
    exp(-mean_i + log(value)-lgamma((double)r));
    return(pr0);
    }
}

double P00(double corr,int r, int t, double mean_i, double mean_j){

if(fabs(corr)<1e-10) {return(exp(-mean_i)*exp(-mean_j));}
    else
    {
    double rho2= pow(corr,2);
    int k = 0;
    double p00,sum = 0.0,term;
    double auxi= mean_i/(1-rho2);
    double auxj= mean_j/(1-rho2);
    while(k<10000){
              term=exp( k*log(rho2) + log(igam(k+1, auxi)) + log(igam(k+1, auxj) )) ;
              if(fabs(term)<1e-10||!isfinite(term))  {break;}
             sum =sum+term;
        k++;}
    p00 = -1+ exp(-mean_i)+ exp(-mean_j)+(1-rho2)*sum;
    return(p00);
   }
}
*/


/*double biv_Poisson(double corr,int r, int t, double mean_i, double mean_j)
{
double dens;
if(r==t)
{if(r==0) dens=P00(corr,r,r,mean_i,mean_j);
     if(r>0)  dens=Prr(corr,r,r,mean_i,mean_j);
}

if(r==0&&t>0) dens=Pr0(corr,t,r,mean_j,mean_i);
if(r>0&&t==0) dens=Pr0(corr,r,t,mean_i,mean_j);

if(r>0&&t>0)
{
if(r>t) dens=Prt(corr,r,t,mean_i,mean_j);
if(t>r) dens=Prt(corr,t,r,mean_j,mean_i);
}
return(dens);

}*/

double Prr(double corr,int r, int t, double mean_i, double mean_j){

    double rho2= pow(corr,2);
    double prr,  term=0.0,term1=0.0, term2=0.0, term3=0.0,aa=0.0,bb=0.0,cc=0.0,dd=0.0;
    double sum = 0.0, res0=0.0,res00=0.0,res11=0.0, sum1 = 0.0, sum2 = 0.0;
    int k = 0, m=0;
    double auxi= mean_i/(1-rho2);
    double auxj= mean_j/(1-rho2);
    int iter1=1000;  int iter2=1000;

    while(k<iter1){
//+++++++++++++++++++++++++++++++++++++++//
      m=0; res0=0.0;
      while(m<iter2){
                      //Rprintf("%d %d\n",m,k);
term=(1-rho2)*pow(rho2,k+m)*exp(lgamma((double)(r+m))-lgamma((double)(r))-lgamma((double)(m+1))+log(igam((double)(r+k+m+1),auxi))+log(igam((double)(r+k+m+1),auxj)));
        if((fabs(term)<1e-10)||!isfinite(term))   {break;}
        sum =sum+term;
                  m++;
                 }
//+++++++++++++++++++++++++++++++++++++++//
        aa=lgamma((double)(k+1))+lgamma((double)(r)); bb=lgamma((double)(r+k));
        cc=igam((double)(r+k),      auxi);  dd=igam(r+k,      auxj);

term1 = pow(rho2,k)*                exp(bb + log(cc)                  +log(dd)-aa);
term2 =exp(-mean_i)*pow(1/rho2,r)*exp(bb + log(igam((double)(r+k), rho2*auxi))+log(dd)-aa);
term3 =exp(-mean_j)*pow(1/rho2,r)*exp(bb + log(cc)                  +log(igam(r+k, rho2*auxj))-aa);

if(!isfinite(term1)||!isfinite(term2)||!isfinite(term3))   {break;}
      sum1 =sum1+ term1;
      sum2 =sum2+ term2+term3;

            if((fabs(sum1-res00)<1e-10)&&(fabs(sum2-res11)<1e-10)  ) {break;}
                  else {res00=sum1;res11=sum2;}
          k++;
      }
    prr= pow((1-rho2),r)*(- sum1 + sum2  + sum);//Rprintf("%d %d\n",m,k);
    return(prr);
   
}

/***************************************************************/
double Pr0(double corr,int r, int t, double mean_i, double mean_j){


    double rho2= pow(corr,2),term=0.0;
    double pr0,q2, res0 =0.0, sum = 0.0,aux=0, aux1=0;
    double auxi= mean_i/(1-rho2);
    double auxj= mean_j/(1-rho2);
    int n,m=0, iter=5000;
    n= r-t;
        while(m<=iter){
            aux= m*(log(rho2)-log(1-rho2));
            aux1= (m+n)*log(mean_i);
            q2=exp(log(hyperg(n,m+n+1, rho2*auxi))-lgamma((double)(m+n+1)));
            term=exp(aux+aux1+log(q2)+log(igam((double)(m+1), auxj)));
                   if(!isfinite(term))   {break;}
            sum=sum+term;
            if((fabs(sum-res0)<1e-10) ) {break;}
             else {res0=sum;}
        m++;
    }

     pr0= exp(-mean_i+n*log(mean_i)-lgamma((double)(n+1)))-exp(-auxi+log(sum)) ;
     //  if(pr0<1e-320) pr0=1e-320;
     //if(!R_finite(pr0)) pr0=1e-320;
    return(pr0);

}

/*******************************************************************************/
double P00(double corr,int r, int t, double mean_i, double mean_j){

    double rho2= pow(corr,2);
    int k = 0;
    double p00,sum = 0.0,res0=0.0,term=0.0;
    double auxi= mean_i/(1-rho2);
    double auxj= mean_j/(1-rho2);
    while(k<5000){//k<5000
             term=exp( k*log(rho2) + log(igam((double)(k+1), auxi)) + log(igam((double)(k+1), auxj) )) ;
                 if(!isfinite(term))   {break;}
             sum =sum+term;
             if((fabs(sum-res0)<1e-10 )) {break;}
             else {res0=sum;}
        k++;}
    p00 = -1+ exp(-mean_i)+ exp(-mean_j)+(1-rho2)*sum;
    return(p00);
   
}

double biv_Poisson(double corr,int r, int t, double mean_i, double mean_j)
{
double dens;
if(fabs(corr)>1e-6){
  if(r==t)
  {    if(r==0) dens=P00(corr,r,r,mean_i,mean_j);
       if(r>0)  dens=Prr(corr,r,r,mean_i,mean_j);
  }

else{
  if(r==0&&t>0) dens=Pr0(corr,t,r,mean_j,mean_i);
  if(r>0&&t==0) dens=Pr0(corr,r,t,mean_i,mean_j);

  if(r>0&&t>0)
   {
   if(r>t) dens=Prt(corr,r,t,mean_i,mean_j);
   if(t>r) dens=Prt(corr,t,r,mean_j,mean_i);
   }
  }
}
else{
    //double lambda_i=exp(mean_i); double lambda_j=exp(mean_j);
    double dens1= -mean_i +r*log(mean_i)-lgamma((double)(r+1));
    double dens2= -mean_j +t*log(mean_j)-lgamma((double)(t+1));
    dens=exp(dens1+dens2);
}

return(dens);

}

//************************************** ST igam.c*****************************************



double igam(double a, double x)
{
    double absxma_a;
    
    /* Check zero integration limit first */
    if (x == 0)
        return (0.0);
    
    if ((x < 0) || (a <= 0)) {
        //sf_error("gammainc", SF_ERROR_DOMAIN, NULL);
       // printf("gammainc  SF_ERROR_DOMAIN\n");
        return (NAN);
    }
    
    /* Asymptotic regime where a ~ x; see [2]. */
    absxma_a = fabs(x - a) / a;
    if ((a > SMALL) && (a < LARGE) && (absxma_a < SMALLRATIO)) {
        return asymptotic_series(a, x, IGAM);
    } else if ((a > LARGE) && (absxma_a < LARGERATIO / sqrt(a))) {
        return asymptotic_series(a, x, IGAM);
    }
    
    if ((x > 1.0) && (x > a)) {
        return (1.0 - igamc(a, x));
    }
    
    return igam_series(a, x);
}


double igamc(double a, double x)
{
    double absxma_a;
    
    if ((x < 0) || (a <= 0)) {
        //sf_error("gammaincc", SF_ERROR_DOMAIN, NULL);
        //printf("gammainc  SF_ERROR_DOMAIN\n");
        return (NAN);
    } else if (x == 0) {
        return 1;
    } else if (isinf(x)) {
        return 0.0;
    }
    
    /* Asymptotic regime where a ~ x; see [2]. */
    absxma_a = fabs(x - a) / a;
    if ((a > SMALL) && (a < LARGE) && (absxma_a < SMALLRATIO)) {
        return asymptotic_series(a, x, IGAMC);
    } else if ((a > LARGE) && (absxma_a < LARGERATIO / sqrt(a))) {
        return asymptotic_series(a, x, IGAMC);
    }
    
    /* Everywhere else; see [2]. */
    if (x > 1.1) {
        if (x < a) {
            return 1.0 - igam_series(a, x);
        } else {
            return igamc_continued_fraction(a, x);
        }
    } else if (x <= 0.5) {
        if (-0.4 / log(x) < a) {
            return 1.0 - igam_series(a, x);
        } else {
            return igamc_series(a, x);
        }
    } else {
        if (x * 1.1 < a) {
            return 1.0 - igam_series(a, x);
        } else {
            return igamc_series(a, x);
        }
    }
}




double igam_fac(double a, double x)
{
    double ax, fac, res, num;
    
    if (fabs(a - x) > 0.4 * fabs(a)) {
        ax = a * log(x) - x - lgam(a);
        if (ax < -MAXLOG) {
            //sf_error("igam", SF_ERROR_UNDERFLOW, NULL);
            //printf("gammainc  SF_ERROR_DOMAIN\n");
            return 0.0;
        }
        return exp(ax);
    }
    
    fac = a + lanczos_g - 0.5;
    res = sqrt(fac / EEEE) / lanczos_sum_expg_scaled(a);
    
    if ((a < 200) && (x < 200)) {
        res *= exp(a - x) * pow(x / fac, a);
    } else {
        num = x - a - lanczos_g + 0.5;
        res *= exp(a * log1pmx(num / fac) + x * (0.5 - lanczos_g) / fac);
    }
    
    return res;
}


/* Compute igamc using DLMF 8.9.2. */
double igamc_continued_fraction(double a, double x)
{
    int i;
    double ans, ax, c, yc, r, t, y, z;
    double pk, pkm1, pkm2, qk, qkm1, qkm2;
    
    ax = igam_fac(a, x);
    if (ax == 0.0) {
        return 0.0;
    }
    
    /* continued fraction */
    y = 1.0 - a;
    z = x + y + 1.0;
    c = 0.0;
    pkm2 = 1.0;
    qkm2 = x;
    pkm1 = x + 1.0;
    qkm1 = z * x;
    ans = pkm1 / qkm1;
    
    for (i = 0; i < MAXITER; i++) {
        c += 1.0;
        y += 1.0;
        z += 2.0;
        yc = y * c;
        pk = pkm1 * z - pkm2 * yc;
        qk = qkm1 * z - qkm2 * yc;
        if (qk != 0) {
            r = pk / qk;
            t = fabs((ans - r) / r);
            ans = r;
        }
        else
            t = 1.0;
        pkm2 = pkm1;
        pkm1 = pk;
        qkm2 = qkm1;
        qkm1 = qk;
        if (fabs(pk) > big) {
            pkm2 *= biginv;
            pkm1 *= biginv;
            qkm2 *= biginv;
            qkm1 *= biginv;
        }
        if (t <= MACHEP) {
            break;
        }
    }
    
    return (ans * ax);
}


/* Compute igam using DLMF 8.11.4. */
double igam_series(double a, double x)
{
    int i;
    double ans, ax, c, r;
    
    ax = igam_fac(a, x);
    if (ax == 0.0) {
        return 0.0;
    }
    
    /* power series */
    r = a;
    c = 1.0;
    ans = 1.0;
    
    for (i = 0; i < MAXITER; i++) {
        r += 1.0;
        c *= x / r;
        ans += c;
        if (c <= MACHEP * ans) {
            break;
        }
    }
    
    return (ans * ax / a);
}


/* Compute igamc using DLMF 8.7.3. This is related to the series in
 * igam_series but extra care is taken to avoid cancellation.
 */
double igamc_series(double a, double x)
{
    int n;
    double fac = 1;
    double sum = 0;
    double term, logx;
    
    for (n = 1; n < MAXITER; n++) {
        fac *= -x / n;
        term = fac / (a + n);
        sum += term;
        if (fabs(term) <= MACHEP * fabs(sum)) {
            break;
        }
    }
    
    logx = log(x);
    term = -expm11(a * logx - lgam1p(a));
    return term - exp(a * logx - lgam(a)) * sum;
}


/* Compute igam/igamc using DLMF 8.12.3/8.12.4. */
double asymptotic_series(double a, double x, int func)
{
    int k, n, sgn;
    int maxpow = 0;
    double lambda = x / a;
    double sigma = (x - a) / a;
    double eta, res, ck, ckterm, term, absterm;
    double absoldterm = NPY_INFINITY;
    double etapow[NIC] = {1};
    double sum = 0;
    double afac = 1;
    
    if (func == IGAM) {
        sgn = -1;
    } else {
        sgn = 1;
    }
    
    if (lambda > 1) {
        eta = sqrt(-2 * log1pmx(sigma));
    } else if (lambda < 1) {
        eta = -sqrt(-2 * log1pmx(sigma));
    } else {
        eta = 0;
    }
    res = 0.5 * erfc(sgn * eta * sqrt(a / 2));
    
    for (k = 0; k < KIC; k++) {
        ck = d[k][0];
        for (n = 1; n < NIC; n++) {
            if (n > maxpow) {
                etapow[n] = eta * etapow[n-1];
                maxpow += 1;
            }
            ckterm = d[k][n]*etapow[n];
            ck += ckterm;
            if (fabs(ckterm) < MACHEP * fabs(ck)) {
                break;
            }
        }
        term = ck * afac;
        absterm = fabs(term);
        if (absterm > absoldterm) {
            break;
        }
        sum += term;
        if (absterm < MACHEP * fabs(sum)) {
            break;
        }
        absoldterm = absterm;
        afac /= a;
    }
    res += sgn * exp(-0.5 * a * eta * eta) * sum / sqrt(2 * M_PI * a);
    
    return res;
}


double ratevl(double x, double num[], int M,
               double denom[], int N)
{
    int i, dir;
    double y, num_ans, denom_ans;
    double absx = fabs(x);
    const double *p;
    
    if (absx > 1) {
        /* Evaluate as a polynomial in 1/x. */
        dir = -1;
        p = num + M;
        y = 1 / x;
    } else {
        dir = 1;
        p = num;
        y = x;
    }
    
    /* Evaluate the numerator */
    num_ans = *p;
    p += dir;
    for (i = 1; i <= M; i++) {
        num_ans = num_ans * y + *p;
        p += dir;
    }
    
    /* Evaluate the denominator */
    if (absx > 1) {
        p = denom + N;
    } else {
        p = denom;
    }
    
    denom_ans = *p;
    p += dir;
    for (i = 1; i <= N; i++) {
        denom_ans = denom_ans * y + *p;
        p += dir;
    }
    
    if (absx > 1) {
        i = N - M;
        return(pow(x, i) * num_ans / denom_ans);
    } else {
        return(num_ans / denom_ans);
    }
}




double lanczos_sum_expg_scaled(double x)
{
    double lanczos_sum_expg_scaled_num[13] = {
        0.006061842346248906525783753964555936883222,
        0.5098416655656676188125178644804694509993,
        19.51992788247617482847860966235652136208,
        449.9445569063168119446858607650988409623,
        6955.999602515376140356310115515198987526,
        75999.29304014542649875303443598909137092,
        601859.6171681098786670226533699352302507,
        3481712.15498064590882071018964774556468,
        14605578.08768506808414169982791359218571,
        43338889.32467613834773723740590533316085,
        86363131.28813859145546927288977868422342,
        103794043.1163445451906271053616070238554,
        56906521.91347156388090791033559122686859
    };
    
    double lanczos_sum_expg_scaled_denom[13] = {
        1,
        66,
        1925,
        32670,
        357423,
        2637558,
        13339535,
        45995730,
        105258076,
        150917976,
        120543840,
        39916800,
        0
    };
    
    return ratevl(x, lanczos_sum_expg_scaled_num,
                  sizeof(lanczos_sum_expg_scaled_num) / sizeof(lanczos_sum_expg_scaled_num[0]) - 1,
                  lanczos_sum_expg_scaled_denom,
                  sizeof(lanczos_sum_expg_scaled_denom) / sizeof(lanczos_sum_expg_scaled_denom[0]) - 1);
}

double log1pp(double x)
{
    double z;
    double LP[] = {
        4.5270000862445199635215E-5,
        4.9854102823193375972212E-1,
        6.5787325942061044846969E0,
        2.9911919328553073277375E1,
        6.0949667980987787057556E1,
        5.7112963590585538103336E1,
        2.0039553499201281259648E1,
    };
    
    double LQ[] = {
        /* 1.0000000000000000000000E0, */
        1.5062909083469192043167E1,
        8.3047565967967209469434E1,
        2.2176239823732856465394E2,
        3.0909872225312059774938E2,
        2.1642788614495947685003E2,
        6.0118660497603843919306E1,
    };
    
    z = 1.0 + x;
    if ((z < NPY_SQRT1_2) || (z > NPY_SQRT2))
        return (log(z));
    z = x * x;
    z = -0.5 * z + x * (z * polevl(x, LP, 6) / p1evl(x, LQ, 6));
    return (x + z);
}


/* log(1 + x) - x */
double log1pmx(double x)
{
    if (fabs(x) < 0.5) {
        int n;
        double xfac = x;
        double term;
        double res = 0;
        
        for(n = 2; n < MAXITER; n++) {
            xfac *= -x;
            term = xfac / n;
            res += term;
            if (fabs(term) < MACHEP * fabs(res)) {
                break;
            }
        }
        return res;
    }
    else {
        return log1pp(x) - x;
    }
}



double expm11(double x)
{
    double r, xx;
    
    double EP[3] = {
        1.2617719307481059087798E-4,
        3.0299440770744196129956E-2,
        9.9999999999999999991025E-1,
    };
    double EQ[4] = {
        3.0019850513866445504159E-6,
        2.5244834034968410419224E-3,
        2.2726554820815502876593E-1,
        2.0000000000000000000897E0,
    };
    
    if (!isinf(x)) {
        if (isnan(x)) {
            return x;
        }
        else if (x > 0) {
            return x;
        }
        else {
            return -1.0;
        }
        
    }
    if ((x < -0.5) || (x > 0.5))
        return (exp(x) - 1.0);
    xx = x * x;
    r = x * polevl(xx, EP, 2);
    r = r / (polevl(xx, EQ, 3) - r);
    return (r + r);
}



double cosm1(double x)
{
    double xx;
    double coscof[7] = {
        4.7377507964246204691685E-14,
        -1.1470284843425359765671E-11,
        2.0876754287081521758361E-9,
        -2.7557319214999787979814E-7,
        2.4801587301570552304991E-5,
        -1.3888888888888872993737E-3,
        4.1666666666666666609054E-2,
    };
    
    if ((x < -NPY_PI_4) || (x > NPY_PI_4))
        return (cos(x) - 1.0);
    xx = x * x;
    xx = -0.5 * xx + xx * xx * polevl(xx, coscof, 6);
    return xx;
}


/* Compute lgam(x + 1) around x = 0 using its Taylor series. */
double lgam1p_taylor(double x)
{
    int n;
    double xfac, coeff, res;
    
    if (x == 0) {
        return 0;
    }
    res = -NPY_EULER * x;
    xfac = -x;
    for (n = 2; n < 42; n++) {
        xfac *= -x;
        coeff = zeta(n, 1) * xfac / n;
        res += coeff;
        if (fabs(coeff) < MACHEP * fabs(res)) {
            break;
        }
    }
    
    return res;
}


/* Compute lgam(x + 1). */
double lgam1p(double x)
{
    if (fabs(x) <= 0.5) {
        return lgam1p_taylor(x);
    } else if (fabs(x - 1) < 0.5) {
        return log(x) + lgam1p_taylor(x - 1);
    } else {
        return lgam(x + 1);
    }
}




double zeta(double x, double q)
{
    int i;
    double a, b, k, s, t, w;
    
    if (x == 1.0)
        goto retinf;
    
    if (x < 1.0) {
    domerr:
        //sf_error("zeta", SF_ERROR_DOMAIN, NULL);
        //printf("zeta  SF_ERROR_DOMAIN\n");
        return (NAN);
    }
    
    if (q <= 0.0) {
        if (q == floor(q)) {
            //sf_error("zeta", SF_ERROR_SINGULAR, NULL);
            //printf("zeta  SF_ERROR_SINGULAR\n");
        retinf:
            return (NPY_INFINITY);
        }
        if (x != floor(x))
            goto domerr;    /* because q^-x not defined */
    }
    
    /* Asymptotic expansion
     * https://dlmf.nist.gov/25.11#E43
     */
    if (q > 1e8) {
        return (1/(x - 1) + 1/(2*q)) * pow(q, 1 - x);
    }
    
    /* Euler-Maclaurin summation formula */
    
    /* Permit negative q but continue sum until n+q > +9 .
     * This case should be handled by a reflection formula.
     * If q<0 and x is an integer, there is a relation to
     * the polyGamma function.
     */
    s = pow(q, -x);
    a = q;
    i = 0;
    b = 0.0;
    while ((i < 9) || (a <= 9.0)) {
        i += 1;
        a += 1.0;
        b = pow(a, -x);
        s += b;
        if (fabs(b / s) < MACHEP)
            goto done;
    }
    
    w = a;
    s += b * w / (x - 1.0);
    s -= 0.5 * b;
    a = 1.0;
    k = 0.0;
    for (i = 0; i < 12; i++) {
        a *= x + k;
        b /= w;
        t = a * b / AA[i];
        s = s + t;
        t = fabs(t / s);
        if (t < MACHEP)
            goto done;
        k += 1.0;
        a *= x + k;
        b /= w;
        k += 1.0;
    }
done:
    return (s);
}





//************************************* END igam.c*****************************************





//************************************* START hyperg.c*****************************************
// FUNCTION: 1F1
//Source: https://github.com/scipy/scipy/blob/master/scipy/special/cephes/hyperg.c


void  hyperg_call(double *a,double *b,double *x,double *res)
{
    *res = hyperg(*a,*b,*x);
}




 int is_nonpos_int(double x)
{
    return x <= 0 && x == ceil(x) && fabs(x) < 1e13;
}


double poch(double a, double m)
{
    double r;
    r = 1.0;
    /* Recurse down */
    while (m >= 1.0) {
        if (a + m == 1) {
            break;
        }
        m -= 1.0;
        r *= (a + m);
        if (!isfinite(r) || r == 0) {
            break;
        }
    }

    /* Recurse up */
    while (m <= -1.0) {
        if (a + m == 0) {
            break;
        }
        r /= (a + m);
        m += 1.0;
        if (!isfinite(r) || r == 0) {
            break;
        }
    }

    if (m == 0) {
        /* Easy case */
        return r;
    }
    else if (a > 1e4 && fabs(m) <= 1) {
        /* Avoid loss of precision */
        return r * pow(a, m) * (
            1
            + m*(m-1)/(2*a)
            + m*(m-1)*(m-2)*(3*m-1)/(24*a*a)
            + m*m*(m-1)*(m-1)*(m-2)*(m-3)/(48*a*a*a)
            );
    }

    /* Check for infinity */
    if (is_nonpos_int(a + m) && !is_nonpos_int(a) && a + m != m) {
        return INFINITY;
    }

    /* Check for zero */
    if (!is_nonpos_int(a + m) && is_nonpos_int(a)) {
        return 0;
    }

    return(r * exp(lgamma(a + m) - lgamma(a)) * sign(tgamma(a + m)) * sign(tgamma(a)));
}

/**************************************************/
double aprox_reg_1F1(int n, int m,double z)
{
double p1,term,s1=0.0;int k=0;
p1=exp(z+(n-m)*log(z)-lgamma((double)n));
while(k<1000)
{
term=poch(1-n,k)*poch(m-n,k)*pow(z,-k)/tgamma((double)(k+1));
s1=s1+term;
if(fabs(term)<1e-10)  {break;}
k++;
}
return(p1*s1);
}
/***********************************************/
double regularized1F1(int n, int m,double z)
{
double s1=0.0,s2=0.0,res=0.0,p1;int k=0;
if(n==0&&m==0)  res=0.0;
else{
if(m>n)
{

p1=poch(2-m,n-1)*pow(z,1-m)/tgamma((double)n);
for(k=0;k<=(n-1);k++) {s1=s1+poch(1-n,k)*pow(-z,k)/(poch(2-m,k)*tgamma((double)(k+1)));}
for(k=0;k<=(m-n-1);k++) {s2=s2+poch(1-m+n,k)*pow(z,k)/(poch(2-m,k)*tgamma((double)(k+1)));}
res=p1*(exp(z)*s1-s2);
}
if(m<=n){
p1=exp(z)/tgamma((double)m);
for(k=0;k<=n-m;k++)  {s1=s1+pow(-z,k)*poch(m-n,k)/(poch(m,k)*tgamma((double)(k+1))) ;}
res=p1*s1;
}
}


return(res);
}

void  reghyperg_call(int *a,int *b,double *x,double *res)
{
    *res = regularized1F1(*a,*b,*x);
}
/************ pochammer symbols*******************/
double Poch(int q,int n)
{
    if(n==0) return(1.0);
    else {
        double res=1.0;
        int i;
        for (i=1; i<=n;i++) {
            res =res * (q + i - 1);
        }
         return(res);
    }
       
}




double hyperg(double a, double b, double x)
{
    double asum, psum, acanc, pcanc, temp;

    /* See if a Kummer transformation will help */
    temp = b - a;
    if (fabs(temp) < 0.001 * fabs(a))
    return (exp(x) * hyperg(temp, b, -x));


    /* Try power & asymptotic series, starting from the one that is likely OK */
    if (fabs(x) < 10 + fabs(a) + fabs(b)) {
    psum = hy1f1p(a, b, x, &pcanc);
    if (pcanc < 1.0e-15)
        goto done;
    asum = hy1f1a(a, b, x, &acanc);
    }
    else {
    psum = hy1f1a(a, b, x, &pcanc);
    if (pcanc < 1.0e-15)
        goto done;
    asum = hy1f1p(a, b, x, &acanc);
    }

    /* Pick the result with less estimated error */

    if (acanc < pcanc) {
    pcanc = acanc;
    psum = asum;
    }

  done:
    if (pcanc > 1.0e-12)
    //sf_error("hyperg", SF_ERROR_LOSS, NULL);
        //printf("hyperg SF_ERROR_LOSS\n");
        temp=0;

    //if(isnan(psum)) psum=approx1F1(a,b,x);

    return (psum);
}




/* Power series summation for confluent hypergeometric function                */


double hy1f1p(double a, double b, double x, double *err)
{
    double n, a0, sum, t, u, temp, maxn;
    double an, bn, maxt;
    double y, c, sumc;

    /* set up for power series summation */
    an = a;
    bn = b;
    a0 = 1.0;
    sum = 1.0;
    c = 0.0;
    n = 1.0;
    t = 1.0;
    maxt = 0.0;
    *err = 1.0;

    maxn = 200.0 + 2 * fabs(a) + 2 * fabs(b);

    while (t > MACHEP) {
    if (bn == 0) {        /* check bn first since if both   */
        //sf_error("hyperg", SF_ERROR_SINGULAR, NULL);
        //printf("hyperg SF_ERROR_SINGULAR\n");
        return (NPY_INFINITY);    /* an and bn are zero it is     */
    }
    if (an == 0)        /* a singularity            */
        return (sum);
    if (n > maxn) {
        /* too many terms; take the last one as error estimate */
        c = fabs(c) + fabs(t) * 50.0;
        goto pdone;
    }
    u = x * (an / (bn * n));

    /* check for blowup */
    temp = fabs(u);
    if ((temp > 1.0) && (maxt > (DBL_MAX / temp))) {
        *err = 1.0;        /* blowup: estimate 100% error */
        return sum;
    }

    a0 *= u;

    y = a0 - c;
    sumc = sum + y;
    c = (sumc - sum) - y;
    sum = sumc;

    t = fabs(a0);

    an += 1.0;
    bn += 1.0;
    n += 1.0;
    }

  pdone:

    /* estimate error due to roundoff and cancellation */
    if (sum != 0.0) {
    *err = fabs(c / sum);
    }
    else {
    *err = fabs(c);
    }

    if (*err != *err) {
    /* nan */
    *err = 1.0;
    }

    return (sum);
}


/*                                                     hy1f1a()        */
/* asymptotic formula for hypergeometric function:
 *
 *        (    -a
 *  --    ( |z|
 * |  (b) ( -------- 2f0( a, 1+a-b, -1/x )
 *        (  --
 *        ( |  (b-a)
 *
 *
 *                                x    a-b                     )
 *                               e  |x|                        )
 *                             + -------- 2f0( b-a, 1-a, 1/x ) )
 *                                --                           )
 *                               |  (a)                        )
 */

double hy1f1a(double a, double b, double x, double *err)

{
    double h1, h2, t, u, temp, acanc, asum, err1, err2;
    if (x == 0) {
    acanc = 1.0;
    asum = NPY_INFINITY;
    goto adone;
    }
    temp = log(fabs(x));
    t = x + temp * (a - b);
    u = -temp * a;

    if (b > 0) {
    temp = lgam(b);
    t += temp;
    u += temp;
    }

    h1 = hyp2f0(a, a - b + 1, -1.0 / x, 1, &err1);

    temp = exp(u) / tgamma(b - a);
    h1 *= temp;
    err1 *= temp;

    h2 = hyp2f0(b - a, 1.0 - a, 1.0 / x, 2, &err2);

    if (a < 0)
    temp = exp(t) / tgamma(a);
    else
    temp = exp(t - lgam(a));

    h2 *= temp;
    err2 *= temp;

    if (x < 0.0)
    asum = h1;
    else
    asum = h2;

    acanc = fabs(err1) + fabs(err2);

    if (b < 0) {
    temp = tgamma(b);
    asum *= temp;
    acanc *= fabs(temp);
    }


    if (asum != 0.0)
    acanc /= fabs(asum);

    if (acanc != acanc)
    /* nan */
    acanc = 1.0;

    if (asum == NPY_INFINITY || asum == -NPY_INFINITY)
    /* infinity */
    acanc = 0;

    acanc *= 30.0;        /* fudge factor, since error of asymptotic formula
                 * often seems this much larger than advertised */

  adone:


    *err = acanc;
    return (asum);
}

/*                                                     hyp2f0()        */

double hyp2f0(double a, double b, double x, int type, double *err)

{
    double a0, alast, t, tlast, maxt;
    double n, an, bn, u, sum, temp;

    an = a;
    bn = b;
    a0 = 1.0e0;
    alast = 1.0e0;
    sum = 0.0;
    n = 1.0e0;
    t = 1.0e0;
    tlast = 1.0e9;
    maxt = 0.0;

    do {
    if (an == 0)
        goto pdone;
    if (bn == 0)
        goto pdone;

    u = an * (bn * x / n);

    /* check for blowup */
    temp = fabs(u);
    if ((temp > 1.0) && (maxt > (DBL_MAX / temp)))
        goto error;

    a0 *= u;
    t = fabs(a0);

    /* terminating condition for asymptotic series:
     * the series is divergent (if a or b is not a negative integer),
     * but its leading part can be used as an asymptotic expansion
     */
    if (t > tlast)
        goto ndone;

    tlast = t;
    sum += alast;        /* the sum is one term behind */
    alast = a0;

    if (n > 200)
        goto ndone;

    an += 1.0e0;
    bn += 1.0e0;
    n += 1.0e0;
    if (t > maxt)
        maxt = t;
    }
    while (t > MACHEP);


  pdone:            /* series converged! */

    /* estimate error due to roundoff and cancellation */
    *err = fabs(MACHEP * (n + maxt));

    alast = a0;
    goto done;

  ndone:            /* series did not converge */

    /* The following "Converging factors" are supposed to improve accuracy,
     * but do not actually seem to accomplish very much. */

    n -= 1.0;
    x = 1.0 / x;

    switch (type) {        /* "type" given as subroutine argument */
    case 1:
    alast *=
        (0.5 + (0.125 + 0.25 * b - 0.5 * a + 0.25 * x - 0.25 * n) / x);
    break;

    case 2:
    alast *= 2.0 / 3.0 - b + 2.0 * a + x - n;
    break;

    default:
    ;
    }

    /* estimate error due to roundoff, cancellation, and nonconvergence */
    *err = MACHEP * (n + maxt) + fabs(a0);

  done:
    sum += alast;
    return (sum);

    /* series blew up: */
  error:
    *err = NPY_INFINITY;
    //sf_error("hyperg", SF_ERROR_NO_RESULT, NULL);
    //printf("hyperg SF_ERROR_NO_RESULT\n");
    return (sum);
}







//************************************* END hyperg.c*****************************************
/*double corr_pois(double rho,double mi,double mj)
{
int r=0; double res0=0.0,sum=0.0;
double rho2=rho*rho;
double ki=mi/(1-rho2);
double kj=mj/(1-rho2);
double K=rho2*(1-rho2)/sqrt(mi*mj);
while(r<150000){
  sum=sum+ exp( log(igam(r+1,ki))+log(igam(r+1,kj)));
if((fabs(sum-res0)<1e-25)  ) {break;}
else {res0=sum;}
        r++;}
    //sum = 1.0;
return(sum*K);
}*/

double corr_pois(double rho,double mi,double mj)
{
    //if( (rho>(1.0-1e-6)) &&  rho<=1.0){return(1.0);}
    //if(fabs(rho)<1e-10){return(0.0);}
    //else{
int r=0; double res0=0.0,sum=0.0;
double rho2=rho*rho;
double ki=mi/(1-rho2);
double kj=mj/(1-rho2);
double K=rho2*(1-rho2)/sqrt(mi*mj);
while(r<10000){
  sum=sum+ exp( log(igam(double (r+1),ki))+log(igam(double (r+1),kj)));
if((fabs(sum-res0)<1e-32)  ) {break;}
else {res0=sum;}
        r++;}
return(sum*K);
        
    //}
}

double dNnorm(double dat1,double dat2,double s1,
              double s2,double s12)
{
    //x1: variable 1
    //x2: variable 2
    //s1: variance of var 1
    //s2: variance of var 2
    //s12=s21: covariance of x1,x2
    //mu1 mean of var 1
    //mu2 mean of var 2
    
    double rho = s12/(sqrt(s1)*sqrt(s2));
    double K = 1/(2*M_PI*sqrt(s1)*sqrt(s2)*sqrt(1-pow(rho,2)));
    double z = pow(dat1,2)/s1-2*rho*(dat1)*(dat2)/(sqrt(s1)*sqrt(s2))+pow(dat2,2)/s2;
    //printf("z: %f, K: %f\n",z,K);
    double pdf = K*exp(-z/(2*(1-pow(rho,2))));
    return(pdf);
}




/******* some marginals (log)pdf  *****************/



double one_log_SkewGauss(double z,double m, double vari, double skew)
{
  double  res;
  double skew2  = pow(skew,2);
  double vari2  = pow(vari,1);
  double q=z-m;
    res=log(2.0)-0.5*log(skew2+vari2)+dnorm(q/(sqrt(skew2+vari2)),0,1,1)+pnorm(sqrt(skew2)*q/(sqrt(vari2)*sqrt(skew2+vari2)),0,1,0,1);
 return(res);
 //   return(0.5);
}



//https://github.com/SurajGupta/r-source/blob/master/src/nmath/pnorm.c



double pnorm(double x, double mu, double sigma, int lower_tail, int log_p)
{
    double p, cp;

    /* Note: The structure of these checks has been carefully thought through.
     * For example, if x == mu and sigma == 0, we get the correct answer 1.
     */
#ifdef IEEE_754
    if(isnan(x) || isnan(mu) || isnan(sigma))
    return x + mu + sigma;
#endif
    if(!isfinite(x) && mu == x) return NAN;/* x-mu is NaN */
    if (sigma <= 0) {
        if(sigma < 0) {return(-1);}
    /* sigma = 0 : */
        return (x < mu) ? R_DT_0(lower_tail) : R_DT_1(lower_tail);
    }
    p = (x - mu) / sigma;
    if(!isfinite(p))
    return (x < mu) ?  R_DT_0(lower_tail) : R_DT_1(lower_tail);
    x = p;

    pnorm_both(x, &p, &cp, (lower_tail ? 0 : 1), log_p);

    return(lower_tail ? p : cp);
}

#define SIXTEN    16 /* Cutoff allowing exact "*" and "/" */
#define M_SQRT_32     5.656854249492381

void pnorm_both(double x, double *cum, double *ccum, int i_tail, int log_p)
{
/* i_tail in {0,1,2} means: "lower", "upper", or "both" :
   if(lower) return  *cum := P[X <= x]
   if(upper) return *ccum := P[X >  x] = 1 - P[X <= x]
*/
    double a[5] = {
    2.2352520354606839287,
    161.02823106855587881,
    1067.6894854603709582,
    18154.981253343561249,
    0.065682337918207449113
    };
    double b[4] = {
    47.20258190468824187,
    976.09855173777669322,
    10260.932208618978205,
    45507.789335026729956
    };
    double c[9] = {
    0.39894151208813466764,
    8.8831497943883759412,
    93.506656132177855979,
    597.27027639480026226,
    2494.5375852903726711,
    6848.1904505362823326,
    11602.651437647350124,
    9842.7148383839780218,
    1.0765576773720192317e-8
    };
    double d[8] = {
    22.266688044328115691,
    235.38790178262499861,
    1519.377599407554805,
    6485.558298266760755,
    18615.571640885098091,
    34900.952721145977266,
    38912.003286093271411,
    19685.429676859990727
    };
    double p[6] = {
    0.21589853405795699,
    0.1274011611602473639,
    0.022235277870649807,
    0.001421619193227893466,
    2.9112874951168792e-5,
    0.02307344176494017303
    };
    double q[5] = {
    1.28426009614491121,
    0.468238212480865118,
    0.0659881378689285515,
    0.00378239633202758244,
    7.29751555083966205e-5
    };

    double xden, xnum, temp, del, eps, xsq, y;
#ifdef NO_DENORMS
    double min = DBL_MIN;
#endif
    int i, lower, upper;

#ifdef IEEE_754
    if(isnan(x)) { *cum = *ccum = x; return; }
#endif

    /* Consider changing these : */
    eps = DBL_EPSILON * 0.5;

    /* i_tail in {0,1,2} =^= {lower, upper, both} */
    lower = i_tail != 1;
    upper = i_tail != 0;

    y = fabs(x);
    if (y <= 0.67448975) { /* qnorm(3/4) = .6744.... -- earlier had 0.66291 */
    if (y > eps) {
        xsq = x * x;
        xnum = a[4] * xsq;
        xden = xsq;
        for (i = 0; i < 3; ++i) {
        xnum = (xnum + a[i]) * xsq;
        xden = (xden + b[i]) * xsq;
        }
    } else xnum = xden = 0.0;

    temp = x * (xnum + a[3]) / (xden + b[3]);
    if(lower)  *cum = 0.5 + temp;
    if(upper) *ccum = 0.5 - temp;
    if(log_p) {
        if(lower)  *cum = log(*cum);
        if(upper) *ccum = log(*ccum);
    }
    }
    else if (y <= M_SQRT_32) {

    /* Evaluate pnorm for 0.674.. = qnorm(3/4) < |x| <= sqrt(32) ~= 5.657 */

    xnum = c[8] * y;
    xden = y;
    for (i = 0; i < 7; ++i) {
        xnum = (xnum + c[i]) * y;
        xden = (xden + d[i]) * y;
    }
    temp = (xnum + c[7]) / (xden + d[7]);

#define do_del(X)                            \
    xsq = trunc(X * SIXTEN) / SIXTEN;                \
    del = (X - xsq) * (X + xsq);                    \
    if(log_p) {                            \
        *cum = (-xsq * xsq * 0.5) + (-del * 0.5) + log(temp);    \
        if((lower && x > 0.) || (upper && x <= 0.))            \
          *ccum = log1p(-exp(-xsq * xsq * 0.5) *        \
                exp(-del * 0.5) * temp);        \
    }                                \
    else {                                \
        *cum = exp(-xsq * xsq * 0.5) * exp(-del * 0.5) * temp;    \
        *ccum = 1.0 - *cum;                        \
    }

#define swap_tail                        \
    if (x > 0.) {/* swap  ccum <--> cum */            \
        temp = *cum; if(lower) *cum = *ccum; *ccum = temp;    \
    }

    do_del(y);
    swap_tail;
    }

/* else      |x| > sqrt(32) = 5.657 :
 * the next two case differentiations were really for lower=T, log=F
 * Particularly     *not*    for  log_p !
 * Cody had (-37.5193 < x  &&  x < 8.2924) ; R originally had y < 50
 *
 * Note that we do want symmetry(0), lower/upper -> hence use y
 */
    else if((log_p && y < 1e170) /* avoid underflow below */
    /*  ^^^^^ MM FIXME: can speedup for log_p and much larger |x| !
     * Then, make use of  Abramowitz & Stegun, 26.2.13, something like
     xsq = x*x;
     if(xsq * DBL_EPSILON < 1.)
        del = (1. - (1. - 5./(xsq+6.)) / (xsq+4.)) / (xsq+2.);
     else
        del = 0.;
     *cum = -.5*xsq - M_LN_SQRT_2PI - log(x) + log1p(-del);
     *ccum = log1p(-exp(*cum)); /.* ~ log(1) = 0 *./
      swap_tail;
     [Yes, but xsq might be infinite.]
    */
        || (lower && -37.5193 < x  &&  x < 8.2924)
        || (upper && -8.2924  < x  &&  x < 37.5193)
    ) {

    /* Evaluate pnorm for x in (-37.5, -5.657) union (5.657, 37.5) */
    xsq = 1.0 / (x * x); /* (1./x)*(1./x) might be better */
    xnum = p[5] * xsq;
    xden = xsq;
    for (i = 0; i < 4; ++i) {
        xnum = (xnum + p[i]) * xsq;
        xden = (xden + q[i]) * xsq;
    }
    temp = xsq * (xnum + p[4]) / (xden + q[4]);
    temp = (M_1_SQRT_2PI - temp) / y;

    do_del(x);
    swap_tail;
    } else { /* large x such that probs are 0 or 1 */
        if(x > 0) {    *cum = 1.0; *ccum = 0.0;    }
        else {            *cum = 0.0; *ccum = 1.0;    }
    }


#ifdef NO_DENORMS
    /* do not return "denormalized" -- we do in R */
    if(log_p) {
    if(*cum > -min)     *cum = -0.;
    if(*ccum > -min)*ccum = -0.;
    }
    else {
    if(*cum < min)     *cum = 0.;
    if(*ccum < min)    *ccum = 0.;
    }
#endif
    return;
}



double one_log_tukeyh(double z,double m, double sill, double tail)
{
  double q = (z - m)/sqrt(sill);
  double x = inverse_lamb(q,tail);
  double extra = 1/( (1 + LambertW(tail*q*q)));
  double dens = log(dnorm(x,0,1,0)* x  * extra/(q*sqrt(sill)));
return(dens);
}

double one_log_tukeyhh(double z,double m, double sill, double h1,double h2)
{
  double  res;
 if(z>=m){
    res=one_log_tukeyh(z,m,sill,h2);
          }
  if(z<m){
    res=one_log_tukeyh(z,m,sill,h1);
         }
  return(res);
}
double one_log_two_pieceGauss(double z,double m, double sill, double eta)
{
  double  res;
  double y=(z-m)/sqrt(sill);
 if(y>=0) res=dnorm(y/(1-eta),0,1,1);
 if(y<0)  res=dnorm(y/(1+eta),0,1,1);
  return(res-log(sqrt(sill)));
}
double one_log_two_pieceTukey(double z,double m, double sill,double tail, double eta)
{
  double  res;
  double y=(z-m)/sqrt(sill);
 if(y>=0)res=one_log_tukeyh(y/(1-eta),0,1,tail);
 if(y<0) res=one_log_tukeyh(y/(1+eta),0,1,tail);
  return(res-log(sqrt(sill)));
}
double one_log_two_pieceT(double z,double m, double sill, double df, double eta)
{
  double  res;
  double y=(z-m)/sqrt(sill);
 if(y>=0) res=one_log_T(y/(1-eta),0,1,df);
 if(y<0)  res=one_log_T(y/(1+eta),0,1,df);
  return(res-log(sqrt(sill)));
}
double one_log_T(double z,double m, double sill, double df)
{
  double  res;
  double q=(z-m)/sqrt(sill);
    res=lgamma(0.5*(df+1))-(0.5*(df+1))*log(1+q*q/df)-log(sqrt(M_PI*df))-lgamma(df/2)-0.5*log(sill);
  return(res);
}


double one_log_gamma(double z,double m, double shape)
{
  double  res;
  res=(shape/2)*log(shape/(2*exp(m)))+(shape/2-1)*log(z)-(shape/(2*exp(m)))*z-lgamma(shape/2);
  return(res);
}



double one_log_weibull(double z,double m, double shape)
{
  double  res;
  double c1=exp(m)/(tgamma(1+1/shape));
  res=log(shape)-shape*log(c1)+(shape-1)*log(z)-pow(z/c1,shape);
  return(res);
}


double one_log_loggaussian(double z,double m, double sill)
{
  double  res;
  double q=z*exp(sill/2);
  res=-0.5*pow((log(q)-m),2)/sill-log(q)-log(sqrt(sill))-0.5*log(2*M_PI)+sill/2;
  return(res);
}





int R_nonint(double x)
{
    if(x != (int)x) {
        return 0;
    }else {return 1;}
}

//#define give_log log_p

//#define R_D_exp(x)      (log_p  ?  (x)   : ::exp(x))    /* exp(x) */
//#define R_D_negInonint(x) (x < 0. || R_nonint(x))

double R_D_negInonint(double x)
{
    if(x != (int)x) {
        return 0;
    }else {return 1;}
}

#define R_D_nonint_check(x)                \
if(R_nonint(x)) {                    \
 return 0;                    \
}

double R_D__0(int give_log)
{
    if(give_log){return(-INFINITY);}else {return(0.0);}
}

double R_D__1(int give_log)
{
    if(give_log){return(0.0);}else {return(1.0);}
}


double R_DT_1(int lower_tail)
{
    if(lower_tail){return(R_D__1(lower_tail));}else {return(R_D__0(lower_tail));}
}

double R_DT_0(int lower_tail)
{
    if(lower_tail){return(R_D__0(lower_tail));}else {return(R_D__1(lower_tail));}
}

double R_D_exp(double x,int give_log)
{
    if(give_log) {return x;}else {return exp(x);}
}
//#define R_D_fexp(f,x)     (give_log ? -0.5*log(f)+(x) : exp(x)/sqrt(f))

double R_D_fexp(double f,double x,int give_log)
{
    if(give_log) {return -0.5*log(f)+(x);}else {return exp(x)/sqrt(f);}
}

double dbinom_raw(double x, double n, double p, double q, int give_log)
{
    if (p == 0) return((x == 0) ? R_D__1(give_log) : R_D__0(give_log));
    if (q == 0) return((x == n) ? R_D__1(give_log) : R_D__0(give_log));

    double lc;
    if (x == 0) {
    if(n == 0) return R_D__1(give_log);
    lc = (p < 0.1) ? -bd0(n,n*q) - n*p : n*log(q);
    return( R_D_exp(lc,give_log) );
    }
    if (x == n) {
    lc = (q < 0.1) ? -bd0(n,n*p) - n*q : n*log(p);
    return( R_D_exp(lc,give_log) );
    }
    if (x < 0 || x > n) return( R_D__0(give_log) );

    /* n*p or n*q can underflow to zero if n and p or q are small.  This
       used to occur in dbeta, and gives NaN as from R 2.3.0.  */
    lc = stirlerr(n) - stirlerr(x) - stirlerr(n-x) - bd0(x,n*p) - bd0(n-x,n*q);

    /* f = (M_2PI*x*(n-x))/n; could overflow or underflow */
    /* Upto R 2.7.1:
     * lf = log(M_2PI) + log(x) + log(n-x) - log(n);
     * -- following is much better for  x << n : */
    double lf = M_LN_2PI + log(x) + log1p(- x/n);

    return R_D_exp(lc - 0.5*lf,give_log);
}

double dbinom(double x, double n, double p, int give_log)
{
#ifdef IEEE_754
    /* NaNs propagated correctly */
    if (isnan(x) || isnan(n) || isnan(p)) return x + n + p;
#endif

    if (p < 0 || p > 1 || (n<0.0|| R_nonint(n)))
    NAN;
    //R_D_nonint_check(x);
    if (x < 0 || !isfinite(x)) return R_D__0(give_log);

    n = (int)(n);
    x = (int)(x);

    return dbinom_raw(x, n, p, 1-p, give_log);
}


double  bd0(double x, double np)
{
    double ej, s, s1, v;
    int j;

    if(!isfinite(x) || !isfinite(np) || np == 0.0) return(NAN);

    if (fabs(x-np) < 0.1*(x+np)) {
    v = (x-np)/(x+np);  // might underflow to 0
    s = (x-np)*v;/* s using v -- change by MM */
    if(fabs(s) < DBL_MIN) return s;
    ej = 2*x*v;
    v = v*v;
    for (j = 1; j < 1000; j++) { /* Taylor series; 1000: no infinite loop
                    as |v| < .1,  v^2000 is "zero" */
        ej *= v;// = v^(2j+1)
        s1 = s+ej/((j<<1)+1);
        if (s1 == s) /* last term was effectively 0 */
        return s1 ;
        s = s1;
    }
    }
    /* else:  | x - np |  is not too small */
    return(x*log(x/np)+np-x);
}



double  stirlerr(double n)
{

#define S0 0.083333333333333333333       /* 1/12 */
#define S1 0.00277777777777777777778     /* 1/360 */
#define S2 0.00079365079365079365079365  /* 1/1260 */
#define S3 0.000595238095238095238095238 /* 1/1680 */
#define S4 0.0008417508417508417508417508/* 1/1188 */

/*
  error for 0, 0.5, 1.0, 1.5, ..., 14.5, 15.0.
*/
    double sferr_halves[31] = {
    0.0, /* n=0 - wrong, place holder only */
    0.1534264097200273452913848,  /* 0.5 */
    0.0810614667953272582196702,  /* 1.0 */
    0.0548141210519176538961390,  /* 1.5 */
    0.0413406959554092940938221,  /* 2.0 */
    0.03316287351993628748511048, /* 2.5 */
    0.02767792568499833914878929, /* 3.0 */
    0.02374616365629749597132920, /* 3.5 */
    0.02079067210376509311152277, /* 4.0 */
    0.01848845053267318523077934, /* 4.5 */
    0.01664469118982119216319487, /* 5.0 */
    0.01513497322191737887351255, /* 5.5 */
    0.01387612882307074799874573, /* 6.0 */
    0.01281046524292022692424986, /* 6.5 */
    0.01189670994589177009505572, /* 7.0 */
    0.01110455975820691732662991, /* 7.5 */
    0.010411265261972096497478567, /* 8.0 */
    0.009799416126158803298389475, /* 8.5 */
    0.009255462182712732917728637, /* 9.0 */
    0.008768700134139385462952823, /* 9.5 */
    0.008330563433362871256469318, /* 10.0 */
    0.007934114564314020547248100, /* 10.5 */
    0.007573675487951840794972024, /* 11.0 */
    0.007244554301320383179543912, /* 11.5 */
    0.006942840107209529865664152, /* 12.0 */
    0.006665247032707682442354394, /* 12.5 */
    0.006408994188004207068439631, /* 13.0 */
    0.006171712263039457647532867, /* 13.5 */
    0.005951370112758847735624416, /* 14.0 */
    0.005746216513010115682023589, /* 14.5 */
    0.005554733551962801371038690  /* 15.0 */
    };
    double nn;

    if (n <= 15.0) {
    nn = n + n;
    if (nn == (int)nn) return(sferr_halves[(int)nn]);
    return(lgamma(n + 1.) - (n + 0.5)*log(n) + n - M_LN_SQRT_2PI);
    }

    nn = n*n;
    if (n>500) return((S0-S1/nn)/n);
    if (n> 80) return((S0-(S1-S2/nn)/nn)/n);
    if (n> 35) return((S0-(S1-(S2-S3/nn)/nn)/nn)/n);
    /* 15 < n <= 35 : */
    return((S0-(S1-(S2-(S3-S4/nn)/nn)/nn)/nn)/n);
}


double one_log_negbinom_marg(int u,int N, double p)
{
  double  res;
    res=lgamma(double(u+N))-(lgamma(double(u+1))+lgamma(double (N)))+N*log(double (p) )+u*log(double(1-p));
  return(res);
}


double one_log_sas(double z,double m, double skew, double tail,  double vari)
{
  double  res,b1,Z1;
  double q=(z-m)/(sqrt(vari));
    b1=tail*asinh(q)-skew;
    Z1=sinh(b1);
    res=-0.5*log(pow(q,2)+1)-0.5*log(2*M_PI*vari)+log(cosh(b1))+log(tail)-Z1*Z1/2;
  return(res);
}



double biv_beta(double rho,double zi,double zj,double ai,double aj,double shape1,double shape2,double min,double max)
{
  double ki=0.0,kj=0.0,p1=0.0,p2=0.0,rho2=0.0,res=0.0,p3;
  double dd=max-min;
  zi=(zi-min)/dd;zj=(zj-min)/dd;
 ki=1-zi; kj=1-zj;
   double aa=0.5*(shape1+shape2);
if(rho) {
  rho2=rho*rho;

    p1=pow(zi*zj,shape1/2-1)*pow(ki*kj,shape2/2-1);
    p3=exp(2*lgamma(aa)-(2*lgamma(shape1/2)+2*lgamma(shape2/2)-aa*log(1-rho2)));
    p2= appellF4(aa,aa,shape1/2,shape2/2,rho2*zi*zj,rho2*ki*kj);
  res=p1*p2*p3;
} else  {p1=pow(zi,shape1/2-1)*pow(ki,shape2/2-1)*exp(lgamma(aa)-lgamma(shape1/2)-lgamma(shape2/2));
         p2=pow(zj,shape1/2-1)*pow(kj,shape2/2-1)*exp(lgamma(aa)-lgamma(shape1/2)-lgamma(shape2/2));
         res=p1*p2;}
return(res/pow(dd,2));
}

double one_log_beta(double z, double shape1,double shape2,double min,double  max)
{
  double  res;
  double q=(z-min)/(max-min);
  res=(shape1/2-1)*log(q)+(shape2/2-1)*log(1-q)+lgamma(0.5*(shape1+shape2))-lgamma(shape1/2)-lgamma(shape2/2)-log(max-min);
  return(res);
}


double one_log_kumma(double z,double m, double shape1,double shape2,double min,double  max)
{
  double  res,k;
  double q=(z-min)/(max-min);k=1-pow(q,shape2);
  res=log(shape1)+log(shape2)+(shape2-1)*log(q)+(shape1-1)*log(k)-log(max-min);
  return(res);
}


double biv_Kumara2(double rho,double zi,double zj,double ai,double aj,double shape1,double shape2,double min,double  max)
{
  double xx=0.0,yy=0.0,ki=0.0,kj=0.0,p1=0.0,p2=0.0,rho2=0.0,res=0.0;
  double mi=1/(1+exp(-ai)), mj=1/(1+exp(-aj));
  double dd=(max-min), shapei=log(0.5)/log(1-pow(mi,shape2)),shapej=log(0.5)/log(1-pow(mj,shape2));
  zi=(zi-min)/dd;zj=(zj-min)/dd;

 ki=1-pow(zi,shape2); kj=1-pow(zj,shape2);
if(rho) {
  rho2=rho*rho;
  xx=rho2*pow(ki,shapei)*pow(kj,shapej);
  yy=rho2*(1-pow(ki,shapei))*(1-pow(kj,shapej));
  p1=pow(sqrt(shapei*shapej)*shape2,2)*pow(zi*zj,shape2-1)*pow(ki,shapei-1)*pow(kj,shapej-1)*pow(1-rho2,2);
  p2= appellF4(2,2,1,1,xx,yy);
  res=p1*p2;}
else  {p1=shapei*shape2*pow(zi,shape2-1)*pow(ki,shapei-1);
       p2=shapej*shape2*pow(zj,shape2-1)*pow(kj,shapej-1);
         res=p1*p2;}
return(res/pow(dd,2));
}

double one_log_kumma2(double z,double m, double shape1,double shape2,double min,double  max)
{
  double  res,k;
  double q=(z-min)/(max-min);k=1-pow(q,shape2);
  double m1=1/(1+exp(-m));
  double shapei=log(0.5)/log(1-pow(m1,shape2));
  res=log(shapei)+log(shape2)+(shape2-1)*log(q)+(shapei-1)*log(k)-log(max-min);
  return(res);
}




//https://github.com/wch/r-source/blob/d22ee2fc0dc8142b23eed9f46edf76ea9d3ca69a/src/nmath/dpois.c

double dpois_raw(double x, double lambda, int give_log)
{
    if (lambda == 0) return( (x == 0) ? R_D__1(give_log) : R_D__0(give_log) );
    if (!isfinite(lambda)) return R_D__0(give_log); // including for the case where  x = lambda = +Inf
    if (x < 0) return( R_D__0(give_log) );
    if (x <= lambda * DBL_MIN) return(R_D_exp(-lambda,give_log) );
    if (lambda < x * DBL_MIN) {
    if (!isfinite(x)) // lambda < x = +Inf
        return R_D__0(give_log);
    // else
    return(R_D_exp(-lambda + x*log(lambda) -lgamma(x+1),give_log)  );
    }
    return(R_D_fexp( M_2PI*x, -stirlerr(x)-bd0(x,lambda) ,give_log));
}

double dpois(double x, double lambda, int give_log)
{

#ifdef IEEE_754
    if(isnan(x) || isnan(lambda))
        return x + lambda;
#endif

    if (lambda < 0) return(NAN);
    //R_D_nonint_check(x);
    if (x < 0 || !isfinite(x))
    return R_D__0(give_log);

    x = nearbyint(x);
 

    return( dpois_raw(x,lambda,give_log) );
}



double corr_skewt(double corr,double df,double skew)
{
if(fabs(corr)<1e-32){return(0.0);}
    else{
double w,corr1,skew2,CorSkew,nu,l,y;
skew2=skew*skew;
nu=df;
l=df/2;
w=sqrt(1-skew2);
y=corr;
if(df<170){
CorSkew=(2*skew2/(M_PI*w*w+skew2*(M_PI-2)))*(sqrt(1-y*y)+y*asin(y)-1)+w*w*y/(w*w+skew2*(1-2/M_PI)) ;
corr1=(M_PI*(nu-2)*pow(tgamma((nu-1)/2),2)/(2*(M_PI*pow(tgamma(nu/2),2)-skew2*(nu-2)*pow(tgamma((nu-1)/2),2))))*
(hypergeo(0.5,0.5,l,y*y)*((1-2*skew2/M_PI)*CorSkew+2*skew2/M_PI)-2*skew2/M_PI);}
else {corr1=corr;}
return(corr1);
}
}

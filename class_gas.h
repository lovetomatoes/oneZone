#include "read_aTree.h"

using namespace std; //std::ofstream

class GAS
{
    public:
        //******************************************
        void add_Nt(int);
        void get_para();
        void a_react_sol(bool);
        void react_sol(bool);
        void ana_e();
        void ana_H2();

        void setMerger();
        void timescales();
        void freefall();
        void T_sol();


        // member function definition -- constructor
        GAS(double *frac0, int MergerModel, double J21, double Tbb, string treefile, bool spec, bool Ma_turn, int bsm);
        ~GAS();
    //private:
        int N, Nt;
        int i_LE; int MerMod;
        int nMer, iMP;
        double z0, z, z_col;
        double t0, t1, Dt, t_act, t_ff0, t_delay;
        double dMdt, dEdt;

        double T_K0, nH0, rho0, P0, e0, S0;
        double rhoc_DM;
        double J_LW, Tb;
        double *y0, *y1, *ys,  *k, *rf;
        double yequi, ypd, ycd, ycool, ycool_crit;
        double Jc_pd, Jc_cd, Jc_pred, Jc_pred_max;
        double delta_H2_compr, delta_H2_compr_min;
        double fMa_H2crit, gMa_H2crit, n_H2crit, z_H2crit;
        double a, b, c, d, e;
        double r_h, r_c, r_cH, r_cH2;
        double t_ff, t_h, t_c, t_rcb, t_chem, t_ion;
        int evol_stage, i_bsm;
        bool intoequi;
        double n_iso, Mh_prev, t_prev, dt_iso;
        // evol_stage: label density evolve: MerMod==0 直接freefall; MerMod==1, evol_stage=1 等熵,2 Eli saturated core,3 等温,4 freefall
        double Gamma_mer, Gamma_mer_th, Gamma_mer_k;
        double cs, MJ, RJ, MJ_eff, Mgas, Mcore, M_BE, Mg_intg;
        double M_major, M_minor, MJ0, Ma, f_Ma, g_Ma, v_tur2, reduction, ncore, nb200;
        double de_tot, dM_tot;
        double v_inf2, v_bsm;
        bool inMer, inDelay, not_adb, Ma_on;
        double Mh;
        MainProgenitor* MPs; //structure defined in read_aTree.h
        //HALO halo (1,1); must have initial parameters...
        ofstream file_ingas;
    private :
        int static const n_ra = 40;
        double* Ta, *ka;

};

const double fraction = 0.75; // fraction of merger heating turned into thermal energy
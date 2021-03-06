void read_spec(double* nub, double* fluxb_cont, double* fluxb_line, std::string fspec_cont, std::string fspec_line);
void read_sigma(double* nua, double** sigmaa, double* nuc, double* sigmac);
void linear(double* xa, double* ya, int m, double x, double& y);
void bilinear(double* x1a, double* x2a, double** ya, int m, int n, double x1, double x2, double& y);
void Hm_CrossSec(double& sigma, double nu_eV, double* nuc, double* sigmac);
void H2p_bf_CrossSec(double& sigma, double nu, double T_K, double* Ta, double* nua, double** sigmaa);
void kpd_Hm_H2p(double T_rad, double& k_Hm, double& k_H2p, bool spec);
void kra(double& y, double T, int n_ra, double* Ta, double* ka);
void read_k(int n_ra, double* Ta, double* ka);
#ifndef SYSTEM_H
#define SYSTEM_H

#include <map>
#include <string>

class System
{
public:
	System(double L, double C, double R, double M, double S0, double S2, double x0, double y0):
		L_{L}, C_{C}, R_{R}, M_{M}, S0_{S0}, S2_{S2}, x_{x0}, y_{y0}, t_{0.0}
	{}
	
	System(std::map<std::string, double> parameters):
		L_{parameters["L"]},
		C_{parameters["C"]},
		R_{parameters["R"]},
		M_{parameters["M"]},
		S0_{parameters["S0"]},
		S2_{parameters["S2"]},
		x_{parameters["x0"]},
		y_{parameters["y0"]},
		t_{0.0}
	{}
	
	double L() const {return L_;}
	double C() const {return C_;}
	double R() const {return R_;}
	double M() const {return M_;}
	double S0() const {return S0_;}
	double S2() const {return S2_;}
	double x() const {return x_;}
	double y() const {return y_;}
    double t() const {return t_;}
	
	void make_step(double dt);
	
private:
	double L_, C_, R_, M_, S0_, S2_;
    double x_, y_, t_;
};

#endif  // SYSTEM_H

#ifndef DYNSYSTEM_H
#define DYNSYSTEM_H

#include <map>

class DynSystem
{
public:
    DynSystem(std::map<std::string, double> params);

    double t() const {return t_;}
    double u() const {return u_;}
    double i() const {return i_;}

    void step(double dt);
private:
    double L, R, C, M, g0, g2;
    double t_, u_, i_;
};

#endif // DYNSYSTEM_H

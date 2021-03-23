#include "dynsystem.h"

#include <iostream>

DynSystem::DynSystem(std::map<std::string, double> params)
try:
    L{params.at("L")}, R{params.at("R")}, C{params.at("C")},
    M{params.at("M")}, g0{params.at("g0")}, g2{params.at("g2")},
    t_{0.0}, u_{params.at("U0")}, i_{params.at("I0")}
{}
catch(const std::out_of_range& err)
{
    std::cerr << "DynSystem constructor: key not found\n"
              << "needed keys: L, R, C, M, g0, g2, U0, I0\n";
    throw;
}

void DynSystem::step(double dt)
{
    double u_new = u_ + dt * i_ / C;
    double i_new = i_ + dt * C * (-u_/L/C - 1.0/C*(R/L-M/L/C*(g0+g2*u_*u_)));

    u_ = u_new;
    i_ = i_new;
}

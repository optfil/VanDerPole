#include "system.h"

void System::make_step(double dt)
{
    y_ += (-1.0/L_/C_ * (R_*C_ - (M_*S0_-M_*S2_*x_*x_))*y_ - 1.0/L_/C_ * x_) * dt;
    x_ += y_* dt;
    t_ += dt;
}

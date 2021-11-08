#include "system.h"

void System::make_step(double dt)
{
	double dx = y_ * dt;
	double dy = (-1.0/L_/C_ * (R_*C_ - (M_*S0_-M_*S2_*x_*x_))*y_ - 1.0/L_/C_ * x_) * dt;
	
	t_ += dt;
	x_ += dx;
	y_ += dy;
}
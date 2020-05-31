#include <iostream>
using namespace std;



double ALPHA(double t, double v){
    return v-9.8*t;
    
}

double* rungekutta4(double dt, double t, double f, double v){
    double k1 = ALPHA(t, v)*dt;
    double k2 = ALPHA(t + dt/2, v)*dt;
    double k3 = ALPHA(t + dt/2, v)*dt;
    double k4 = ALPHA(t + dt, v)*dt;
    double* pos= new double[2];
    pos[0] = t + dt; 
    pos[1] = f + (k1 + 2*k2 + 2*k3 + k4)/6;
    return pos;
    
}
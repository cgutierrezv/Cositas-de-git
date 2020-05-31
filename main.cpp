#include <iostream>
#include "funciones.h"
#include <fstream>
using namespace std;


int main(){
    
    fstream outFile1;
    outFile1.open ("datos.txt", ios::out | ios::trunc);
    
    double dt = 0.01; 
    double t = 0; 
    double v = 20; 
    double f0 = 8.5;
    int n=40;
    cout<<"Cuantas iteraciones? ";cin>>n;
    double*  f = new double[2];
    // Condiciones iniciales
    f[0] = 0; f[1] = f0;

    for(int i=0; i < n ;i++){
        cout << f[0] << ',' << f[1] << endl;
        outFile1<<f[0]<<","<<f[1]<<endl;
        f0 = f[1];
        t = f[0];
        f = rungekutta4(dt,t, f0, v);
    }
    outFile1.close();
    cout<<"Datos guardados con exito en: datos.txt"<<endl;
    return 0;
}

#include <iostream>
using namespace std;

int factorial(int n){

	if (n>1){return n*factorial(n-1);}
	else return 1;
}

int main(){
	
	int n;
	cout << "Este archivo calcula el factorial, ingrese un numero entero: " <<endl;
	cin >> n;
	cout << "El factorial de "<< n<< " es:"<< factorial(n)<< "\n";
	return 0;	
}




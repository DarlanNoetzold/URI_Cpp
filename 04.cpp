#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;

main(){
	int x,y;
	cout << "Digite um numero: ";
	cin >> x;
	cout << "Digite outro numero: ";
	cin >> y;
	
	int z = pow(x,y);
	cout << "A potencia de " << y << " na base "<< x << " e igual a " << z;
	
	
}

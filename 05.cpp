#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;

main(){
	int num1,num2;
	cout << "Digite um numero: ";
	cin >> num1;
	cout << "Digite outro numero: ";
	cin >> num2;

	float div = float(num1)/num2;
	float res = num1%num2;
	cout << "A divisao de " << num1 << " por "<< num2 << " e igual a " << div << "\nE o seu resto e igual a "<< res;


}

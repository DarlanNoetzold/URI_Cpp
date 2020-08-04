#include<iostream>
using namespace std;

main(){
	
	float salAtual, reaj, novSal;

	cout << "Digite o salario atual : ";
   	cin >> salAtual;
   
   	cout << "Digite o reajuste em porcentagem(se for negativo usar -): ";
   	cin >> reaj;
   
	novSal = salAtual + (salAtual * (reaj/100));
	
	cout << "O novo salario tem o valor de:" << novSal;
		
}

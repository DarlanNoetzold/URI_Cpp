#include<iostream>
using namespace std;

main(){
	float salFix, valVend, salFin;
	
	cout << "Digite seu salario fixo: ";
	cin >> salFix;
	
	cout << "Digite o valor de suas vendas: ";
	cin >> valVend;
	
	salFin = salFix + (valVend * 4/100);
	
	cout << "O seu salario final e igual a: " << salFin;
		
}

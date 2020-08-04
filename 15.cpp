#include<iostream>
using namespace std;

main(){
	float salMin, quantKW, valPag, valDesc;
	
	cout << "Digite o valor do salario minimo: ";
	cin >> salMin;
	
	cout <<"Digite a quantidade de quilowatts gasta pela residencia: ";
	cin >> quantKW;
	
	valPag = salMin * quantKW * 1/700;
	
	valDesc = valPag - (valPag * 10/100);
	
	cout << "O valor a ser pago e: " << valPag << "R$, Com o desconto: "<< valDesc << "R$";
	
}

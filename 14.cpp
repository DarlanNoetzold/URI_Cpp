#include<iostream>
using namespace std;

main(){
	float horasTr, valHor, percDesc, salBruto, salLiq, totDesc;
	
	cout << "Digite as horas trabalhadas: ";
	cin >> horasTr;
	
	cout << "Digite o valor(R$) da hora trabalhada: ";
	cin >> valHor;
	
	cout << "Digite o percentual(%) de desconto: ";
	cin >> percDesc;
	
	salBruto = horasTr * valHor;
	totDesc = salBruto * percDesc/100;
	salLiq = salBruto - totDesc;
	
	cout << "Seu salario Liquido e igual a: " << salLiq << "R$,\nsendo que seu salario Bruto foi: " << salBruto << "R$,\ncom um desconto de: " << totDesc << "R$."; 
		
}

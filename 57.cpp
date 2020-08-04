#include <iostream>

using namespace std;

int main(){
	double valPag, valK;
	int tipo;
	cout<<"Digite o tipo de cliente: 1 (Residência) 2 (Comércio) 3 (Indústria)";
	cin>>tipo;
	
	cout<<"Digite o valor gasto em KW/H: ";
	cin>>valK;
	
	if(tipo == 1){
		valPag = valK * 0.6;
	}else if(tipo == 2){
		valPag = valK * 0.48;
	}else if(tipo == 3){
		valPag = valK * 1.29;
	}else{
		cout<<"Valor Invalido";
	}
	
	cout<<"Valor gasto: R$"<<valPag;
}

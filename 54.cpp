#include <iostream>

using namespace std;

int main(){
	double leitLuz, valLuz;
	
	cout<<"Digite a leitura da luz em KwH: ";
	cin>>leitLuz;
	
	if(leitLuz <=70){
		valLuz = leitLuz * 0.09;
	}else if(leitLuz <= 150){
		valLuz = leitLuz * 0.2;
	}else if(leitLuz <= 200){
		valLuz = leitLuz * 0.23;
	}else{
		valLuz = leitLuz * 0.26;
	}
	
	cout<<"Valor a pagar igua a R$"<<valLuz;
}





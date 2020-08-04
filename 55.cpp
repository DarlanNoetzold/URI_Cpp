#include <iostream>

using namespace std;

int main(){
	int mesRec, anoRec, mesVenc, anoVenc;
	string tipo;
	
	cout<<"Digite o ano da recarga: ";
	cin>>anoRec;
	cout<<"Digite o mes da recarga: ";
	cin>>mesRec;
	cout<<"Digite o tipo: ";
	cin>>tipo;
	
	if(tipo == "MO"){
		mesVenc = mesRec + 5;
		if(mesVenc > 12){
			mesVenc -= 12;
			anoVenc = anoRec +1;
		} 
	}else if(tipo == "MT"){
		mesVenc = mesRec + 10;
		if(mesVenc > 12){
			mesVenc -= 12;
			anoVenc = anoRec +1;
		}
	}else if(tipo == "PQ"){
		mesVenc = mesRec + 8;
		if(mesVenc > 12){
			mesVenc -= 12;
			anoVenc = anoRec +1;
		}
	}else if(tipo == "ML"){
		mesVenc = mesRec + 12;
		if(mesVenc > 12){
			mesVenc -= 12;
			anoVenc = anoRec +1;
		}
	}else{
		cout<<"Opcao invalida.";
	}
	
	cout <<"A data de vencimento e: "<<mesVenc<<"/"<<anoVenc;
	
	
}

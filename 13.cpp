#include<iostream>
using namespace std;

main(){
	float novEng, novEm, peso;
	int i;
	cout << "Digite seu peso: ";
	cin >> peso;
	
	cout << "Voce engordou(1) ou emagreceu(0)? ";
	cin >> i;
	
	if(i==0){
		novEm = peso - (peso * 20/100);
		cout << "Voce pesa: " << novEm << "Kg";
	}else{
		novEng = peso + (peso * 15/100);
		cout << "Voce pesa: " << novEng << "Kg";
		
	}
		
}

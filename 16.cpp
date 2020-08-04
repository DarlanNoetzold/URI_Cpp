#include<iostream>

using namespace std;

main(){
	int val,cCem=0,cCinquenta=0,cVinte=0,cDez=0,cCinco=0,cDois=0,cUm=0;

	cout << "Digite o valor a ser sacado: ";
	cin >> val;

	while (val > 0){

		if(val >= 100){
			val -= 100;
			cCem++;
		}else if(val >=50 && val < 100){
			val -= 50;
			cCinquenta++;
		}else if(val >=20 && val < 50){
			val -= 20;
			cVinte++;
		}else if(val >=10 && val < 20){
			val -= 10;
			cDez++;
		}else if(val >=5 && val < 10){
			val -= 5;
			cCinco++;
		}else if(val >=2 && val < 5){
			val -= 2;
			cDois++;
		}else if(val >=1 && val < 2){
			val -= 1;
			cUm++;
		}
	}
	cout <<"Sera impresso: "<< cCem << " cedulas de 100, "<< cCinquenta << " cedulas de 50, "<< cVinte << " cedulas de 20,\n "<< cDez << " cedulas de 10, "<< cCinco << " cedulas de 5, "<< cDois << " cedulas de 2,\n "<< cUm << " cedulas de 1. ";

}

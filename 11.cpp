#include<iostream>
using namespace std;

main(){
	
	float dist, combGast, med;

	cout << "Digite a distancia percorrida em Km: ";
   	cin >> dist;
   
   	cout << "Digite o total de compstivel gasto em litro: ";
   	cin >> combGast;
   
	med = dist/combGast;
	
	cout << "O automovel faz em media "<< med << " L/Km ";
		
}

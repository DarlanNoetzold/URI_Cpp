#include<iostream>
using namespace std;

main(){
	float totEl, votNul, votBran, votVal;
	float porNul, porBranc, porVal;
	cout << "Digite o numero total de eleitores: ";
	cin >> totEl;
	
	cout << "Digite o numero de votos válidos: ";
	cin >>votVal;
	
	cout << "Digite o numero de votos nulos: ";
	cin >>votNul;
	
	cout << "Digite o numero de votos em branco: ";
	cin >>votBran;
	
	porNul = (votNul*100)/totEl;
	porBranc = (votBran*100)/totEl;
	porVal = (votVal*100)/totEl;
	
	cout <<"A cidade tem "<<porVal<<"% de votos válidos,\n "<<porBranc<<"% de votos em branco e "<<porNul<<"% de votos nulos.";
	
	
	
}

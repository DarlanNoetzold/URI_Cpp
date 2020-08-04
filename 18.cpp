#include<iostream>
using namespace std;

main(){
	float valFel, valCont;
	int valAnd, valCar;


	cout << "Digite o valor da conta: ";
	cin >> valCont;

	valAnd = valCont/3;
	valCar = valCont/3;
	valFel = valCont - valAnd - valCar;

	cout << "Uma conta de " << valCont << "R$, resulta em "<< valAnd << "R$ \npara Andre, " << valCar << "R$ \npara Carlos e "<< valFel << "R$ para Felipe.";

}

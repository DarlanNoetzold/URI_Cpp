#include<iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
	int x,y;
	cout << "Digite um n�mero: ";
	cin >> x;
	cout << "Digite outro n�mero: ";
	cin >> y;

	int z = x-y;
	cout << "A subtra��o de " << x << " por "<< y << " e igual a " << z;


}

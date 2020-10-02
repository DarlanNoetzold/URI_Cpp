#include<iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
	int x,y;
	cout << "Digite um número: ";
	cin >> x;
	cout << "Digite outro número: ";
	cin >> y;

	int z = x-y;
	cout << "A subtração de " << x << " por "<< y << " e igual a " << z;


}

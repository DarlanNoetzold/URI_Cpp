#include<iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
	int x,y;
	cout << "Digite um numero: ";
	cin >> x;
	cout << "Digite outro numero: ";
	cin >> y;

	int z = x-y;
	cout << "A subtracao de " << x << " por "<< y << " e igual a " << z;


}

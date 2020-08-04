#include<iostream>
using namespace std;

main(){
	int a, b, b1;
	
	cout << "Digite o valor de A: ";
	cin >> a;
	
	cout << "Digite o valor de B: ";
	cin >> b;
	
	b1 = b;
	b = a;
	a = b1;
	
	cout << "A variavel A agora vale: "<< a << ". Ja a variavel B: "<< b; 		
}

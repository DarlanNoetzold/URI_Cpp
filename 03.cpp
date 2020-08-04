#include<iostream>
using namespace std;

main(){
	int s=0, m=0, h=0;
	cout << "Digite o tempo em segundos: ";
	cin >> s;
	
	
	while (s > 60){
		s -= 60;
		m++;
	}
	while (m > 60){
		m -= 60;
		h++;
	}
	cout << h << ":" << m << ":" << s;
	
}

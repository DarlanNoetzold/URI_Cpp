#include<iostream>
using namespace std;

main(){
	float val=0, newVal,desc;
	cout << "Digite o valor do produto: ";
	cin >> val;
	cout << "Digite o valor do desconto em %: ";
	cin >> desc;
	
	newVal = val-((desc/100)*val);
	
	cout << "O novo valor do produto, aplicando o desconto de "<< desc <<"%  e: " << newVal;
	
}

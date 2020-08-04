#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	double sal, newSal, reaj, salMin;
	string nome;
	cout<<"Digite o valor do salario minimo: ";
	cin>>salMin;
	cout<<"Digite o nome do funcionario: ";
	cin>>nome;
	cout<<"Digite o salario do funcionario: ";
	cin>>sal;
	
	if(sal < 3*salMin){
		newSal = sal * 1.5;
	}else if(sal < 10*salMin){
		newSal = sal * 1.2;
	}else if(sal < 20*salMin){
		newSal = sal * 1.15;
	}else{
		newSal = sal*1.10;
	}
	cout<<fixed<<setprecision(2);
	reaj = newSal - sal;
	cout<<nome<<" tera um reajuste de: R$"<<reaj<<" tendo um novo salario de: R$"<<newSal;
}

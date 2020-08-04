#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	double sal, newSal, reaj;
	cin>>sal;

	if(sal <= 400.00){
        reaj = sal * 1.15;
        newSal = sal + reaj;
        cout<<"Novo salario: "<< newSal;
        cout<<"\nReajuste ganho: "<<reaj;
        cout<<"\nEm percentual: 15 %";
	}else if(sal <= 800.00){
        reaj = sal * 1.12;
        newSal = sal + reaj;
        cout<<"Novo salario: "<< newSal;
        cout<<"\nReajuste ganho: "<<reaj;
        cout<<"\nEm percentual: 12 %";
	}else if(sal <= 1200.00){
        reaj = sal * 1.1;
        newSal = sal + reaj;
        cout<<"Novo salario: "<< newSal;
        cout<<"\nReajuste ganho: "<<reaj;
        cout<<"\nEm percentual: 10 %";
	}else if(sal <= 2000.00){
        reaj = sal * 1.07;
        newSal = sal + reaj;
        cout<<"Novo salario: "<< newSal;
        cout<<"\nReajuste ganho: "<<reaj;
        cout<<"\nEm percentual: 7 %";
	}else if(sal > 2000.00){
        reaj = sal * 1.04;
        newSal = sal + reaj;
        cout<<"Novo salario: "<< newSal;
        cout<<"\nReajuste ganho: "<<reaj;
        cout<<"\nEm percentual: 4 %";
	}


}


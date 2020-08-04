#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	double sal, newSal, reaj;
	cin>>sal;
    cout<<fixed<<setprecision(2);
	if(sal <= 400.00){
        reaj = sal * 0.15;
        newSal = sal + reaj;
        cout<<"Novo salario: "<< newSal<<endl;
        cout<<"Reajuste ganho: "<<reaj<<endl;
        cout<<"Em percentual: 15 %"<<endl;
	}else if(sal <= 800.00){
        reaj = sal * 0.12;
        newSal = sal + reaj;
        cout<<"Novo salario: "<< newSal<<endl;
        cout<<"Reajuste ganho: "<<reaj<<endl;
        cout<<"Em percentual: 12 %"<<endl;
	}else if(sal <= 1200.00){
        reaj = sal * 0.1;
        newSal = sal + reaj;
        cout<<"Novo salario: "<< newSal<<endl;
        cout<<"Reajuste ganho: "<<reaj<<endl;
        cout<<"Em percentual: 10 %"<<endl;
	}else if(sal <= 2000.00){
        reaj = sal * 0.07;
        newSal = sal + reaj;
        cout<<"Novo salario: "<< newSal<<endl;
        cout<<"Reajuste ganho: "<<reaj<<endl;
        cout<<"Em percentual: 7 %"<<endl;
	}else if(sal > 2000.00){
        reaj = sal * 0.04;
        newSal = sal + reaj;
        cout<<"Novo salario: "<< newSal<<endl;
        cout<<"Reajuste ganho: "<<reaj<<endl;
        cout<<"Em percentual: 4 %"<<endl;
	}


}


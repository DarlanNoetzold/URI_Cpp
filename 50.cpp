#include <iostream>

using namespace std;

int main(){
    int cargo;
    double sal, newSal, aum;
    cout<<"Digite o salario: ";
    cin>>sal;
    cout<<"Digite o código do cargo: ";
    cin>>cargo;

    if(cargo == 101){
        aum = sal * 0.1;
        newSal = sal +aum;
        cout << "O seu salario de "<<sal<<" sofreu um aumento de "<<aum<<" totalizando em "<<newSal;
    }else if(cargo == 102){
        aum = sal * 0.2;
        newSal = sal +aum;
        cout << "O seu salario de "<<sal<<" sofreu um aumento de "<<aum<<" totalizando em "<<newSal;
    }else if(cargo == 103){
        aum = sal * 0.3;
        newSal = sal +aum;
        cout << "O seu salario de "<<sal<<" sofreu um aumento de "<<aum<<" totalizando em "<<newSal;

    }else{
        aum = sal * 0.4;
        newSal = sal +aum;
        cout << "O seu salario de "<<sal<<" sofreu um aumento de "<<aum<<" totalizando em "<<newSal;
    }
}




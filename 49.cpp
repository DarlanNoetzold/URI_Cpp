#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    char cat;
    string nome;
    double sal, newSal;

    cout<<"Digite a categoria: ";
    cin>>cat;

    cout<<"Digite o nome: ";
    cin>>nome;

    cout<<"Digite o salario: ";
    cin>>sal;

    if(cat == 'A' ||cat == 'C' ||cat == 'F' ||cat == 'H') newSal = sal * 1.1;
    else if(cat == 'B' ||cat == 'D' ||cat == 'E' ||cat == 'I' ||cat == 'J' ||cat == 'T') newSal = sal * 1.15;
    else if(cat == 'K' || cat == 'R') newSal = sal * 1.25;
    else if(cat == 'L' ||cat == 'M' ||cat == 'N' ||cat == 'O' ||cat == 'P' ||cat == 'S') newSal = sal * 1.35;
    else if(cat == 'U' ||cat == 'V' ||cat == 'X' ||cat == 'Z' ||cat == 'W') newSal = sal * 1.5;

    cout<<fixed<<setprecision(2);
    cout<<"O funcionario "<< nome <<" com salario atual de: R$"<<sal<<", terá um novo salario com valor de: R$"<<newSal;

}




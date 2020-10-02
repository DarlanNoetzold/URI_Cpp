#include<iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    int num, vendas;
    double sal, percentual;

    cout<<"Número do vendedor: ";
    cin>>num;

    cout<<"Salario: ";
    cin>>sal;

    cout<<"Total de vendas: ";
    cin>>vendas;

    cout<<"Percentual: ";
    cin>>percentual;

    double tot = sal + (vendas * (percentual/100));

    cout<<"Total a receber: "<<tot<<"R$";
}

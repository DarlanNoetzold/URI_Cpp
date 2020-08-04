#include<iostream>

using namespace std;

main(){
    float salMin, salFun, quantSal;

    cout<<"Digite o valor do salario minimo: ";
    cin >> salMin;

    cout << "Digite o salario do funcionario: ";
    cin >> salFun;

    quantSal = salFun/salMin;

    cout << "O funcionario recebe "<< quantSal << " salario(s) minimo(s).";
}

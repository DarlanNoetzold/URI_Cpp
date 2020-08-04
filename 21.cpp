#include<iostream>
using namespace std;

main(){
    int hrTrab=0, hrEx=0;
    float salMin=0, valTrab=0, valEx=0, totSal=0;

    cout << "Digite o valor do salario minimo: ";
    cin >> salMin;

    cout << "Digite a quantidade de horas trabalhadas: ";
    cin >> hrTrab;

    cout << "Digite a qauntidade de horas extras trabalhadas: ";
    cin >> hrEx;

    valTrab = (salMin/8) * hrTrab;
    valEx = (salMin/4) * hrEx;

    totSal = valTrab + valEx;

    cout << "O valor bruto do salario e igual a: " << valTrab << "R$.\nJa o valor somado com horas extras é igual a: "<< totSal<<"R$.\n\n\n";

}

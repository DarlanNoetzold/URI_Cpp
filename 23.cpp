#include<iostream>

using namespace std;

main(){
    float valDep, valTax, valTot;

    cout << "Digite o valor do deposito: ";
    cin >> valDep;


    cout << "Digite o valor da taxa em %: ";
    cin >> valTax;

    valTot = (valDep * (valTax/100)) + valDep;

    cout << "O valor redido apos um mes e igual a: "<< valTot;
}

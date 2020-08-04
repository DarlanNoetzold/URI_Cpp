#include<iostream>
using namespace std;

main(){
    float din, dol, marcAl, librEst;

    cout << "Digite a quantidade de dinheiro em reais: ";
    cin >> din;

    dol = din/1.8;
    marcAl = din/2;
    librEst = din/3.57;

    cout << "Seu dinheiro em dolar vale: "<< dol<<", em Marco Alemao vale: " << marcAl << " e em Libra Esterlina e: "<< librEst <<".\n\n\n";
}

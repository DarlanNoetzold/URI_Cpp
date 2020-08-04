#include <iostream>
#include <cmath>
using namespace std;

main(){
    int num, a, b, soma, sub, multi, pot;
    double div;
    cout<<"Digite dois numeros: ";
    cin>>a>>b;
    cout<<"\nSoma[1]\nSubtracao[2]\nMultiplicacao[3]\nDivisao[4]\nPotenciacao[5]";
    cin>>num;

    switch(num){
    case 1:
        soma = a+b;
        cout<<"Soma igual a: "<<soma;
        break;
    case 2:
        sub = a-b;
        cout<<"Subtracao igual a: "<<sub;
        break;
    case 3:
        multi = a*b;
        cout<<"Multiplicação igual a: "<<multi;
        break;
    case 4:
        div = a/b;
        cout<<"Divisao igual a: "<<div;
        break;
    case 5:
        pot = pow(a,b);
        cout<<"Potenciacao igual a: "<<pot;
        break;
    }
}

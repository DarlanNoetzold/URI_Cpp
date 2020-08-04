#include<iostream>

using namespace std;

main(){
    float preGas, numLit, valPag;

    cout << "Qual o preco do litro da gasolina? ";
    cin >> preGas;

    cout << "Quanto voce vai pagar? ";
    cin >> valPag;

    numLit = valPag/preGas;

    cout << "Voce vai colocar "<<numLit<<" Litos.\n\n\n";

}

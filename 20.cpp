#include<iostream>

using namespace std;

main(){
    float c1,c2,c3,c4,totalComp;
    int pont;

    cout << "Digite o valor da sua primeira compra: ";
    cin >> c1;

    cout << "Digite o valor da sua segunda compra: ";
    cin >> c2;

    cout << "Digite o valor da sua terceira compra: ";
    cin >> c3;

    cout << "Digite o valor da sua quarta compra: ";
    cin >> c4;

    totalComp = c1 + c2 + c3 + c4;

    pont = totalComp/5;

    cout << "O valor total da compra e igual a: "<< totalComp << "R$.\nTotalizando "<< pont << " pontos.\n\n\n\n";

}

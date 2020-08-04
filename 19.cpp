#include<iostream>

using namespace std;

main(){
    int umC=0, cincoC=0, dezC=0, vintCincoC=0, cinquentC=0, cemC=0, calc=0, centavos=0, real=0;

    cout << "Digite a quantidade de moedas de 1 Centavo: ";
    cin >> umC;

    cout << "Digite a quantidade de moedas de 5 Centavos: ";
    cin >> cincoC;

    cout << "Digite a quantidade de moedas de 10 Centavos: ";
    cin >> dezC;

    cout << "Digite a quantidade de moedas de 25 Centavos: ";
    cin >> vintCincoC;

    cout << "Digite a quantidade de moedas de 50 Centavos: ";
    cin >> cinquentC;

    cout << "Digite a quantidade de moedas de 1 Real: ";
    cin >> cemC;

    centavos = umC + (cincoC * 5) + (dezC * 10) + (vintCincoC * 25) + (cinquentC * 50) + (cemC * 100);

    while(centavos >= 100){
        centavos -= 100;
        real++;
    }

    cout << "O valor em reais e igual a: "<< real<< "," << centavos <<"R$.\n\n\n";
}

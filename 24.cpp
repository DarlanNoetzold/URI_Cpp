#include<iostream>

using namespace std;

main(){
    int dias=0, anos=0, meses=0;

    cout << "Digite os dias vividos: ";
    cin >> dias;

    while(dias >= 365){
        dias -= 365;
        anos++;
    }
    while(dias >= 30){
        dias -= 30;
        meses++;
    }

    cout << "A quantidade de ano(s) vivido(s) e igual a: " << anos <<".\nA quantidade de mes(es) vividos(s) e igual a: " << meses << ".\nE a quantidade de dia(s) vivido(s) e igual a: "<< dias;
}

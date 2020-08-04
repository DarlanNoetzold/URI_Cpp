#include<iostream>

using namespace std;

main(){
    int anoNas, anoAt, idade, anoFut;

    cout << "Digite o ano atual: ";
    cin >> anoAt;

    cout << "Digite o seu ano de nasciemnto: ";
    cin >> anoNas;

    idade = anoAt - anoNas;
    anoFut = 2050 - anoNas;

    cout << "A sua idade e: " << idade << ".\nE voce tera: " << anoFut << " em 2050.";
}

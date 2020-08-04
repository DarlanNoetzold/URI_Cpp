#include <iostream>
#include <cmath>
using namespace std;

main(){
    int idade;
    cout<<"Idade";
    cin>>idade;

    switch(idade){
    case 5 ... 7:
        cout<<"Infantil A";
        break;
    case 8 ... 10:
        cout<<"Infantil B";
        break;
    case 11 ... 13:
        cout<<"Juvenil A";
        break;
    case 14 ... 17:
        cout<<"Juvenil B";
        break;
    default:
        cout<<"Adulto";
        break;
    }
}


#include <iostream>

using namespace std;

int main(){
    int saldo;

    cin>>saldo;

    if(saldo <= 200){
        cout << "Nenhum credito";
    }else if(saldo <= 400){
        cout << "20% do valor do saldo medio";
        saldo = saldo *1.2;
        cout <<"\nSaldo igual a: "<< saldo;
    }else if(saldo <= 600){
        cout << "30% do valor do saldo medio";
        saldo = saldo *1.3;
        cout <<"\nSaldo igual a: "<< saldo;
    }else if(saldo > 600){
        cout << "40% do valor do saldo medio";
        saldo = saldo *1.4;
        cout <<"\nSaldo igual a: "<< saldo;
    }else{
        cout<<"Valor invalido";
    }


}




#include<iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    int salBruto, presta;

    cout<<"Digite o salário bruto: ";
    cin>> salBruto;

    cout<<"Digite a prestação: ";
    cin>> presta;

    if(presta < (salBruto * 0.3)) cout<<"VÁLIDO";
    else cout<<"INVÁLIDO";
}

#include<iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    int salBruto, presta;

    cout<<"Digite o sal�rio bruto: ";
    cin>> salBruto;

    cout<<"Digite a presta��o: ";
    cin>> presta;

    if(presta < (salBruto * 0.3)) cout<<"V�LIDO";
    else cout<<"INV�LIDO";
}

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    char tipoComb;
    double litVend;
    double totPag;

    cout<<"Digite o tipo de combustivel [g = gasolina, a = alcool]: ";
    cin>> tipoComb;

    cout<<"Digite a quantidade de litros vendidos: ";
    cin>> litVend;

    if(tipoComb == 'a'){
            if(litVend < 20){
                totPag = (litVend * 1.650) - ((litVend * 1.650) * 0.03);
                cout << "Valor a pagar: "<< totPag;

            }else{
                totPag = (litVend * 1.650) - ((litVend * 1.650) * 0.05);
                cout << "Valor a pagar: "<< totPag;
            }
    }else{
        if(litVend < 15){
            totPag = (litVend * 2.590) - ((litVend * 2.590) * 0.035);
            cout << "Valor a pagar: "<< totPag;
        }else{
            totPag = (litVend * 2.590) - ((litVend * 2.590) * 0.06);
            cout << "Valor a pagar: "<< totPag;
        }
    }
}




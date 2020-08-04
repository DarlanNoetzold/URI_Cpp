#include <iostream>

using namespace std;

int main(){
    int velPer, velPra;
    double tot;
    cout<<"Digite a velocidade permitida: ";
    cin>>velPer;
    cout<<"Digite a velocidade praticada: ";
    cin>>velPra;

    tot = velPer * 1.2;


    if(velPra < tot && velPra > velPer){
        cout<<"Multa = R$102,00";

    }else if(velPra > tot){
        cout<<"Multa = R$500,00";
    }else{
        cout<<"Não tem Multa";
    }

}




#include <iostream>

using namespace std;

int main(){
    string nome;
    int idade;
    cin>>nome>>idade;
    if(idade <10){
        cout<<nome <<" pagar� R$30,00";
    }else if(idade <29){
        cout<<nome <<" pagar� R$60,00";
    }else if(idade <45){
        cout<<nome <<" pagar� R$120,00";
    }else if(idade <59){
        cout<<nome <<" pagar� R$150,00";
    }else if(idade <65){
        cout<<nome <<" pagar� R$250,00";
    }else{
        cout<<nome <<" pagar� R$400,00";
    }
}


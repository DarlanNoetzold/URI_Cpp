#include <iostream>

using namespace std;

int main(){
    char sexo;
    double h;
    double peso;
    cout<<"Digite o sexo: ";
    cin>>sexo;
    cout<<"Digite a altura: ";
    cin>>h;

    if(sexo = 'f'){
        peso = (62.1*h) - 44.7;
        cout<<"peso ideal: "<<peso;
    }else if(sexo = 'h'){
        peso = (72.7*h) -58;
        cout<<"peso ideal: "<<peso;
    }else{
        cout<<"Valor do sexo invalido";
    }

}



#include <iostream>

using namespace std;

int main(){
    char sexo;
    double h;
    double peso;
    int idade;
    cout<<"Digite o sexo: ";
    cin>>sexo;
    cout<<"Digite a altura: ";
    cin>>h;
    cout<<"Digite a idade: ";
    cin>>idade;

    if(sexo = 'f'){
        if(h > 1.50){
            peso = (62.1*h) - 44.7;
            cout<<"peso ideal: "<<peso;
        }else if(h <= 1.50){
            if(idade >=35){
                peso = (62.1*h) - 45;
                cout<<"peso ideal: "<<peso;
            }else if(idade < 35){
                peso = (62.1*h) - 49;
                cout<<"peso ideal: "<<peso;
            }
        }
    }else if(sexo = 'h'){
        if(h > 1.70){
            if(idade <= 20){
                peso = (72.7*h) -58;
                cout<<"peso ideal: "<<peso;
            }else if(idade >= 21){
                peso = (72.7*h) -53;
                cout<<"peso ideal: "<<peso;
            }else if(idade >=40){
                peso = (72.7*h) -45;
                cout<<"peso ideal: "<<peso;
            }
        }else if(h<= 1.70){
            if(idade <= 40){
                peso = (72.7*h) -50;
                cout<<"peso ideal: "<<peso;
            }else if(idade > 40){
                peso = (72.7*h) -58;
                cout<<"peso ideal: "<<peso;
            }
        }
    }else{
        cout<<"Valor do sexo invalido";
    }

}



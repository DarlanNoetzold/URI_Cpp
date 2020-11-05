#include<iostream>
using namespace std;

main(){
    int idade;
    float pesoKg,quant,gotas;
    cout<<"Digite sua idade: ";
    cin>>idade;

    cout<<"Digite seu peso em KG: ";
    cin>>pesoKg;

    if(idade >= 12){
        if(pesoKg >= 60){
            quant = 1000;
        }else{
            quant = 875;
        }
    }else{
        if(pesoKg >= 5 && pesoKg <= 9){
            quant = 125;
        }else if(pesoKg > 9 && pesoKg <= 16){
            quant = 250;
        }else if(pesoKg > 16 && pesoKg <= 24){
            quant = 375;
        }else if(pesoKg > 24 && pesoKg <= 30){
            quant = 500;
        }else if(pesoKg > 30){
            quant = 750;
        }
    }

    gotas = 20 * (quant / 500);

    cout<<"O paciente deve tomar: "<< gotas<< " gotas.";
}


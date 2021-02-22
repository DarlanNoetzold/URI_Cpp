#include <bits/stdc++.h>

using namespace std;

double sacar;

int retornaCem(){
    int cem = 0;
    while(sacar >= 100){
        sacar -= 100;
        cem++;
    }
    return cem;
}

int retornaCinquenta(){
    int cinquenta = 0;
    while(sacar >= 50){
        sacar -= 50;
        cinquenta++;
    }
    return cinquenta;
}

int retornaVinte(){
    int vinte = 0;
    while(sacar >= 20){
        sacar -= 20;
        vinte++;
    }
    return vinte;
}

int retornaDez(){
    int dez = 0;
    while(sacar >= 10){
        sacar -= 10;
        dez++;
    }
    return dez;
}

int retornaCinco(){
    int cinco = 0;
    while(sacar >= 5){
        sacar -= 5;
        cinco++;
    }
    return cinco;
}

int retornaDois(){
    int dois = 0;
    while(sacar >= 2){
        sacar -= 2;
        dois++;
    }
    return dois;
}


main(){
    cout<<fixed<<setprecision(2);
    cout<<"Digite a quantia a sacar: ";
    cin>>sacar;
    if(sacar > 0){
        int cem = retornaCem();
        int cinquenta = retornaCinquenta();
        int vinte = retornaVinte();
        int dez = retornaDez();
        int cinco = retornaCinco();
        int dois = retornaDois();
        cout<<endl;

        if(cem > 0){
            cout<<cem<<" nota(s) de 100";
        } 
        if(cinquenta > 0){
            cout<<", "<<cinquenta<<" nota(s) de 50";
        } 
        if(vinte > 0){
            cout<<", "<<vinte<<" nota(s) de 20";
        } 
        if(dez > 0){
            cout<<", "<<dez<<" nota(s) de 10";
        } 
        if(cinco > 0){
            cout<<", "<<cinco<<" nota(s) de 5";
        } 
        if(dois > 0){
            cout<<", "<<dois<<" nota(s) de 2";
        } 
        if(sacar > 0){
            cout<<"\n\nDesculpe, nao temos troco para: "<< sacar<<endl;
        }
    }else{
        cout<<"Valor Invalido!"<<endl;
    }
}
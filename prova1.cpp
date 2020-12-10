#include<bits/stdc++.h>
#include<iostream>
#include <time.h>

using namespace std;
#define NUM 10
int v[NUM];

bool verifica(int i){
    for(int j = 0; j< i; j++){
        if(v[i] == v[j]){
            return false;
        }
    }
    return true;
}

void gerarVet(){
    for(int i = 0; i< NUM; i++){
        int num = rand()%100;
        v[i] = num;
        if(verifica(i) == false){
            i--;
        }
    }
}

void consultNum(){
    for(int i = 0; i< NUM; i++){
        cout<<"|"<<v[i];
    }
    cout<<"\n";
}

void ordena(){
    sort(v, v+NUM);
}

main(){
    srand(time(NULL));
    setlocale(LC_ALL, "portuguese-brazilian");
    bool sair = false;
    do{
        int op;
        cout<<"(1) Gerar Vetor V[10]\n";
        cout<<"(2) Consultar numero\n";
        cout<<"(3) Ordenar crescente\n";
        cout<<"(4) sair.\n";

        cout<<"Digite a opção: ";
        cin>>op;

        switch(op){
            case 1:
                gerarVet();
                break;
            case 2:
                consultNum();
                break;
            case 3:
                ordena();
                break;
            case 4:
                sair = true;
                break;
            default:
            cout<<"\nNão temos esta opção!";
            break;

        }
    }while(sair == false);

}




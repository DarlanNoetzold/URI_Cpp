#include <bits/stdc++.h>
using namespace std;

main(){
    int op=1;
    ofstream escreve("teste.txt",ios::app);
    do{
        float num;
        cout<<"Digite um numero: ";
        cin>>num;
        if(escreve.is_open()){
            escreve << num <<"\n";
        }
        cout<<"Deseja ler mais numeros? (1 - sim) (0 - nao) ";
        cin>>op;
    }while(op==1);

    ifstream ler("teste.txt", ios::in);
    char numChar[10000];
    float maior=0;
    int aux=0;
    while(!ler.fail()){
        ler.getline(numChar,10, '\n');

        float numAtual = atof(numChar);

        if(aux == 0 || numAtual > maior){
            maior = numAtual;
        }
        aux++;
    }

    cout<<"O maior numero eh: "<<maior<<endl;
}




 
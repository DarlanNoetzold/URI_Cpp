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
            escreve << num <<";";
        }
        cout<<"Deseja ler mais numeros? (1 - sim) (0 - nao) ";
        cin>>op;
    }while(op==1);

    escreve.close();

    ifstream ler("teste.txt", ios::in);
    char numChar[10000];
    float num, soma=0, maior=0, menor=10000, aux=0;
    while(!ler.fail()){
        ler.getline(numChar,10, ';');

        float numAtual = atof(numChar);
        soma += numAtual;

        if(aux == 0 || numAtual > maior){
            maior = numAtual;
        }
        if(aux == 0 || numAtual < menor && numAtual != 0){
            menor = numAtual;
            cout<<numAtual;
        }

        aux++;
    }

    cout<<"\nA soma dos valores eh: "<<soma<<", a media eh: "<<soma/aux<<endl;
    cout<<"O maior valor eh: "<<maior<<" e o menor eh: "<<menor<<endl;


}
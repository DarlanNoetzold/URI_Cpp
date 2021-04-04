#include <bits/stdc++.h>
using namespace std;

int retornaResultado(int ****num, int *valorUsu, int *valorSorteado){
    int cont=0;
    for(int i = 0; i < 20;i++){
        for(int j = 0; j < ****num; j++){
            if(*valorSorteado == *valorUsu){
                cont++;
            }
            valorUsu++;
        }
        valorUsu -= ****num;
        valorSorteado++;
    }
    return cont;
}

void mostra(int ****num, int *valorUsu, int *valorSorteado){
    int i =0;
    cout<<"\nValores Sortedos: |";
    while(i< 20){
        cout<<*valorSorteado<<"|";
        i++;
        valorSorteado++;
    }
    valorSorteado -= i;
    i=0;
    cout<<"\nValores Digitados: |";
    while(i< 20){
        cout<<*valorUsu<<"|";
        i++;
        valorUsu++;
    }
    valorUsu -= i;
}

int leituraVetor(int ***num, int *valorUsu, int *valorSorteado){
    int i = 0;
    while(i< ***num){
        cout<<"Digite um numero: ";
        cin>>*valorUsu;
        valorUsu++;
        i++;
    }
    valorUsu -= i;

    mostra(&num, valorUsu, valorSorteado);
    return retornaResultado(&num, valorUsu, valorSorteado);
}

int sorteia(int *valorSorteado,int **num, int *valorUsu){
    int i =0;
    while(i < 20){
        *valorSorteado = rand()%100;
        valorSorteado++;
        i++;
    }
    valorSorteado -= i;
    return leituraVetor(&num, valorUsu, valorSorteado);
}

int leitura(int *num){
    cout<<"Digite a quantidade de n?meros que desejas apostar: (1 - 20) "<<endl;
    cin>>*num;
    fflush(stdin);
    int valorUsu[*num];
    int valorSorteado[20];
    
    return sorteia(valorSorteado, &num,valorUsu);
}

main(){
    srand(time(NULL));
    int num;
    int valor = leitura(&num);

    cout<<"\nValores acertados: "<< valor;
}


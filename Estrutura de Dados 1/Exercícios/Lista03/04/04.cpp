#include<bits/stdc++.h>

using namespace std;

#include "pilha-dinamica.hpp"


bool compararPilhas(Pilha *p1, Pilha *p2, int tam){
    int i, j, v1, v2;
    int vet1[tam], vet2[tam];
    bool igual = true;
    for(i=0;i<tam;i++){
        desempilhar(p1, &v1);
        desempilhar(p2, &v2);
        vet1[i] = v1;
        vet2[i] = v2;
        if(v1!=v2)
            igual = false;
    }
    for(i=0;i<tam;i++){
        empilhar(p1, vet1[tam-i-1]);
        empilhar(p2, vet2[tam-i-1]);
    }
    if(igual==true)
        return true;
    else
        return false;
}

void retornarpares(Pilha *p1, Pilha *p2, int tam){
    int v1, v2;
    int valor = 0;
    for(int i=0;i<tam;i++){
        desempilhar(p1,&v1);
        desempilhar(p2,&v2);
        if(v1%2==0)
            valor++;
        if(v2%2==0)
            valor++;
    }
    cout<< "\n Existe "<< valor << " pares";
}



int main(void){
    setlocale(LC_ALL, "Portuguese");

    Pilha p1, p2;
    int tam=0, valor, aux=0;
    char op;
    inicializa(&p1);
    inicializa(&p2);
    
    while(true){
        cout<< "\n Informe os valores para a pilha 1:";
        cin>>valor;
        empilhar(&p1,valor);
        tam++;
        cout<<"Deseja continuar? (n/s)";
        cin>>op;
        if(op == 'n')
            break;
    }

    while(aux < tam){
        cout<< "\n Informe os valores para a pilha 2:";
        cin>>valor;
        empilhar(&p2,valor);
        aux++;
    }

    if(compararPilhas(&p1, &p2, tam))
       cout << "Sao iguais.";
    else
        cout << "Nao sao iguais.";
    
    retornarpares(&p1, &p2, tam);

    desalocar(&p1);
    desalocar(&p2);
}

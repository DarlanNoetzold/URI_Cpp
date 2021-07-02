#include<bits/stdc++.h>

using namespace std;

#include "pilha.hpp"

void buscarI(int cod, Pilha *p1, int quantCidades){
    Pilha p2;
    int valor;
    int i = 0;
    inicializa(&p2, quantCidades);
    for(; i < quantCidades; i++){
        desempilhar(&(*p1), &valor);
        empilhar(&p2, valor);
        cout<<valor<<endl;
        if(valor == cod){
            cout<<"Codigo encontrado";
            break;
            getchar();
        }
    }

    for(int j = 0; j < i+1; j++){
        desempilhar(&p2, &valor);
        empilhar(&(*p1), valor);
    }

}

int main(void){
    int quantCidades;
    cout<<"Quantas cidades: "<<endl;
    cin>>quantCidades;
    Pilha p1;
    inicializa(&p1, quantCidades);
    for(int i = 0; i < quantCidades; i++){
        int aux;    
        cout<<"Digite o c?digo da cidade "<<i<<":";
        cin>>aux;
        empilhar(&p1, aux);
    }

    int menu = -1;

    do{
        system("cls");
        cout << "###############MENU###############" << endl;
        cout << "# 0 - Sair                       #" << endl;
        cout << "# 1 - Busca                      #" << endl;
        cout << "##################################" << endl;
        cout << "Sua escolha: ";
        cin >> menu;
        fflush(stdin);//limpa o buffer do teclado

        switch(menu){
            case 0 :
                system("cls");
                cout << "PROGRAMA FINALIZADO";
                getchar();
                break;
            case 1 :
                system("cls");
                int cod;
                cout<<"Digite um c?digo para buscar: ";
                cin>>cod;
                buscarI(cod, &p1, quantCidades);

                getchar();
                break;
        };

    }while(menu != 0);
}



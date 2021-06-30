#include <bits/stdc++.h>
using namespace std;

#include "pilha.hpp"


main(){
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    Pilha p1, pilhaPar, pilhaImpar;
    int tamPilha, valor;
    inicializa(&p1, 6);
    inicializa(&pilhaPar, 6);
    inicializa(&pilhaImpar, 6);



    for(int i = 0; i < 6; i++){
        valor = rand()%50;
        empilhar(&p1, valor);
        cout<<valor;
        getchar();
    }

    for(int i = 0; i < 6; i++){
        if(desempilhar(&p1, &valor)){
            cout<<"Valor desempilhado!";
            if(valor % 2 == 0){
                empilhar(&pilhaPar, valor);
            }else{
                empilhar(&pilhaImpar, valor);
            }
        }else{
            cout<<"Pilha vazia!";
        }
    }

    mostrar(&pilhaImpar);
    getchar();

    int menu = -1, indice = 0;

    do{
        system("cls");
        cout << "###############MENU###############" << endl;
        cout << "# 0 - Sair                       #" << endl;
        cout << "# 1 - Zerar 3 pilhas             #" << endl;
        cout << "# 2 - Mostrar p1                 #" << endl;
        cout << "# 3 - Mostrar pilha dos pares    #" << endl;
        cout << "# 4 - Mostrar pilha dos impares  #" << endl;
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
                for(int i = 0; i < 6; i++){
                    desempilhar(&p1, &valor);
                    desempilhar(&pilhaPar, &valor);
                    desempilhar(&pilhaImpar, &valor);
                }
                
                getchar();
                break;
            case 2 :
                system("cls");

                mostrar(&p1);

                getchar();
                break;
            case 3 :
                system("cls");
                mostrar(&pilhaPar);
                getchar();
                break;

            case 4 :
                system("cls");
                mostrar(&pilhaImpar);
                getchar();
                break;
        };

    }while(menu != 0);

    desalocar(&p1);
    desalocar(&pilhaPar);
    desalocar(&pilhaImpar);
}

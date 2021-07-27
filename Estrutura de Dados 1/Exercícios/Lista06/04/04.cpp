#include <bits/stdc++.h>
using namespace std;

#include "fila-dinamica.hpp"
#include "pilha-dinamica.hpp"


void popularFila(Fila *f1){
    int  valor;
    int menu = -1, indice = 0;
    do{
        system("cls");
        cout << "###############MENU###############" << endl;
        cout << "# 0 - Sair                       #" << endl;
        cout << "# 1 - Inserir na fila            #" << endl;
        cout << "# 2 - Remover da fila            #" << endl;
        cout << "# 3 - Mostrar fila               #" << endl;
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
                cout<<"Digite o valor: ";
                cin>>valor;
                enfileiraF(*(&f1), valor);
                getchar();
                break;
            case 2 :
                system("cls");
                if(desenfileiraF(*(&f1), &valor)){
                    cout<<"Valor "<<valor<<" desenfileirado!";
                }else{
                    cout<<"A fila esta vazia ou deu algum problema!";
                }
                getchar();
                break;
            case 3 :
                system("cls");
                mostraF(*(&f1));
                getchar();
                break;
            case 4 :
                system("cls");
                
                break;
        };

    }while(menu != 0);
}

void separaF(int n, Fila *f1, Fila *f2){
    Pilha p1;
    inicializa(&p1);
    int valor;
    while(!vaziaF(*(&f1))){
        if(desenfileiraF(*(&f1), &valor)){
            empilhar(&p1, valor);
        }
    }
    while(!vazia(&p1)){
        if(desempilhar(&p1, &valor)){
            enfileiraF(*(&f1), valor);
        }
    }
    cout<<"Valores invertidos!"<<endl;

    while(!vaziaF(*(&f1))){
        espiaF(*(&f1), &valor);
        if(valor == n){
            break;
        }
        if(desenfileiraF(*(&f1), &valor)){
            enfileiraF(*(&f2), valor);
        } 
    }
    cout<<"Valores Separados!"<<endl;

    while(!vaziaF(*(&f1))){
        if(desenfileiraF(*(&f1), &valor)){
            empilhar(&p1, valor);
        }
    }
    while(!vazia(&p1)){
        if(desempilhar(&p1, &valor)){
            enfileiraF(*(&f1), valor);
        }
    }
    cout<<"Valores invertidos! F1"<<endl;

    while(!vaziaF(*(&f2))){
        if(desenfileiraF(*(&f2), &valor)){
            empilhar(&p1, valor);
        }
    }
    while(!vazia(&p1)){
        if(desempilhar(&p1, &valor)){
            enfileiraF(*(&f2), valor);
        }
    }
    cout<<"Valores invertidos! F2"<<endl;

}



main(){
    setlocale(LC_ALL, "Portuguese");

    Fila f1;
    Fila f2;
    inicializaF(&f1);
    inicializaF(&f2);
    popularFila(&f1);

    int n;
    cout<<"Digte o ponto de separação: ";
    cin>>n;
    separaF(n, &f1, &f2);

    cout<<"Filas separada: "<<endl;
    cout<<"F1: ";
    mostraF(&f1);
    cout<<"F2: ";
    mostraF(&f2);

}
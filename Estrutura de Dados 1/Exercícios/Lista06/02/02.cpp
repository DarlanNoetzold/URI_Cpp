#include <bits/stdc++.h>
using namespace std;

#include "pilha-dinamica.hpp"
#include "fila-dinamica.hpp"

main(){
    setlocale(LC_ALL, "Portuguese");
    
    Pilha p1;
    Fila f1;

    inicializa(&p1);
    inicializaF(&f1);

    int  valor;
    int menu = -1, indice = 0;
    do{
        system("cls");
        cout << "###############MENU###############" << endl;
        cout << "# 0 - Sair                       #" << endl;
        cout << "# 1 - Inserir na fila            #" << endl;
        cout << "# 2 - Remover da fila            #" << endl;
        cout << "# 3 - Mostrar fila               #" << endl;
        cout << "# 4 - Inverter fila              #" << endl;
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
                enfileiraF(&f1, valor);
                getchar();
                break;
            case 2 :
                system("cls");
                if(desenfileiraF(&f1, &valor)){
                    cout<<"Valor "<<valor<<" desenfileirado!";
                }else{
                    cout<<"A fila esta vazia ou deu algum problema!";
                }
                getchar();
                break;
            case 3 :
                system("cls");
                mostraF(&f1);
                getchar();
                break;
            case 4 :
                system("cls");
                while(!vaziaF(&f1)){
                    if(desenfileiraF(&f1, &valor)){
                        empilhar(&p1, valor);
                    }
                }
                while(!vazia(&p1)){
                    if(desempilhar(&p1, &valor)){
                        enfileiraF(&f1, valor);
                    }
                }
                cout<<"Valores invertidos!";
                getchar();
                break;
        };

    }while(menu != 0);
}

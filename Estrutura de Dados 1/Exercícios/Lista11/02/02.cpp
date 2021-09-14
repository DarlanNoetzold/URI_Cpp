#include <bits/stdc++.h>
using namespace std;

#include "lista_dupla.hpp"

main(){
    setlocale(LC_ALL, "Portuguese");

    Lista *lista = new Lista();
    int valor, posicao;

    int menu = -1;

    do{
        system("cls");
        cout << "###############MENU###############" << endl;
        cout << "# 0 - Sair                       #" << endl;
        cout << "# 2 - Inserir                    #" << endl;
        cout << "# 3 - Remover Inicio             #" << endl;
        cout << "# 4 - Remover Final              #" << endl;
        cout << "# 5 - Mostrar                    #" << endl;
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
            case 2 :
                system("cls");
                cout<<"Dite o valor: ";
                cin>>valor;
                insereFinalL(lista, valor);
                getchar();
                break;
            case 3 :
                system("cls");
                removeInicioL(lista);
                getchar();
                break;

            case 4 :
                system("cls");
                removeFimL(lista);
                getchar();
                break;
            case 5 :
                system("cls");
                mostrarL(lista);
                getchar();
                break;
        }
    }while(menu != 0);
    
    delete(lista);
    
}


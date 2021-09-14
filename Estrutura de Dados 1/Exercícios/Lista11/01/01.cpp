#include <bits/stdc++.h>
using namespace std;

#include "lista_dupla.hpp"

main(){
    setlocale(LC_ALL, "Portuguese");

    Lista *lista = new Lista();

    int posicao, cod;
    Pet valor;
    int menu = -1;

    do{
        system("cls");
        cout << "###############MENU###############" << endl;
        cout << "# 0 - Sair                       #" << endl;
        cout << "# 1 - Descritor                  #" << endl;
        cout << "# 2 - Inserir                    #" << endl;
        cout << "# 3 - Remover Posicao            #" << endl;
        cout << "# 4 - Mostrar                    #" << endl;
        cout << "# 5 - Mostrar 3 ultimos          #" << endl;
        cout << "# 6 - Separa                     #" << endl;
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
                mostraDescritorL(lista);
                getchar();
                break;
            case 2 :
                system("cls");
                cout<<"Digite o codigo: ";
                cin>>valor.cod;
                cout<<"Digite o idade: ";
                cin>>valor.idade;
                cout<<"Digite o peso: ";
                cin>>valor.peso;
                
                insereInicioL(lista, valor);
                getchar();
                break;
            case 3 :
                system("cls");
                cout<<"Digite o codigo do pet: ";
                cin>>cod;
                removeL(lista, cod);
                getchar();
                break;

            case 4 :
                system("cls");
                mostrarL(lista);
                getchar();
                break;
            case 5 :
                system("cls");
                mostrarUl(lista);
                getchar();
                break;
            case 6 :
                system("cls");
                divListasPeso(lista);
                getchar();
                break;
        }
    }while(menu != 0);
    
    delete(lista);
    
}

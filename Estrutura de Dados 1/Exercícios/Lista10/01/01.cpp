#include <bits/stdc++.h>
using namespace std;

#include "lista_descritor.hpp""

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
        cout << "# 3 - Remover                    #" << endl;
        cout << "# 4 - Consultar                  #" << endl;
        cout << "# 5 - Mostrar                    #" << endl;
        cout << "# 6 - Insere Pocicao             #" << endl;
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
                cout<<"Digite o valor: ";
                cin>>valor;
                if(insereInicioL(lista, valor)){
                    cout<<"valor inserido!"<<endl;
                    getchar();
                }
                getchar();
                break;
            case 3 :
                system("cls");
                cout << "Digite o valor a ser removido: ";
                cin >> valor;
                if (removeL(lista, valor)){
                    cout << "Valor removido: " << valor << endl;
                }
                else{
                    cout << "Valor não encontrado!" << endl;
                }
                getchar();
                break;

            case 4 :
                system("cls");
                cout << "Digite o valor: ";
                cin >> valor;
                if (buscaL(lista, valor)){
                    cout << "O valor " << valor << " foi encontrado na pilha!\n";
                    getchar();
                }
                else{
                    cout << "O valor " << valor << " NAO foi encontrado na pilha!\n";
                    getchar();
                }
                getchar();
                break;
            case 5 :
                system("cls");
                cout<<"Lista"<<lista<<endl; 
                mostraDescritorL(lista);
                getchar();
                break;
            case 6 :
                system("cls");
                cout<<"Digite o valor: ";
                cin>>valor;
                cout<<"Digite a posicao: ";
                cin>>posicao;
                if(inserePosicaoL(lista, valor, posicao)){
                    cout<<"valor inserido!"<<endl;
                    getchar();
                }
                getchar();
                break;
    }
    }while(menu != 0);
    
    delete(lista);
    
}

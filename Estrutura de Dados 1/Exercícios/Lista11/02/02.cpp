#include <bits/stdc++.h>
using namespace std;

#include ""

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
            case 1 :
                system("cls");
                
                getchar();
                break;
            case 2 :
                system("cls");
                
                getchar();
                break;
            case 3 :
                system("cls");
                
                getchar();
                break;

            case 4 :
                system("cls");
                
                getchar();
                break;
            case 5 :
                system("cls");
                
                getchar();
                break;
        }
    }while(menu != 0);
    
    delete(lista);
    
}


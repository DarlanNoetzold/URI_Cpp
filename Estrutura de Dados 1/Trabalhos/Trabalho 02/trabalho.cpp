#include <bits/stdc++.h>
using namespace std;

main(){
    int valor;
    int indice = 0;
    char menu;
    do{
        system("cls");
        cout << "############MENU###########" << endl;
        cout << "# --------Sair(Q)---------#" << endl;
        cout << "# -----------A------------#" << endl;
        cout << "# -----------B------------#" << endl;
        cout << "# -----------C------------#" << endl;
        cout << "# -----------D------------#" << endl;
        cout << "# -----------E------------#" << endl;
        cout << "# -----------F------------#" << endl;
        cout << "# -----------G------------#" << endl;
        cout << "# -----------H------------#" << endl;
        cout << "# -----------I------------#" << endl;
        cout << "# -----------J------------#" << endl;
        cout << "# -----------K------------#" << endl;
        cout << "# -----------L------------#" << endl;
        cout << "# -----------M------------#" << endl;
        cout << "###########################" << endl;
        cout << "Sua escolha: ";
        cin >> menu;
        menu = toupper(menu);
        fflush(stdin);//limpa o buffer do teclado

        switch(menu){
            case 'Q' :
                system("cls");
                cout << "PROGRAMA FINALIZADO";
                getchar();
                break;
            case 'A' :
                system("cls");

                getchar();
                break;
            case 'B' :
                system("cls");

                getchar();
                break;
            case 'C' :
                system("cls");

                getchar();
                break;
            case 'D' :
                system("cls");

                getchar();
                break;
            case 'E' :
                system("cls");
                
                getchar();
                break;
            case 'F' :
                system("cls");
                
                getchar();
                break;
            case 'G' :
                system("cls");
                
                getchar();
                break;
            case 'H' :
                system("cls");
                
                getchar();
                break;
            case 'I' :
                system("cls");
                
                getchar();
                break;
            case 'J' :
                system("cls");
                
                getchar();
                break;
            case 'K' :
                system("cls");
                
                getchar();
                break;
            case 'L' :
                system("cls");
                
                getchar();
                break;
            case 'M' :
                system("cls");
                
                getchar();
                break;
            default:
                system("cls");
                cout<<"Não temos essa opcao!";
                getchar();
                break;
        };

    }while(menu != 'Q');
}

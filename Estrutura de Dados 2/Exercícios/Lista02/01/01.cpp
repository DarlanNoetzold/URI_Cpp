#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    int menu = -1, num, valor;

    int marr[20][20] = {};
    int arestPr, arestSeg;

    do
    {
        system("cls");
        cout << "*-----------------------*" << endl;
        cout << "|    MENU DE OPCOES!!   |" << endl;
        cout << "*-----------------------*" << endl;
        cout << "| 0 - Sair              |" << endl;
        cout << "| 1 - Incluir aresta    |" << endl;
        cout << "| 2 - Mostrar           |" << endl;
        cout << "| 3 - Remover           |" << endl;
        cout << "| 4 - Vértices Adj      |" << endl;
        cout << "| 5 - Grau do Vértice   |" << endl;
        cout << "*-----------------------*" << endl;
        cout << "Sua escolha: ";
        cin >> menu;
        fflush(stdin);
        switch (menu)
        {
        case 0:
            system("cls");
            getchar();
            break;
        case 1:
            system("cls");
            cout<<"Digite o valor da primeira aresta: ";
            cin>>arestPr;

            cout<<"Digite o valor da primeira aresta: ";
            cin>>arestSeg;

            marr[arestPr][arestSeg] = 1;

            getchar();
            break;
        case 2:
            system("cls");
            for (int i = 0; i < 20; i++){
                for (int j = 0; j < 20; j++){
                    cout<<"\t"<<marr[i][j];
                }
                cout<<"\n";
            }
            getchar();
            break;
        case 3:
            system("cls");

            cout<<"Digite o valor da primeira aresta: ";
            cin>>arestPr;

            cout<<"Digite o valor da primeira aresta: ";
            cin>>arestSeg;
            
            marr[arestPr][arestSeg] = 0;

            getchar();
            break;
        case 4:
            system("cls");

            getchar();
            break;
        case 5:
            system("cls");

            getchar();
            break;
        };
    } while (menu != 0);
}

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;

void isConexo(int marr[3][3]){
    int cont=0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cont += marr[i][j];
        }
        if(cont==0){
            cout<<"Nao eh convexo, pois um vertice nao esta conectado com nenhum outro!"<<endl;
            return;
        }
        cont=0;
    }

    cout<<"Eh convexo!"<<endl;
    getchar();
}

void isRegular(int marr[3][3]){
    int grauAnt=-1;
    int grau=0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            grau += marr[i][j];
        }
        if(grauAnt == -1 || grauAnt==grau){
            grauAnt = grau;
            grau=0;
        }else{
            cout<<"Nao eh regular!"<<endl;
            getchar();
            return;
        }
    }
    cout<<"Eh regular"<<endl;
    getchar();
}

int main()
{
    int menu = -1, cont=0;

    int marr[3][3] = {};
    int verticePr, verticeSeg;

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
        cout << "| 6 - Eh convexo        |" << endl;
        cout << "| 7 - Eh regular        |" << endl;
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
            cin>>verticePr;

            cout<<"Digite o valor da primeira aresta: ";
            cin>>verticeSeg;

            marr[verticePr][verticeSeg] = 1;
            marr[verticeSeg][verticePr] = 1;

            getchar();
            break;
        case 2:
            system("cls");
            for (int i = 0; i < 3; i++){
                for (int j = 0; j < 3; j++){
                    cout<<"\t"<<marr[i][j];
                }
                cout<<"\n";
            }
            getchar();
            break;
        case 3:
            system("cls");

            cout<<"Digite o valor do primeiro vertice: ";
            cin>>verticePr;

            cout<<"Digite o valor do segundo vertice: ";
            cin>>verticeSeg;
            if(marr[verticePr][verticeSeg] == 0){
                cout<<"Aresta não existe!";
                getchar();
            }else{
                marr[verticePr][verticeSeg] = 0;
                marr[verticeSeg][verticePr] = 0;
            }
            getchar();
            break;
        case 4:
            system("cls");
            cout<<"Digite o valor do vertice: ";
            cin>>verticePr;

            for (int i = 0; i < 3; i++){
                if(marr[verticePr][i] == 1)
                    cout<<i<<", ";
            }
            getchar();
            getchar();
            break;
        case 5:
            system("cls");
            cout<<"Digite o valor do vertice: ";
            cin>>verticePr;

            for (int i = 0; i < 3; i++){
                if(marr[verticePr][i] == 1)
                    cont++;
            }
            cout<<"O grau de "<<verticePr<<" eh de: "<<cont<<endl;
            getchar();
            getchar();
            break;
        case 6:
            system("cls");
            isConexo(marr);
            getchar();
            break;
        case 7:
            system("cls");
            isRegular(marr);
            getchar();
            break;
        };
    } while (menu != 0);
}

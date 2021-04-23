#include <bits/stdc++.h>

using namespace std;


void cadastrar(){
    ofstream escreve("teste.txt",ios::app);
    char nome[30];
    cout<<"\nDigite o nome completo: ";
    gets(nome);
    escreve << nome << "\n";

    escreve.close();
}

void mostrar(){
    char x;
    ifstream ler("teste.txt", ios::in);
    while(ler.get(x))
        cout<<x;
    ler.close();
}
 
void consultar(){
    char nomeConsulta[30];
    cout<<"Digite o nome para consultar: ";
    gets(nomeConsulta);
    ifstream ler("teste.txt", ios::in);
    char numChar[30];
    char numCharAux[30];
    while(!ler.fail()){
        ler.getline(numChar,30, '\n');
        if(!strcmp(numChar, nomeConsulta)){
            cout<<"O nome "<<numChar<<" existe!"<<endl;
        }
            
    }
}


main(){
    int menu = -1;
    do{
        system("cls");
        cout << "####################MENU####################" << endl;
        cout << "# 0 - Sair                                 #" << endl;
        cout << "# 1 - Cadastrar                            #" << endl;
        cout << "# 2 - Mostrar                              #" << endl;
        cout << "# 3 - Consultar                            #" << endl;
        cout << "############################################" << endl;
        cout << "Sua escolha: ";
        cin >> menu;
        fflush(stdin);//limpa o buffer do teclado

        switch(menu)
        {
            case 0 :
                system("cls");
                cout << "PROGRAMA FINALIZADO";
                getchar();
                break;
            case 1 :
                system("cls");
                cadastrar();
                break;
            case 2 :
                system("cls");
                mostrar();
                getchar();
                break;
            case 3 :
                system("cls");
                consultar();
                getchar();
                break;
        };
    }while(menu != 0);

}

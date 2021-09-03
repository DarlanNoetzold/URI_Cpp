#include <bits/stdc++.h>
using namespace std;

#include "lista_descritor.hpp"

main(){
    setlocale(LC_ALL, "Portuguese");

    Lista *lista = new Lista();
    Func valor;
    int posicao;

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
        cout << "# 7 - Insere Inicio              #" << endl;
        cout << "# 8 - Insere Fim                 #" << endl;
        cout << "# 9 - Media                      #" << endl;
        cout << "# 10 - Menor que a Media         #" << endl;
        cout << "# 11 - Ordena                    #" << endl;
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
                cout<<"Digite o codigo: ";
                cin>>valor.cod;
                cout<<"Digite o nome: ";
                cin>>valor.nome;
                cout<<"Digite o idade: ";
                cin>>valor.idade;
                cout<<"Digite o salario: ";
                cin>>valor.salario;
                
                if(insereInicioL(lista, valor)){
                    cout<<"valor inserido!"<<endl;
                    getchar();
                }
                getchar();
                break;
            case 3 :
                system("cls");
                cout << "Digite o valor a ser removido: ";
                cin >> valor.cod;
                if (removeL(lista, valor)){
                    cout << "Valor removido: " << valor.cod << endl;
                }
                else{
                    cout << "Valor não encontrado!" << endl;
                }
                getchar();
                break;

            case 4 :
                system("cls");
                cout << "Digite o codigo: ";
                cin >> valor.cod;
                if (buscaL(lista, valor)){
                    cout << "O valor " << valor.cod << " foi encontrado na pilha!\n";
                    getchar();
                }
                else{
                    cout << "O valor " << valor.cod << " NAO foi encontrado na pilha!\n";
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
                cout<<"Digite o codigo: ";
                cin>>valor.cod;
                cout<<"Digite o nome: ";
                cin>>valor.nome;
                cout<<"Digite o idade: ";
                cin>>valor.idade;
                cout<<"Digite o salario: ";
                cin>>valor.salario;
                cout<<"Digite a posicao: ";
                cin>>posicao;
                if(inserePosicaoL(lista, valor, posicao)){
                    cout<<"valor inserido!"<<endl;
                    getchar();
                }
                getchar();
                break;
            case 7 :
                system("cls");
                cout<<"Digite o codigo: ";
                cin>>valor.cod;
                cout<<"Digite o nome: ";
                cin>>valor.nome;
                cout<<"Digite o idade: ";
                cin>>valor.idade;
                cout<<"Digite o salario: ";
                cin>>valor.salario;
                
                if(insereInicioL(lista, valor)){
                    cout<<"valor inserido!"<<endl;
                    getchar();
                }
                getchar();
                break;
            case 8 :
                system("cls");
                cout<<"Digite o codigo: ";
                cin>>valor.cod;
                cout<<"Digite o nome: ";
                cin>>valor.nome;
                cout<<"Digite o idade: ";
                cin>>valor.idade;
                cout<<"Digite o salario: ";
                cin>>valor.salario;
                
                if(insereFim(lista, valor)){
                    cout<<"valor inserido!"<<endl;
                    getchar();
                }
                getchar();
                break;
            case 9 :
                system("cls");
                cout<<"\nMedia: "<<mediaSalario(lista);
                getchar();
                break;
            case 10 :
                system("cls");
                cout<<"\nMenores que a media: \n";
                salMenorMedia(lista);
                getchar();
                break;
        }
    }while(menu != 0);
    
    delete(lista);
    
}

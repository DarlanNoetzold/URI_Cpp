#include <bits/stdc++.h>
using namespace std;

#include "filacircular.hpp"

main(){
    setlocale(LC_ALL, "Portuguese");

    Fila f1;
    int  valor, novoValor=0, soma=0;
    char numChar[4];
    
    
    int menu = -1, indice = 0;

    do{
        system("cls");
        cout << "###############MENU###############" << endl;
        cout << "# 0 - Sair                       #" << endl;
        cout << "# 1 - Criar Fila                 #" << endl;
        cout << "# 2 - Inserir                    #" << endl;
        cout << "# 3 - Remover                    #" << endl;
        cout << "# 4 - Consultar                  #" << endl;
        cout << "# 5 - Mostrar                    #" << endl;
        cout << "# 6 - Mostrar Soma               #" << endl;
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
                
                if(indice == 0){
                    inicializaF(&f1, 8);
                    indice++;
                }else{
                    destroiF(&f1);
                    inicializaF(&f1, 8);
                    indice++;
                }
                getchar();
                break;
            case 2 :
                system("cls");
                if(indice < 0){
                    cout << "E necessario criar uma fila"<<endl;
                }else{
                    cout<<"Digite o valor: ";
                    cin>>novoValor;
                    if(novoValor < 50){
                        enfileiraF(&f1, novoValor);
                    }else{
                        cout<<"Numero invalido!"<<endl;
                        getchar();
                    }
                    
                }
                getchar();
                break;
            case 3 :
                system("cls");
                if(indice == 0){
                    cout<<"Inicialize priemrio a pilha!"<<endl;
                }else{
                    if(desenfileiraF(&f1, &valor)){
                        cout<<"O valor desempilhado "<<valor<<endl;

                        ofstream escreve("teste.txt",ios::app);
                        escreve << valor <<";";
                        escreve.close();
                    }else{
                        cout<<"pilha vazia"<<endl;
                    }
                }
                getchar();
                break;

            case 4 :
                system("cls");
                if(indice == 0){
                    cout<<"Inicialize primeiro a pilha!"<<endl;
                }else{
                    cout<<"Digite o valor: ";
                    cin>>valor;
                    if(espiarF(&f1, &valor)){
                        cout << "O valor " << valor << " foi encontrado na pilha!\n";
                        getchar();
                    }else{
                        cout << "O valor " << valor << " NAO foi encontrado na pilha!\n";
                        getchar();
                    }
                }
                getchar();
                break;
            case 5 :
                system("cls");
                if(indice == 0){
                    cout<<"Inicialize primeiro a pilha!"<<endl;
                }else{
                    mostraF(&f1);
                }
                getchar();
                break;
            case 6 :
                system("cls");
                if(indice == 0){
                    cout<<"Inicialize primeiro a pilha!"<<endl;
                }else{
                    cout<<"Numeros desenfilerados: ";
                    ifstream ler("teste.txt", ios::in);
                    while(!ler.fail()){
                        ler.getline(numChar,10, ';');
                        
                        int numAtual = atoi(numChar);
                        soma += numAtual;

                        cout<<numAtual<<", ";
                    }

                    cout<<"\nSoma: "<<soma<<endl;

                    ler.close();
                }
                getchar();
                break;
        };

    }while(menu != 0);
    
}

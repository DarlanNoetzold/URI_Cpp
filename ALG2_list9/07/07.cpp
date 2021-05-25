#include <bits/stdc++.h>
using namespace std;

void gerarValores(int vetor[50]){
    int i=0;
    for(i=0;i<50;i++){
        *vetor = rand()%200;
        vetor++;
    }
    vetor -= i;
    i=0;

    sort(vetor, vetor+50);

    ofstream escreve("teste.txt", ios::out);
    while(i < 50){
        escreve << *vetor << "\n";
        vetor++;
        i++;
    }

    escreve.close();
}

void mostrarValores(){
    ifstream ler("teste.txt", ios::in);
    char numChar[4];
    int aux=0;
    while(!ler.fail()){
        ler.getline(numChar,4, '\n');
        cout<<numChar<<"\n";
        aux++;
    }
    ler.close();
}

void mostrarQuant(){
    ifstream ler("teste.txt", ios::in);
    char numChar[4];
    int aux=0;
    while(!ler.fail()){
        ler.getline(numChar,4, '\n');
        aux++;
    }

    cout<<"Existem "<<aux-1<<" valores no arquivo!!";
    ler.close();
}

void somarValores(){
    char numChar[4];
    int aux=0,soma=0;
    ifstream ler("teste.txt", ios::in);
    while(!ler.fail()){
        ler.getline(numChar,10, '\n');

        int numAtual = atoi(numChar);
        soma += numAtual;
        
        aux++;
    }

    cout<<"A soma dos valores e: "<< soma;
    ler.close();
}

void inserirValores(int num){
    char numChar[4];
    int aux=0,soma=0, posicao=0, aux2=0, vetorAux[10000];
    ifstream ler("teste.txt", ios::in);
    while(!ler.fail()){
        ler.getline(numChar,10, '\n');

        int numAtual = atoi(numChar);
        vetorAux[aux] = numAtual;
        if(numAtual > num && aux2 == 0){
            posicao = aux;
            aux2++;
        }
        aux++;
    }
    ler.close();
    ofstream escreve("teste.txt", ios::out);
    int i =0;
    if(num == 0){
        escreve << num;
    }
    while(i < (aux -2)){
        escreve << vetorAux[i]<<"\n";

        if(i == (posicao -1)){
            escreve << num << "\n";
            i++;

        }
        i++;
    }
    if(num >= 200){
        escreve << num;
    }
    escreve.close();
}


main(){
    srand(time(NULL));
    int *vetor = new int[50];
    int menu = -1;

    do{
        system("cls");
        cout << "####################MENU####################" << endl;
        cout << "# 0 - Sair                                 #" << endl;
        cout << "# 1 - Gerar Valores                        #" << endl;
        cout << "# 2 - Mostrar Valores                      #" << endl;
        cout << "# 3 - Quantidade de Valores                #" << endl;
        cout << "# 4 - Soma Valores                         #" << endl;
        cout << "# 5 - Inserir Valores                      #" << endl;
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
                gerarValores(vetor);
                break;
            case 2 :
                system("cls");
                mostrarValores();
                getchar();
                break;
            case 3 : 
                system("cls");
                mostrarQuant();
                getchar();
                break;
            case 4 :
                system("cls");
                somarValores();
                getchar();
                break;
            case 5 :
                system("cls");
                int num;
                cout<<"Digite um n?mero para inserir no arquivo: ";
                cin>> num;
                inserirValores(num);
                getchar();
                break;
        };
    }while(menu != 0);
}
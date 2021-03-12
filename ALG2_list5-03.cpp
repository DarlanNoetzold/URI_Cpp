#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

struct conta{
    int numero;
    char nome[50];
    float saldo;
};

int leitura(conta x[], int i);
void visualizar(conta x[], int i, int num);
void depositar(conta x[], int i, int num, float val);
void sacar(conta x[], int i, int num, float val);

main()
{
    conta x[10];
    int menu = -1, indice = -1, num=0;
    float val;

    do{
        system("cls");
        cout << "####################MENU####################" << endl;
        cout << "# 0 - Sair                                 #" << endl;
        cout << "# 1 - Cadastrar contas                     #" << endl;
        cout << "# 2 - Visualizar dados da conta            #" << endl;
        cout << "# 3 - Depositar                            #" << endl;
        cout << "# 4 - Sacar                                #" << endl;
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
                indice++;
                if(indice == 50)
                    cout << "Limite maximo de Contas ja cadastrados";
                else
                    leitura(x, indice);
                break;
            case 2 :
                system("cls");
                cout<<"Digite o numero da conta: ";
                cin>>num;
                if(indice < 0)
                    cout << "E necessario ler saldos primeiro";
                else
                    visualizar(x, indice, num);
                getchar();
                break;
            case 3 :
                system("cls");
                cout<<"Digite o numero da conta que voce quer depositar: ";
                cin>>num;
                cout<<"Digite o valor do deposito: ";
                cin>>val;
                if(indice < 0)
                    cout << "E necessario ler saldos primeiro";
                else
                    depositar(x, indice, num, val);
                getchar();
                break;
            case 4 :
                system("cls");
                cout<<"Digite o numero da conta que voce quer sacar: ";
                cin>>num;
                cout<<"Digite o valor do saque: ";
                cin>>val;
                if(indice < 0)
                    cout << "E necessario ler saldos primeiro";
                else
                    sacar(x, indice, num, val);
                getchar();
                break;

        };
    }while(menu != 0);

}

int leitura(conta x[], int i){
        int y,aux=0;
        cout << "\n\nInforme o numero: ";
        cin >> y;
        fflush(stdin);
        for(int j = 0; j < i;j++){
            if(y == x[j].numero){
                aux++;
            }
        }
        if(aux > 0){
            cout<<"Esta conta ja existe! "<<endl;
            getchar();
            return 0;
        }else{
            x[i].numero = y;
        }
        cout << "Informe o nome: ";
        gets(x[i].nome);
        fflush(stdin);

        cout << "Informe o saldo: ";
        cin >> x[i].saldo;
        fflush(stdin);
        return 0;
}

void visualizar(conta x[], int i, int num){
    int aux = 0;
    for(int j = 0; j <= i; j++){
        if(x[j].numero == num){
            cout << "DADOS DA CONTA: " << endl;
            cout << "Numero: " << x[j].numero << endl;
            cout << "Nome: " << x[j].nome << endl;
            cout << "saldo: " << x[j].saldo << endl;
            cout << "\n\n";
            getchar();
            aux++;
        }
    }
    if(aux <= 0){
        cout<<"Nao existe esta conta!"<<endl;
        getchar();
    }
}
 
void depositar(conta x[], int i, int num, float val){
    int aux = 0;
    for(int j = 0; j <= i; j++){
        if(x[j].numero == num){
            x[j].saldo += val; 
            aux++;
        }
    }
    if(aux <= 0){
        cout<<"N?o existe esta conta!"<<endl;
        getchar();
    }
}

void sacar(conta x[], int i, int num, float val){
    int aux = 0;
    for(int j = 0; j <= i; j++){
        if(x[j].numero == num){
            if(x[j].saldo < val){
                cout<<"A conta n?o tem saldo o suficiente!"<<endl;
                aux++;
            }else{
                x[j].saldo -= val; 
                aux++;
            }
        }
    }
    if(aux <= 0){
        cout<<"N?o existe esta conta!"<<endl;
        getchar();
    }
}
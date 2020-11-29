#include<iostream>

using namespace std;
#define NUM 10

int Contas[NUM];
float Saldo[NUM];

void deposito(int cod, int val){
    int cont=0;
    for (int j = 0; j < NUM; j++){
        if(cod == Contas[j]){
            Saldo[j]+= val;
            cont=1;
            cout<<"Deposito realizado com sucesso!\n";
        }
    }
    if(cont == 0){
        cout<<"\n\nConta n�o encontrada!\n\n\n";
    }
}
void saque(int cod, int val){
    int cont=0;
    for (int j = 0; j < NUM; j++){
        if(cod == Contas[j]){
            if(val > Saldo[j]){
                cout<<"Saldo insuficiente!";
                cont=1;
                break;
            }
            Saldo[j] -= val;
            cont=1;
            cout<<"Saque realizado com sucesso!\n";
        }
    }
    if(cont == 0){
        cout<<"\n\nConta n�o encontrada!\n\n\n";
    }
}
void ativBanc(){
    int totSaldo = 0;
    for (int j = 0; j < NUM; j++){
        totSaldo += Saldo[j];
    }
    cout<<"Ativo Banc�rio: "<<totSaldo;
}
main(){
    setlocale(LC_ALL, "portuguese-brazilian");
    for (int l = 0; l < NUM; l++){
        cout<<"Digite o n�mero da conta: ";
        cin>>Contas[l];
        for (int j = 0; j <l;j++){
            if(Contas[l] == Contas[j]){
                cout<<"Esta conta j� existe!\n";
                l--;
                break;
            }
        }
    }
    for (int l = 0; l < NUM; l++){
        cout<<"Digite o saldo da conta "<<Contas[l]<<": ";
        cin>>Saldo[l];

    }
    int op=0;
    while(op != 4){
    int cod,val;
    cout<<"\n\n Painel de Op��es: \n";
    cout<<"1 - Efetuar dep�sito\n";
    cout<<"2 - Efetuar saque\n";
    cout<<"3 - Ativo Banc�rio\n";
    cout<<"4 - Finalizar o programa\n";
    cin>>op;
        switch(op){
            case 1:
                cout<<"\nDigite o c�digo da conta: ";
                cin>>cod;
                cout<<"\nDigite o valor a ser depositado: ";
                cin>>val;
                deposito(cod,val);
                break;
            case 2:
                cout<<"\nDigite o c�digo da conta: ";
                cin>>cod;
                cout<<"\nDigite o valor a ser sacado: ";
                cin>>val;
                saque(cod, val);
                break;
            case 3:
                ativBanc();
                break;
            case 4:
                cout<<"Fim do programa!";
                break;
            default:
                cout<<"N�o temos est� op��o!";
                break;
        }
    }

    for (int l = 0; l < NUM; l++){
        cout<<"\n\nConta: "<<Contas[l]<<" com um saldo de: R$"<<Saldo[l];
    }
    cout<<"\n\n";
}





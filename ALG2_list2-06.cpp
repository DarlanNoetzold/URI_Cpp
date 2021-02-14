#include <bits/stdc++.h>

using namespace std;

void imprimeIniciais(string nome){
    cout<<"\nSuas iniciais: ";
    for(int i = 0; i <= nome.size(); i++){
        if(isupper(nome[i])){
            cout<<nome[i];
        }
    }
}

void validaCPF(string cpf){
    int cont=0;
    cout<<"\n";
    for(int i = 0; i < cpf.size(); i++){
        if(isdigit(cpf[i])){
            cont++;
        }else{
            cout<<"\nSeu CPF tem caracteres nao aceitos!";
            break;
        }
    }
    if(cont == 11){
        cout<<"\nSeu CPF: ";
        for(int i = 0; i <= cpf.size(); i++){
            if(i == 3 || i == 6){
                cout<<"."<<cpf[i];
            }else if(i == 9){
                cout<<"-"<<cpf[i];
            }else{
                cout<<cpf[i];
            }
        }
        cout<<"\n";
    }else{
        cout<<"\nSeu CPF nao tem 11 digitos!\n\n";
    }
}

void validaData(string dia, string mes, string ano){
    if(dia.size() == 1){
        dia = "0" + dia;
    }
    if(mes.size() == 1){
        mes = "0" + mes;
    }
    cout<<"\nSua data de nascimento: "<<dia<<"/"<<mes<<"/"<<ano<<"\n\n\n";
}

main(){
    string nome, cpf, dia, mes, ano;
    cout<<"Digite seu nome: ";
    getline(cin, nome);
    cout<<"Digite seu CPF(11 digitos, apenas numeros): ";
    getline(cin, cpf);
    cout<<"Digite o dia do seu nascimento: ";
    getline(cin, dia);
    cout<<"Digite o mes do seu nascimento: ";
    getline(cin, mes);
    cout<<"Digite o ano do seu nascimento: ";
    getline(cin, ano);
    
    imprimeIniciais(nome);

    validaCPF(cpf);

    validaData(dia,mes,ano);

}
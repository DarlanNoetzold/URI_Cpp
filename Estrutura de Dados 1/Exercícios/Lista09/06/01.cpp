#include <bits/stdc++.h>
using namespace std;

#include "lista.hpp"


void naoSegura(No **senhas, No **senhaSeg){

}

main(){
    setlocale(LC_ALL, "Portuguese");

    No* senhas;
    inicializaL(&senhas);
    char op;
    string senha;
    do{
        cout<<"Digite a senha: ";
        cin>>senha;
        insereL(&senhas, senha);
        cout<<"Deseja sair? (s-n)";
        cin>>op;
    }while(op == 's' || op =='S');
    

    

    destroiL(&senhas);
}

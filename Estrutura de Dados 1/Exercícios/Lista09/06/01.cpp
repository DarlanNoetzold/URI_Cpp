#include <bits/stdc++.h>
using namespace std;

#include "lista.hpp"


void naoSegura(No **senhas, No **senhaNaoSeg){
    string valor;
    inicializaL(&(*senhaNaoSeg));
    while(removeIni(&(*senhas), &valor)){
        cout<<buscaL(&(*senhaNaoSeg), valor)<<endl;
        if(buscaL(&(*senhaNaoSeg), valor) != ""){
            insereL(&(*senhaNaoSeg), valor);
        }
        if(valor.length() <= 4){
            insereL(&(*senhaNaoSeg), valor);
        }
    }
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
        cout<<"Deseja sair? (s-n) ";
        cin>>op;
    }while(op == 's' || op == 'S');
    
    No* senhaNaoSeg;
    inicializaL(&senhaNaoSeg);
    naoSegura(&senhas, &senhaNaoSeg);
    cout<<"Senhas nao seguras: "<<endl;
    mostraL(&senhaNaoSeg);
    destroiL(&senhas);
}

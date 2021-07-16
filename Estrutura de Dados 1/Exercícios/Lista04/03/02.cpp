#include <bits/stdc++.h>
using namespace std;

#include "pilha.hpp"
#include "filacircular.hpp"

main(){
    setlocale(LC_ALL, "Portuguese");
    
    Pilha p1;
    Fila f1;
    string str, strP, strF;
    char valor;
    cout << "Digite uma string: ";
    cin >> str;

    inicializa(&p1, str.size());
    inicializaF(&f1, str.size());

    for(int i=0; i<str.size(); i++){
        empilhar(&p1, str.at(i) );
    }

    for(int i=0; i <str.size(); i++){
        enfileiraF(&f1, str.at(i));
    }


    for(int i=0; i<str.size(); i++){
        if(desempilhar(&p1, &valor ) )
            strP += valor;
    }

    for(int i=0; i<str.size(); i++){
        if(desenfileiraF(&f1, &valor ) )
            strF += valor;
    }

    if(strP == strF){
        cout<<"Eh palidromo! "<<endl;
    }
    cout<<"Palavra desempilhada: "<<strP<<endl;
    cout<<"Palavra desenfilerada: "<<strF<<endl;

}



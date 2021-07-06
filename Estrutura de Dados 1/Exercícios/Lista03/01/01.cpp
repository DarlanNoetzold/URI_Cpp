#include <bits/stdc++.h>
using namespace std;

#include "pilha.hpp"

main(){
    setlocale(LC_ALL, "Portuguese");
    
    Pilha p1;
    string str, str2;
    char valor;
    cout << "Digite uma string: ";
    cin >> str;

    inicializa(&p1, str.size());

    for(int i=0; i<str.size(); i++){
        empilhar(&p1, str.at(i) );
    }


    for(int i=0; i<str.size(); i++){

        if(desempilhar(&p1, &valor ) )
            str2 += valor;
    }


    cout<<"Inverso da palavra: "<<str2<<endl;

}



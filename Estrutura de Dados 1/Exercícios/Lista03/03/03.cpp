#include <bits/stdc++.h>
using namespace std;

#include "pilha-dinamica.hpp"

main(){
    setlocale(LC_ALL, "Portuguese");

    Pilha p1;

    bool correto = true;

    string str;
    char c, aux;

    cout<<"Digite a String: ";
    cin>>str;

    inicializa(&p1);

    for(int i=0; i<str.size(); i++){
        c = str.at(i);
        if(c == '(' || c == '[' || c == '{'){
            empilhar(&p1, c);
        }else if( c == ')' || c == ']' || c == '}'){
            if(vazia(&p1)){
                correto = false;
                break;
            }else{
                desempilhar(&p1, &aux);
            }
        }

    }

    if(!correto || !vazia(&p1))
        cout << "Os parênteses NÃO foram agrupados corretamente!" << endl;
    else
        cout << "Os parênteses foram agrupados corretamente!" << endl;


    desalocar(&p1);
    
}

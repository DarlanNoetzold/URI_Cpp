#include <bits/stdc++.h>
using namespace std;

#include "pilha.hpp"

main(){
    setlocale(LC_ALL, "Portuguese");

    char str[50];
    cout<<"Digite a frase: ";
    cin>>str;

    Pilha p1;
    Pilha p2;
    inicializa(&p1, 50);
    inicializa(&p2, 50);

    for(int i = 0; i <= strlen(str); i++){
        if(isdigit(str[i])){
            empilhar(&p2, str[i]);
        }if(isalpha(str[i])){
            empilhar(&p1, str[i]);
        }
    }
    mostrar(&p1);
    mostrar(&p2);


    desalocar(&p1);
    desalocar(&p2);
}

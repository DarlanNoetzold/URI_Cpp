#include <bits/stdc++.h>
using namespace std;

#include "pilha.hpp"

main(){
    setlocale(LC_ALL, "Portuguese");

    char str[50], str2[50], valor;
    cout<<"Digite a frase: ";
    fflush(stdin);
    cin>>str;
    fflush(stdin);

    Pilha p1;
    inicializa(&p1, 50);

    for(int i = 0; str[i] != '\0'; i++){
        empilhar(&p1, str[i]);
    }
    mostrar(&p1);
    for(int i = 0; str[i] != '\0'; i++){
        desempilhar(&p1, &valor);
        if(isalpha(valor))
            str2[i] = valor;
    }


    cout<<str<<":"<<str2<<endl;
    if(str == str2){
        cout<<"Eh palidromo"<<endl;
    }else{
        cout<<"Nao eh palindromo"<<endl;
    }

    desalocar(&p1);

}

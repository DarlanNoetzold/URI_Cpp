#include <bits/stdc++.h>
using namespace std;

#include "pilha.hpp"

main(){
    setlocale(LC_ALL, "Portuguese");

    char str[23], str2[23], valor;
    cout<<"Digite a frase: ";
    fflush(stdin);
    cin>>str;
    fflush(stdin);

    Pilha p1;
    inicializa(&p1, 23);

    for(int i = 0; str[i] != '\0'; i++){
        empilhar(&p1, str[i]);
    }
    mostrar(&p1);
    for(int i = 0; str[i] != '\0'; i++){
        desempilhar(&p1, &valor);
        cout<<valor<<endl;
        str2[i] = valor;
    }


    cout<<str<<":"<<str2<<endl;
    int val = strcmp(str,str2);
    if(val == 0){
        cout<<"Eh palidromo"<<endl;
    }else{
        cout<<"Nao eh palindromo"<<endl;
    }

    desalocar(&p1);

}

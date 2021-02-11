#include <bits/stdc++.h>

using namespace std;

main(){
    string frase, nome, idade, telefone, rua;
    cout<<"Digite seu nome: ";
    getline(cin, nome);
    cout<<"Digite sua idade: ";
    getline(cin, idade);
    cout<<"Digite seu telefone: ";
    getline(cin, telefone);
    cout<<"Digite sua rua: ";
    getline(cin, rua);
    frase = "Seu nome eh " + nome + ", voce tem " + idade + " anos, mora na rua " + rua + " e seu telefone eh " + telefone;

    cout<<frase;
    cout<<"\n\n\n";
}
#include<bits/stdc++.h>
using namespace std;

struct pessoa {
    string nome;
    string numero;
};
main(){
    pessoa pessoas[100];
    int op=0;
    int aux=0;
    ofstream escreve("pessoas.txt",ios::app);
    while(op==0){
        fflush(stdin);
        cout << "\nInforme o nome: ";
        getline(cin, pessoas[aux].nome);
        fflush(stdin);
        escreve << pessoas[aux].nome << ";";
        cout << "\nInforme o numero: ";
        getline(cin, pessoas[aux].numero);
        fflush(stdin);
        escreve << pessoas[aux].numero << "\n";
        aux++;

        cout<<"\nDeseja cadastrar mais pessoas: sim(0) nao(1) ";
        cin>>op;
    }

    for(int i =0;i<aux;i++){
        cout<<"Nome: "<<pessoas[i].nome<<endl;
        cout<<"Numero: "<<pessoas[i].numero<<endl;
    }
}

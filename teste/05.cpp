#include<bits/stdc++.h>
using namespace std;

main(){
    char nome[100];
    float media, soma = 0;
    int x, cont = 0;

    ifstream leitura;
    leitura.open("nomes.txt", ios::in);

    x = 1;
    while(!leitura.eof())
    {
        leitura.getline(nome, 99, ';');
        if(x == 2)
        {
            soma += atof(nome);
            cout<<"teste: "<<soma<<endl;
            cout << nome << endl;
            x = 0;
            cont++;
        }
        x++;
    }
    cout << "\nSoma: " << soma << endl;
    media = soma / cont;
    cout << "\nMedia: " << media << endl;
    leitura.close();
}
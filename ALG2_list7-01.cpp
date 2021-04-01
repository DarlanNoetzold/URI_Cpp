#include <bits/stdc++.h>
using namespace std;

main(){
    char texto[100];
    char *ptexto;
    int maius=0, minus=0;
    ptexto = texto;
    cout << "Digite um texto qualquer: ";
    gets(texto);
    while(*ptexto){
        if(isupper(*ptexto)){
            maius++;
        }if(!(isupper(*ptexto))){
            minus++;
        }
        *ptexto = toupper(*ptexto);
        ptexto++;
    }

    cout<<endl;
    int i=0;
    while(i <= strlen(texto)){
        cout<<*ptexto;
        ptexto--;
        i++;
    }

    cout<<endl;
    cout<<"Existem "<<maius<<" letras maiusuculas e "<<minus<<" minusculas"<<endl;
    cout<<"O texto eh: "<<texto<<endl;

}


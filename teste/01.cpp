#include<bits/stdc++.h>

using namespace std;

void converte(char *s){
    int i =0;
    while(s[i] != '\0'){
        s[i] = toupper(s[i]);
        i++;
    }
}

main(){
    char texto[100];
    cout<<"Digite um texto qualquer";
    gets(texto);
    converte(texto);
    cout<<texto;
}


#include <bits/stdc++.h>

using namespace std;

main(){
    char texto[50];
    cout<<"Digite seu texto: ";
    gets(texto);
    cout<<"\nTexto invertido e sem espaco: \n";
    cout.width(30);
    cout.fill('_');
    cout<<"\n";
    for(int i = strlen(texto); i+1 > 0; i--){
        if(texto[i] == ' ')
            continue;
        else
            cout<<texto[i];
    }
    cout<<"\n\n\n";
}
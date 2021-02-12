#include <bits/stdc++.h>

using namespace std;

main(){
    char texto[100];
    char ch;

    cout<<"Digite o texto: ";
    gets(texto);
    cout<<"Digite o caracter: ";
    cin>>ch;

    cout<<texto;

    cout<<"\n";
    for(int i = 0; i<strlen(texto); i++){
        if(texto[i] != ch){
            cout<<texto[i];
        }
            
    }
}
#include <bits/stdc++.h>
using namespace std;

main(){
    char texto1[100];
    char *ptexto1 = texto1;
    char texto2[100];
    char *ptexto2 = texto2;
    char texto3[100];
    char *ptexto3 = texto3;
    cout << "Digite um texto qualquer: ";
    gets(texto1);
    int i = 0;
    while(i <= strlen(texto1)){
        if(!(isspace(*ptexto1))){
            *ptexto2 = toupper(*ptexto1);
            *ptexto3 = toupper(*ptexto1);
            ptexto3++;
            ptexto2++;
        }
        
        ptexto1++;
        i++;
    }
    reverse(texto2, texto2+ strlen(texto2));

    if(!(strcmp(texto3, texto2))){
        cout<<"Eh palindromo"<<endl;
    }else{
        cout<<"Nao eh palindromo"<<endl;
    }


}


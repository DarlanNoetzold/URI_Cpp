#include <bits/stdc++.h>

using namespace std;

main(){
    string texto;
    int vogais=0, consoantes=0, caract=0, num=0, espac=0;
    cout<<"Digite o texto: ";
    getline(cin, texto);

    for(int i = 0; i < texto.size(); i++){
        if(!isalnum(texto[i])){
            if(isspace(texto[i]))
                espac++;
            else
                caract++;
        }else if(isalpha(texto[i])){
            if(texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u' || texto[i] == 'A' || texto[i] == 'E' || texto[i] == 'I' || texto[i] == 'O' || texto[i] == 'U')
                vogais++;
            else
                consoantes++;
        }else if(isdigit(texto[i])) 
            num++;
    }
    cout<<"\nVogais: \t"<<vogais;
    cout<<"\nConsoantes: \t"<<consoantes;
    cout<<"\nNumeros: \t"<<num;
    cout<<"\nEspacos: \t"<<espac;
    cout<<"\nCaracteres: \t"<<caract;
    cout<<"\nTotal:   \t"<<texto.size();
}
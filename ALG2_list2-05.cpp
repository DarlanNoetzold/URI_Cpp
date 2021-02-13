#include <bits/stdc++.h>

using namespace std;

main(){
    string texto1,texto2,texto3, menor, meio, maior;

    cout<<"Digite o primeiro texto: ";
    getline(cin, texto1);
    cout<<"Digite o segundo texto: ";
    getline(cin, texto2);
    cout<<"Digite o terceiro texto: ";
    getline(cin, texto3);

    if(texto1.size() >= texto2.size() && texto1.size() >= texto3.size()){
        maior = texto1;
        if(texto2.size() >= texto3.size()){
            meio = texto2;
            menor = texto3;
        }else{
            meio = texto3;
            menor = texto2;
        }
    }else if(texto2.size() >= texto1.size() && texto2.size() >= texto3.size()){
        maior = texto2;
        if(texto1.size() >= texto3.size()){
            meio = texto1;
            menor = texto3;
        }else{
            meio = texto3;
            menor = texto1;
        }
    }else{
        maior = texto3;
        if(texto1.size() >= texto2.size()){
            meio = texto1;
            menor = texto2;
        }else{
            meio = texto2;
            menor = texto1;
        }
    }
    for(float i = 0; i <= maior.size(); i++){
        maior[i] = toupper(maior[i]);
    }
    for(int i = 0; i <= meio.size(); i++){
        meio[i] = toupper(meio[i]);
    }
    for(int i = 0; i <= menor.size(); i++){
        menor[i] = toupper(menor[i]);
    }
    
    cout<<"\n\nPrimeiro texto: \n"<<maior<<"\n\nSegundo texto: \n"<<meio<<"\n\nTerceiro texto: \n"<< menor<<"\n\n";
}
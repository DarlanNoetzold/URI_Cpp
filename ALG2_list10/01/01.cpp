#include<bits/stdc++.h>
using namespace std;
main(){
    char cidade[30];
    cout<<"Digite o nome de uma cidade: ";
    cin>>cidade;
    int aux=0;
    ifstream ler("cidade.txt",ios::in);
    char numChar[30];
    while(!ler.fail()){
        ler.getline(numChar,30, '\n');
        if(!strcmp(numChar, cidade)){
            cout<<"A cidade ja existe!";
            aux++;
        }
    }
    if(aux==0){
        cout<<"Acidade foi adicionada!"<<endl;
        ofstream escreve("cidade.txt", ios::app);
        escreve << cidade << '\n';
    }
}

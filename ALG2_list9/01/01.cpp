#include <bits/stdc++.h>
using namespace std;

main(){
    char x;
    string arquivo;
    cout<<"Digite o nome do arquivo ou diretorio (com a extencao no fim): ";
    cin>>arquivo;
    fflush(stdin);
    int aux=0;
    ifstream ler(arquivo,ios::in);
    while(ler.get(x)){
        cout << x;
        aux++;
    }
    cout<<"\nForam lidos "<<aux<<" caracteres."<<endl;
    
}
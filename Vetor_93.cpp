#include<iostream>
using namespace std;
#define NUM 20
main(){
    setlocale(LC_ALL, "portuguese-brazilian");
    int v[NUM],aux;

    for(int i =0;i<NUM;i++){
        cout<<"Digite um valor: ";
        cin>>v[i];
    }
    for(int i = 0;i<(NUM/2);i++){
        aux = v[i];
        v[i] = v[10 + i];
        v[10 + i] = aux;
    }

    for(int i = 0; i<NUM;i++){
        cout<<v[i]<<"\n";;
    }

}

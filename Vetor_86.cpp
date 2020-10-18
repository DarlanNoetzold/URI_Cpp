#include<iostream>

using namespace std;

main(){
    setlocale(LC_ALL, "portuguese-brazilian");
    int v[10],contNeg=0;

    for(int i =0;i<10;i++){
        cout<<"Digite um número: ";
        cin>>v[i];
        if(v[i] < 0){
            contNeg++;
        }
    }
    for(int i = 0;i<10;i++){
        cout<<"Número: "<<v[i]<<"\n";
    }
    cout<<"Existem "<<contNeg<<" núemros negativos no vetor.";

}

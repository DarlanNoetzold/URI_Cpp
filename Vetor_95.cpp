
#include<iostream>
using namespace std;
#define NUM 10

main(){
    int A[NUM],B[NUM],Y[NUM],cont=0;

    for(int i = 0; i < NUM; i++){
        cout<<"Digite um valor para o vetor A: ";
        cin>>A[i];
        cout<<"Digite um valor para o vetor B: ";
        cin>>B[i];
    }
    for(int i = 0; i < NUM; i++){
        cout<<"\nValor "<<i<<" de A: "<<A[i];
        cout<<"\nValor "<<i<<" de B: "<<B[i];
    }
    for(int i = 0; i < NUM; i++){
        for(int j = 0; j < NUM; j++){
            if(A[i] == B[j]){
                Y[cont] = A[i];
                cont++;
            }
        }
    }
    cout<<"\n";
    for(int i = 0; i < cont; i++){
        cout<<"Valor de interseção de Y: "<<Y[i]<<"\n";
    }
}

#include<iostream>
using namespace std;
#define NUM 10

main(){
    int A[NUM],B[NUM],Y[NUM*2];

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
        Y[i] = A[i];
    }
    for(int i = 0; i < NUM; i++){
        Y[i+NUM] = B[i];
    }
    cout<<"\n";
    for(int i = 0; i < (NUM*2); i++){
        cout<<"Valor de Y: "<<Y[i]<<"\n";
    }
}

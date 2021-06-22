#include <iostream>
#include <ctime>
using namespace std;

void preencherVetor(int tam, int *vet){
    int i = 0;
    for(i; i < tam; i++){
        cout<<"\nDigite o valor "<<i<<": ";
        cin>>*vet;
        vet++;
    }
    vet -= i;
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));

    int tam;
    double soma=0.0;
    cout<<"Digite o tamanho do vetor: ";
    cin>>tam;

    int *vet = new int[tam];

    preencherVetor(tam, vet);

    for(int i = 0; i< tam; i++){
        cout<<"Valor "<<i<<": "<<vet[i]<<"\n";
    }
    delete[] vet;

}
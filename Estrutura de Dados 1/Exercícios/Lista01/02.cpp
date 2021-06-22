#include <iostream>
#include <ctime>
using namespace std;


int main(){
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));

    int tam;
    double soma=0.0;
    cout<<"Digite a quantidade de alunos: ";
    cin>>tam;

    double *vet = new double[tam];

    for(int i=0; i < tam; i++){
        cout<<"\nDigite a nota do aluno "<<i<<": ";
        cin>>vet[i];

        soma += vet[i];
    }

    for(int i = 0; i< tam; i++){
        cout<<"Aluno "<<i<<": "<<vet[i]<<"\n";
    }
    delete[] vet;

    cout<<"A media eh igual a: "<< soma/tam;
}
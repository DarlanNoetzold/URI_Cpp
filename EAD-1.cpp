#include<iostream>

using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    double tempo, velMed;
    double dist, litros;
    cout<<"Tempo: ";
    cin>>tempo;

    cout<<"Velocidade M�dia: ";
    cin>>velMed;

    dist = tempo * velMed;
    litros = dist/12;

    cout<<"Litros gastos: "<< litros;
}

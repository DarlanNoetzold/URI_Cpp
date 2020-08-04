#include <iostream>

using namespace std;

int main(){
    int cod;
    double peso, newPes;
    cout<<"Escreva o peso: ";
    cin>>peso;
    cout<<"Escreva o codigo: ";
    cin>>cod;

    switch(cod){
    case 1:
        newPes = (peso) * 0.37;
        cout<<"Peso em Mercurio: "<<newPes;
        break;
    case 2:
        newPes = (peso) * 0.88;
        cout<<"Peso em Vênus: "<<newPes;
        break;
    case 3:
        newPes = (peso) * 0.38;
        cout<<"Peso em Marte: "<<newPes;
        break;
    case 4:
        newPes = (peso) * 2.64;
        cout<<"Peso em Jupiter: "<<newPes;
        break;
    case 5:
        newPes = (peso) * 1.15;
        cout<<"Peso em Saturno: "<<newPes;
        break;
    case 6:
        newPes = (peso) * 1.17;
        cout<<"Peso em Urano: "<<newPes;
        break;

    }
}

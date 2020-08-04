#include <iostream>
#include <iomanip>

using namespace std;

main(){
    int op,i=0;
    cout<<fixed<<Setprecision(2);
    cout<<"1 - Media Aritmetica"<<endl;
    cout<<"2 - Media Ponderada"<<endl;
    cout<<"3 - Sair"<<endl;
    cin>>op;
    switch(op){
    case 1:
        {
        double num1,num2,med;
        cout<<"Digite os numeros: ";
        cin>>num1>>num2;
        med = (num1+num2)/2.0;
        cout<<"Media igual a: "<<med;
        }
        break;
    case 2:
        {
        double num,pes,medp=0.0,pesos=0.0, media;
        while(i < 3){
            cout<<"Digite o numero e seu peso: "<<endl;
            cin>>num>>pes;
            pesos += pes;
            medp += (num*pes);
            i++;
        }
        media = medp/pesos;
        cout<<media;
        }
        break;
    case 3:
        {
        cout<<"saindo";
        }
        break;
    default:
        cout<<"Opcao invalida"<<endl;
    }
}


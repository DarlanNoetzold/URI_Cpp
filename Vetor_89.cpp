#include<iostream>
using namespace std;
#define NUM 12
main(){
    setlocale(LC_ALL, "portuguese-brazilian");
    int maior,menor,contNeg=0;
    float media = 0.0, temp[NUM];

    for(int i = 0; i < NUM;i++){
        cout<<"Digite a temperatura: ";
        cin>>temp[i];
        if(temp[i] < 0){
            contNeg++;
        }
        if(i == 0 || temp[i] > maior){
            maior = temp[i];
        }
        if(i == 0 || temp[i] < menor){
            menor = temp[i];
        }
        media += temp[i];
    }
    for(int i = 0;i<NUM;i++){
        temp[i] = temp[i] + (temp[i]*0.03);

        cout<<"Valor com mais 3%: "<<temp[i]<<"\n";
    }

    cout<<"Existem "<<contNeg<<" números negativos.\n";
    cout<<"O maior valor é: "<<maior<<", e o menor valor é: "<<menor<<".\n";
    cout<<"A média dos valores é igual a: "<< media/12.0;

}

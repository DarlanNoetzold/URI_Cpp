#include<bits/stdc++.h>
using namespace std;
#define NUM 12
main(){
    setlocale(LC_ALL, "portuguese-brazilian");
    int vmax[NUM],vmin[NUM], maior, menor,soma=0,neg=0,mesesMaiores=0,mesMa,mesMe;
    float media;

    for (int i = 0; i < NUM; i++){
        cout<<"Digite a temeperatura máxima do mês "<<i+1<<" : ";
        cin>>vmax[i];
        cout<<"Digite a temeperatura mínima do mês "<<i+1<<" : ";
        cin>>vmin[i];
        if(i == 0 || vmax[i] > maior){
            maior = vmax[i];
            mesMa = i;
        }
        if(i == 0 || vmin[i] < menor){
            menor = vmin[i];
            mesMe = i;
        }
        soma = soma + vmax[i];
        if(vmin[i] <0){
            neg++;
        }
    }
    media = soma/12.0;
    cout<<"\nMêses                    | 01 | 02 | 03 | 04 | 05 | 06 | 07 | 08 | 09 | 10 | 11 | 12 | Ano |";
    cout<<"\nTemperaturas Máximas:   ";
    for(int i = 0; i < NUM; i++){
        if(vmax[i] > media){
            mesesMaiores++;
        }
        cout<<" | "<< vmax[i];
    }
    cout<<" | "<<maior<<" no mês: "<<mesMa+1<<"|";
    cout<<"\nTemperaturas Mínimas:   ";
    for(int i = 0; i < NUM; i++){
        cout<<" | "<< vmin[i];
    }
    cout<<" | "<<menor<<" no mês: "<<mesMe+1<<"|";
    cout<<"\nAmplitude Térmica:      ";
    for(int i = 0; i <NUM;i++){
        cout<<" | "<<vmax[i] - vmin[i];
    }
    cout<<" | ";

    cout<<"\nTiveram "<<neg<<" temperaturas negativas.\n";
    cout<<"\nA média das temperaturas máximas foi: "<< media<< " sendo que "<< mesesMaiores<< " meses tiveram a temperatura maior que a média.\n\n\n";
}

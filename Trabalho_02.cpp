#include<bits/stdc++.h>
using namespace std;
#define NUM 12
main(){
    setlocale(LC_ALL, "portuguese-brazilian");
    int vmax[NUM],vmin[NUM], maior, menor,soma=0,neg=0,mesesMaiores=0,mesMa,mesMe;
    float media;

    for (int i = 0; i < NUM; i++){
        cout<<"Digite a temeperatura m�xima do m�s "<<i+1<<" : ";
        cin>>vmax[i];
        cout<<"Digite a temeperatura m�nima do m�s "<<i+1<<" : ";
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
    cout<<"\nM�ses                    | 01 | 02 | 03 | 04 | 05 | 06 | 07 | 08 | 09 | 10 | 11 | 12 | Ano |";
    cout<<"\nTemperaturas M�ximas:   ";
    for(int i = 0; i < NUM; i++){
        if(vmax[i] > media){
            mesesMaiores++;
        }
        cout<<" | "<< vmax[i];
    }
    cout<<" | "<<maior<<" no m�s: "<<mesMa+1<<"|";
    cout<<"\nTemperaturas M�nimas:   ";
    for(int i = 0; i < NUM; i++){
        cout<<" | "<< vmin[i];
    }
    cout<<" | "<<menor<<" no m�s: "<<mesMe+1<<"|";
    cout<<"\nAmplitude T�rmica:      ";
    for(int i = 0; i <NUM;i++){
        cout<<" | "<<vmax[i] - vmin[i];
    }
    cout<<" | ";

    cout<<"\nTiveram "<<neg<<" temperaturas negativas.\n";
    cout<<"\nA m�dia das temperaturas m�ximas foi: "<< media<< " sendo que "<< mesesMaiores<< " meses tiveram a temperatura maior que a m�dia.\n\n\n";
}

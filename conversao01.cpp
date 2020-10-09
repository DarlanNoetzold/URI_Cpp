#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
void binDec(){
        int bin=0, dec=0,i;
        cout<<"\nNumero binario: \n";
        cin>>bin;
        for(i = 0; bin > 0; i++){
            dec = dec + (pow(2, i) * (bin % 10));
            bin = bin / 10;
        }
        cout<<"\nEquivalente em decimal:\n"<< dec;
    }
    void decBin(){
       int num, aux;
       int bin[8];

       cout<<"Digite o número (base decimal) para ser convertido: ";
       cin>>num;

       for(aux = 7; aux >= 0; aux--){
          if (num % 2 == 0) bin[aux] = 0;
          else bin[aux] = 1;

          num = num / 2;
       }

       for(aux = 0; aux < 8; aux++) cout<<bin[aux];

       cout<<"\n";
    }
int main(){
    setlocale(LC_ALL,"portuguese");
    int cod;
    cout<<"Digite 1 para conversão de binario para decimal e 2 para decimal para binário: ";
    cin>>cod;

    if(cod == 1) binDec();
    else if(cod == 2) decBin();
}

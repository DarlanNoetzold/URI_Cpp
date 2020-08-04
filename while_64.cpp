#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <stdio.h>
#include <ctype.h>

using namespace std;

main(){
    char estadoCivil;
    int idade, quant=0, i=0,contCas=0,contSol=0,contViu=0,contDes=0;
    cout<<"Quantas pessoas? ";
    cin>>quant;

    while(i < quant){
        cout<<"Digite a idade: "<<endl;
        cin>>idade;
        cout<<"Digite o estado civil: "<<endl;
        cin>>estadoCivil;
        estadoCivil = toupper(estadoCivil);
        if(estadoCivil == 'C'){
            contCas++;
        }else if(estadoCivil == 'S'){
            contSol++;
        }else if(estadoCivil == 'V'){
            contViu++;
        }else if(estadoCivil == 'D'){
            contDes++;
        }
        i++;
    }
    cout<<contCas<<" pessoas casadas"<<endl;
    cout<<contSol<<" pessoas solteiras"<<endl;
    cout<<(contViu*100)/quant<<"% de pessoas viúvas"<<endl;
    cout<<(contDes*100)/quant<<"% de pessoas desquitadas"<<endl;
}


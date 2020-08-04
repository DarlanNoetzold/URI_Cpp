#include<iostream>

using namespace std;

main(){
    double idade, peso, soma1=0,soma2=0,soma3=0,soma4=0,cont1=0,cont2=0,cont3=0,cont4=0;
    for(int i=0; i<7;i++){
       cout<<"Idade: "<<endl;
       cin>>idade;
       cout<<"Peso: "<<endl;
       cin>>peso;
       if(idade >= 1 && idade <= 10){
            soma1 = peso + soma1;
            cont1++;
       }else if(idade <= 20){
           soma2 = peso + soma2;
           cont2++;
       }else if(idade <= 30){
            soma3 = peso + soma3;
            cont3++;
       }else{
            soma4 = peso + soma4;
            cont4++;
       }
    }
    double media1= soma1/cont1;
    double media2= soma2/cont2;
    double media3= soma3/cont3;
    double media4= soma4/cont4;

    cout<<"Media da faixa etaria 1: "<<media1<<endl;
    cout<<"Media da faixa etaria 2: "<<media2<<endl;
    cout<<"Media da faixa etaria 3: "<<media3<<endl;
    cout<<"Media da faixa etaria 4: "<<media4<<endl;


}




#include<iostream>
using namespace std;

main(){
    int countl = 6, count2 =2, trabY = 7, varX = 7;
    while(countl <10){
        varX = varX + 5;       //12, 17
        countl = countl +2;    //8,10
        while (count2 < 10){

            trabY = trabY + 2;    //9,11,13,15
            count2 = count2 + 2;  //4,6,8,10
        }
    }
    cout<<"\n traby: "<<trabY<<"\n  varx: "<<varX;
    cout<<"\n count2: "<<count2<<"\n count1: "<<countl;
}

Antes do primeiro while:
    trabY = 7; varX = 7; count1 = 6; count2 = 2;
    Primeiro While:
        Primeiro Loop:
            varX = 12;
            count1 = 8;
            Segundo While:
                Primeiro Loop:
                    trabY = 9;
                    count2 = 4;
                Segundo Loop:
                    trabY = 11;
                    count2 = 6;
                Terceiro Loop:
                    trabY = 13;
                    count2 = 8;
                Quarto Loop:
                    trabY = 15;
                    count2 = 10;
        Segundo Loop:
            varX = 17;
            count1: 10;
            obs: Como count2 já esta igual a 10 e count1 também, ambos os while's chegaram ao fim;
Situação final:
    varX = 17;
    count1 = 10;
    trabY = 15;
    count2 = 10;




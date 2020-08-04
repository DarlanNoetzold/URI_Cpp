#include <iostream>
#include <iomanip>

using namespace std;

main(){
    int a=90000,b=200000,mes;

    while(a < b){
        mes++;
        a = a * 1.031;
        b = b * 1.015;
    }
    cout<<fixed<<setprecision(2);
    cout<<mes<<" meses para A alcancar B, em que A tem uma populacao de: "<<a<<" e B:"<<b;

}


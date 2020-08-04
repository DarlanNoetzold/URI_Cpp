#include<iostream>
#include<iomanip>
using namespace std;

main(){
    int num,soma=0;
    double media;
    for(int i=0; i<10;i++){
        cin>>num;
        soma += num;
    }
    media = soma/10.0;
    cout<<fixed<<setprecision(2);
    cout<<"A soma e igual a: "<<soma<<". A media e igual a: "<<media<<endl;
}

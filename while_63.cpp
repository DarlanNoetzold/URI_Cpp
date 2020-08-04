#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

main(){
    int i=1, maior=0,menor=0, tentativa;
    int r = rand() % 100;
    while(i<6){
        cout<<"Tentativa número "<<i<<": ";
        cin>>tentativa;
        if(tentativa == r){
            cout<<"Parabens, voce acertou"<<endl;
            break;
        }else{
            cout<<"Tente novamente"<<endl;
            if(tentativa > r){
                cout<<"O número sorteado e menor"<<endl;
            }else{
                cout<<"O número sorteado e maior"<<endl;
            }
        }
        i++;
    }
    cout<<"O numero sorteado foi: "<< r;


}

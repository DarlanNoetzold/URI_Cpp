#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

main(){
    int i=0, maior=0,menor=0, soma=0;
    while(i<5){
        int r = (rand() % 100) + 1;
        if(i == 0){
            maior = r;
            menor = r;
        }else if(r > maior){
            maior = r;
        }
        if(r < menor){
            menor = r;
        }
        soma += r;
        i++;
    }
    cout<<"O maior numero foi: "<<maior<<endl;
    cout<<"O menor numero foi: "<<menor<<endl;
    cout<<"A soma foi: "<<soma<<endl;

}

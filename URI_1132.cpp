#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int x,y,aux,soma=0;
    cin>>x;
    cin>>y;
    if(y>x){
        aux = y;
        y = x;
        x = aux;
    }
    while(x>=y){
        if(y%13!=0){
            soma += y;
        }
        y++;
    }
    cout<<soma<<endl;
}


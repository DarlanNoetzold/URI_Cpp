#include <iostream>

using namespace std;

main(){
    int x,y=0,soma=0,cont=0;
    cin>>x;
    while(y<=x){
        cin>>y;
    }
    while(soma<= y){
        soma +=x;
        cont++;
        x++;
    }
    cout<<cont<<endl;
}

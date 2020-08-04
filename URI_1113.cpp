#include <iostream>

using namespace std;

int main(){
    int x,y;
    while(true){
        cin>>x>>y;
        if(x>y){
            cout<<"Decrescente"<<endl;
        }else if(y>x){
            cout<<"Crescente"<<endl;
        }else{
            break;
        }
    }
}

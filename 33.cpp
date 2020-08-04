#include <iostream>

using namespace std;

int main(){
    int a;
    int b;
    cin>> a>>b;
    if(a > b){
        cout<<a<<" eh maior";
    }else if(b > a){
        cout <<b<<" eh maior";
    }else{
        cout<<a<<" e "<< b<< " são iguais";
    }

}

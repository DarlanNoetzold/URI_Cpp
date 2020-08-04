#include <iostream>

using namespace std;

int main(){
    int a;
    int b;
    int c;
    cin>>a>>b>>c;
    if(a > b && a > c){
        cout << a<<" eh maior";
    }else if(b > a && b > c){
        cout << b<<" eh maior";
    } else{
        cout<< c<<"eh maior";
    }
}


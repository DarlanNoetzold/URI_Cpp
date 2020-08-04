#include <iostream>

using namespace std;

int main(){
    int a;
    int b;

    cin>>a>>b;
    if(a % b == 0){
        cout << a<<" eh divisivel por "<<b;
    }else {
        cout<< a<<" nao eh divisivel por "<<b;
    }
}



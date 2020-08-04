#include <iostream>

using namespace std;

int main(){
    int a;
    int b;
    int res;
    cin>> a>>b;
    if(a > b){
        res = a-b;
    }else{
        res = b-a;
    }

    cout<< res;

}

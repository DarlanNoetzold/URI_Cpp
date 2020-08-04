#include <iostream>
using namespace std;
int fib(int x){
    if(x == 0 || x==1){
        return 1;
    }else{
        return fib(x-1) + fib(x-2);
    }
}
int main(){
    int x;
    cin>>x;
    fib(x);
    cout<<"fib("<<x<<") = "<<fib(x);
}


#include <bits/stdc++.h>
#include <time.h>


using namespace std;

int calculaFib(int fib){
    if(fib == 0){
        return 1;
    }else if(fib == 1){
        return 1;
    }else{
        return calculaFib(fib - 1) + calculaFib(fib - 2);
    }
}

main(){
    int fib = 0;
    while(fib != 20){
        cout<<"\n"<<calculaFib(fib);
        fib++;
    }
}
#include <bits/stdc++.h>
using namespace std;

int calcula(int a, int b);
main(){
    cout<<calcula(5, 94);
}

int calcula(int a, int b){
    if(a <= 1)
        return 0;
    else{
        a /= 2;
        b *= 2;
        if(a%2 != 0)
            return b + calcula(a,b);
        else
            return calcula(a, b);
    }
}

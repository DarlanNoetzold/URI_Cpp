#include<bits/stdc++.h>

using namespace std;


main(){
    int *py, *x;
    py = new int;
    x = new int[10];
    cout<<"Informe: ";
    cin>>*py;
    fflush(stdin);

    *x = (*py - 5);
    while(*x<=(*py + 5)){
        if(*x != *py)
            cout<<*x<<", ";
        *x = *x +1;
    }
    delete (py);
    delete (x);
    getchar();
    
}
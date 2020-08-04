#include <bits/stdc++.h>
using namespace std;

main(){
    int num, x=1;
    cin>>num;
    while(x<10000){
        if(x%num==2){
            cout<<x<<endl;
        }
        x++;
    }
}


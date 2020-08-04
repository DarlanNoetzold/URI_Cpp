#include <bits/stdc++.h>
using namespace std;

main(){
    int x,y, i=1,n=1;
    cin>>x>>y;
    while(i <= y){
        if(n == x){
            cout<<i<<"\n";
            n = 1;
        }else{
            cout<<i<<" ";
            n++;
        }
        i++;
    }

}


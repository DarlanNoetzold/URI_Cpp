#include <bits/stdc++.h>
using namespace std;
main(){
    unsigned long long  n;
    while(cin>>n){
        if(n == -1) break;
        if(n == 0) printf("0\n");
        else printf("%llu\n", n - 1);
    }
}

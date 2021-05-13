#include<bits/stdc++.h>
using namespace std;

main(){
    int *pti;
    int veti[] = {10,7,2,6,3};
    pti = veti;
    cout<<*pti<<",";
    cout<<*(pti+2)<<",";
    cout<<pti[4]<<",";
    cout<<pti[1]<<",";
    cout<< *(pti+3);
}
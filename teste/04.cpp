#include<bits/stdc++.h>

using namespace std;


main(){
    int x=2,i=9,*px,*pi,**px2,***px3;
    px= &x;
    pi= &i;
    px2= &px;
    px3= &px2;

    **px2+= *pi+8;
    *pi = ***px3 - (*px + i);
    if(*px % 2 != 0)
        ***px3 = *px - 8;
    else
        **px2 += i + 5;
    cout<< *px<<";";
    cout<< *pi<<";";
    cout<< **px2<<";";
    cout<< ***px3<<";";
}
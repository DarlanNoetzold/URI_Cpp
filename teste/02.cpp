#include<bits/stdc++.h>

using namespace std;


main(){
    int i=5, *p;
    p = &i;

    cout << 3 **p << endl;
    cout << **&p + 4<<endl;
    cout << *p + 2 << endl;
    cout << **&p << endl;
    cout << p << endl;
}


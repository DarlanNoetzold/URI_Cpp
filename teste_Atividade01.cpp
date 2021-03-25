#include <bits/stdc++.h>
using namespace std;

int *X, a;

main(){
    int i=3, j=5;
    int *p, *q;
    p = &i;
    q = &j;

    if(p == &i)
        cout<<"true";
    else
        cout<<"false";

    cout<<"\nB: "<<*p - *q;
    cout<<"\nC: "<<**&p;
    cout<<"\nD: "<<3 * - ((*q + 7) / *p);

    int vlr, *pvlr;
    pvlr = &vlr;

    cout << "\ninforme o valor: ";
    cin >> *pvlr;
    cout<<"\n"<<vlr;
    fflush(stdin);


    int j1, *pj, s = 0;
    j1 = 3;
    pj = &j1;
    s += *pj;
    cout<<"\nResposta:"<<s;

    X = &a;
    cout << "Digite um valor para A: ";
    cin >> a;
    fflush(stdin);
    *X = 3 * *X;
    a += *X + 2;
    cout << *X << endl;
    getchar();
}



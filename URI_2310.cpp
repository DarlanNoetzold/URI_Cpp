#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    float sum=0.00,dif=0.00,sum1=0.00,sum2=0.00;
    float dif2=0.00,dif1=0.00;
    while(t--)
    {
        string str;
        cin>>str;
        int x,y,z;
        cin>>x>>y>>z;
        sum=sum+x;
        sum1=sum1+y;
        sum2=sum2+z;
        int A,B,C;
        cin>>A>>B>>C;
        dif=dif+A;
        dif1=dif1+B;
        dif2=dif2+C;
    }
    float p,q,r;
    p=(dif*100.00)/sum;
    q=(dif1*100.00)/sum1;
    r=(dif2*100.00)/sum2;
    cout<<fixed<<setprecision(2);
    cout<<"Pontos de Saque: "<<p<<" %."<<endl;
    cout<<"Pontos de Bloqueio: "<<q<<" %."<<endl;
    cout<<"Pontos de Ataque: "<<r<<" %."<<endl;
    return 0;
}

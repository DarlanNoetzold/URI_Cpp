#include<iostream>

using namespace std;

main(){
    int m,n,aux;
    cin>>m>>n;
    aux = n;
    for(int i=1;i<m;i++){
        n = n*aux;
    }
    cout<<aux<<" elevado a "<<m<<" e igual a: "<<n<<endl;
}


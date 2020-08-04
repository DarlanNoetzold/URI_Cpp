#include <iostream>

using namespace std;

int main(){
    int a;
    int b;
    int c;
    int d;
    int e;
    int ma;
    int me;
    cout<< "\n Informe 5 valores : ";
    cin>>a>>b>>c>>d>>e;
   /* if(a > b && a > c && a > d && a > e){
        cout << a<<" eh maior\n";
    }else if(b > a && b > c && b > d && b > e){
        cout << b<<" eh maior\n";
    }else if(c > a && c > b&& c > d && c > e){
        cout<<c<<"eh maior\n";
    }else if(d > a && d > b&& d > c && d > e){
        cout<<d<<"eh maior\n";
    }else if(e > a && e > b && e > c && e > d){
        cout<<e<<"eh maior\n";
    }
    if(a < b && a < c && a < d && a < e){
        cout << a<<" eh menor";
    }else if(b < a && b < c && b < d && b < e){
        cout << b<<" eh menor";
    }else if(c < a && c < b&& c < d && c < e){
        cout<<c<<" eh menor";
    }else if(d < a && d < b&& d < c && d < e){
        cout<<d<<" eh menor";
    }else if(e < a && e < b && e < c && e < d){
        cout<<e<<" eh menor";
    }
    */
    ma = a;
    if (b > ma) ma = b;
    if (c > ma) ma = c;
    if (d > ma) ma = d;
    if (e > ma) ma = e;
    cout<<ma<<" eh maior\n";
    me = a;
    if (b < me) me = b;
    if (c < me) me = c;
    if (d < me) me = d;
    if (e < me) me = e;
    cout<<me<<" eh menor\n";


}



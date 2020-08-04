#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
	int n;
	double x,y,div;
	cin>>n;

	while(n!=0){
        cin>>x>>y;
        if(y==0){
            cout<<"divisao impossivel"<<endl;
            continue;
        }
        div = x/y;
        cout<<fixed<<setprecision(1);
        cout<<div<<endl;
        n--;

	}
}

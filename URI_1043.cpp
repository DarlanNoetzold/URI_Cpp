#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double a,b,c, per, area;
    
    cin>>a>>b>>c;
    cout<<fixed<<setprecision(1);
    if(abs(b-c) < a && a < b+c && abs(a-c) < b && b < a+c && abs(a-b) < c && c < a+b){
    	per = a+b+c;
    	cout<<"Perimetro = "<<per<<endl;
	}else{
		area = ((a+b)*c)/2;
		cout<<"Area = "<<area<<endl;
	}
	
	
}

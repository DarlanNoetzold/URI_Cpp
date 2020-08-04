#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
	double a=0,b=0,c=0, r1=0, r2=0, delta=0;
	
	cin>>a>>b>>c;
	
	delta = pow(b,2) - 4*a*c;
	
	if(delta < 0 || a == 0){
		cout<<"Impossivel calcular"<<endl;
	}else{
		r1 = (-b + sqrt(delta))/(2*a);
		r2 = (-b - sqrt(delta))/(2*a);
	
		cout<<fixed<<setprecision(5);
		cout<<"R1 = "<<r1<<endl;
		cout<<"R2 = "<<r2<<endl;
	}
	
}

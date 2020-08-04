#include <iostream>

using namespace std;

int main(){
	int d,m=0,a=0;
	
	cin>>d;
	while(d >= 30){
		if(d >= 365){
			d -= 365;
			a++;
		}else if(d >= 30){
			d-= 30;
			m++;
		}else if(m >= 12){
			m -= 12;
			a++;
		}
	}
	
	cout<<a<<" ano(s)"<<endl;
	cout<<m<<" mes(es)"<<endl;
	cout<<d<<" dia(s)"<<endl;
}

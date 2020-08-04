#include <iostream>

using namespace std;

int main(){
	int s,h=0,m=0;
	
	cin>>s;
	while(s > 60){
		if(s >= 3600){
			s -= 3600;
			h++;
		}else{
			s-= 60;
			m++;
		}
	}
	
	cout<<h<<":"<<m<<":"<<s;
}

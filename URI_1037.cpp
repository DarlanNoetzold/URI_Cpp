#include <iostream>

using namespace std;

int main(){
	double n;

	cin>>n;

	if(25.00000 >=n && n>= 0){
		cout<<"Intervalo [0,25]"<<endl;
	}else if(50.000000 >= n && n>= 25.00001){
		cout<<"Intervalo (25,50]"<<endl;
	}else if(75.00000 >= n && n>=50.00001){
		cout<<"Intervalo (50,75]"<<endl;
	}else if(100.00 >= n && n>= 75.00001){
		cout<<"Intervalo (75,100]"<<endl;
	}else{
		cout<<"Fora de intervalo"<<endl;
	}
}

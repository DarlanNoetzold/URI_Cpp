#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int cod, quant;
	double val;
	
	cin>>cod>>quant;
	
	if(cod == 1){
		val = 4.00 * quant;
	}else if(cod == 2){
		val = 4.50 * quant;
	}else if(cod == 3){
		val = 5.00 * quant;
	}else if(cod == 4){
		val = 2.00 * quant;
	}else if(cod == 5){
		val = 1.50 * quant;
	}
	
	cout<<fixed<<setprecision(2);
	cout<<"Total: R$ "<<val<<endl;
}

#include<iostream>

using namespace std;

main(){
	int num, cem=0, cinq=0, vint=0, dez=0, cinc=0, dois=0, um=0, numB=0;
	cin>>num;
	numB = num;
	while(num > 0 && num < 1000000){

	if(num>=100){
		num -= 100;
		cem++;
	}else if(num >= 50){
		num -= 50;
		cinq++;
	}else if(num >= 20){
		num -= 20;
		vint++;
	}else if(num >= 10){
		num -= 10;
		dez++;
	}else if(num >= 5){
		num -= 5;
		cinc++;
	}else if(num >= 2){
		num -= 2;
		dois++;
	}else{
		num -= 1;
		um++;
	}
	}
	cout<<numB<<endl;
	cout<<cem<<" nota(s) de R$ 100,00"<<endl;
	cout<<cinq<<" nota(s) de R$ 50,00"<<endl;
	cout<<vint<<" nota(s) de R$ 20,00"<<endl;
	cout<<dez<<" nota(s) de R$ 10,00"<<endl;
	cout<<cinc<<" nota(s) de R$ 5,00"<<endl;
	cout<<dois<<" nota(s) de R$ 2,00"<<endl;
	cout<<um<<" nota(s) de R$ 1,00"<<endl;
}

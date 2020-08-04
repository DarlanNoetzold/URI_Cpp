#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	double n1,n2,n3,n4, media;
	double media2,notaEx;
	
	cin>>n1>>n2>>n3>>n4;
	
	media = ((n1*2)+(n2*3)+(n3*4)+n4)/10;
	
	cout<<fixed<<setprecision(1);
	
	if(media >= 7.0){
		cout<<"Media: "<<media<<endl;
		cout<<"Aluno aprovado."<<endl;
		
	}else if(media < 5){
		cout<<"Media: "<<media<<endl;
		cout<<"Aluno reprovado."<<endl;
	
	}else if(media >= 5 && media <= 6.9){
		cout<<"Media: "<<media<<endl;
		cout<<"Aluno em exame."<<endl;
		
		cin>>notaEx;
		
		media2 = (notaEx + media)/2;
		
		cout<<"Nota do exame: "<<notaEx<<endl;
		
		if(media2 >= 5){
			cout<<"Aluno aprovado."<<endl;
		}else{
			cout<<"Aluno reprovado."<<endl;
		}
		cout<<"Media final: "<<media2<<endl;
		
	}
	
	
	
}

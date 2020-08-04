#include<iostream>

using namespace std;

main(){
    double nota, media=0,soma=0,contMed=0;
    for(int i=0; i<10;i++){
        cin>>nota;
        soma += nota;
        if(nota>7){
            contMed++;
        }
    }
    media = soma/10.0;
    cout<<"A media da turma e igual a: "<<media<<" e "<<contMed<<" alunos tiveram nota maior que 7"<<endl;
}


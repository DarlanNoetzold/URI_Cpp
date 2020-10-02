#include<iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    double totIdadeM = 0.0, totIdadeF = 0.0, totIdade = 0.0;
    int contM=0, contF=0, i=0;
    for(i; i < 15; i++){
        int idade;
        string sexo;

        cout<<"Digite a idade do aluno "<<i<<": ";
        cin>>idade;

        cout<<"Digite o sexo do aluno "<<i<<"(M ou F): ";
        cin>>sexo;

        if(sexo == "M" || sexo == "m"){
            totIdadeM = totIdadeM + idade;
            contM++;
        }else if(sexo == "F" || sexo == "f"){
            totIdadeF = totIdadeF + idade;
            contF++;
        }
        totIdade = totIdade + idade;

    }
    cout<<"Média da idade dos alunos(M): "<< totIdadeM/contM<<"\n";
    cout<<"Média da idade dos alunos(F): "<< totIdadeF/contF<<"\n";
    cout<<"Média da idade dos alunos(geral): "<< totIdade/i;
}

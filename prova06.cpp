#include<iostream>
using namespace std;

main(){
    setlocale(LC_ALL, "portuguese-brazilian");
    int sal, idade, quantPes, maiorSal, menorSal;
    float contF=0,contM=0, somaSalF=0,somaSalM=0;
    char sexo;

    cout<<"Digite a quantidade de pessoas que aprticiparam da pesquisa: ";
    cin>>quantPes;

    for(int i =0; i < quantPes; i++){
        cout<<" Digite o sal�rio do "<<i+1<<"� participante: ";
        cin>>sal;

        cout<<" Digite a idade do "<<i+1<<"� participante: ";
        cin>>idade;

        cout<<" Digite o sexo do "<<i+1<<"� participante: ";
        cin>>sexo;

        if(sexo == 'F' || sexo == 'f'){
            contF++;
            somaSalF += sal;
        }else if(sexo == 'M' || sexo == 'm'){
            contM++;
            somaSalM += sal;
        }

        if(i == 0 || maiorSal < sal){
            maiorSal = sal;
        }
        if(i == 0 || menorSal > sal){
            menorSal = sal;
        }
    }

    cout<<quantPes<<" participaram dessa pesquisa.\n";
    cout<<contF<<" eram do sexo feminino sendo "<< (contF*100)/quantPes <<"%.\n";
    cout<<contM<<" eram do sexo masculino sendo "<< (contM*100)/quantPes <<"%.\n";
    cout<<"A m�dia dos sal�rio totais �: "<< (somaSalM + somaSalF)/quantPes;
    cout<<"\nO menor sal�rio � igual a: "<<menorSal<<"\nO maior sal�rio � igual a: "<<maiorSal;
    cout<<"\nA m�dia dos sal�rios das pessoas do sexo Feminino � igual a: "<<somaSalF/contF;
    cout<<"\nA m�dia dos sal�rios das pessoas do sexo Masculino � igual a: "<<somaSalM/contM;

    cout<<"\n\n";
}



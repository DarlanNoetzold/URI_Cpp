#include <iostream>

using namespace std;
main(){
    int i=1, idade, homens=0, mulheres=0, maior, menor, mexp=0, funcionarios=0, soma=0;
    double media=0;
    char sexo, experiencia;

    cin>>funcionarios;
    while(i <= funcionarios){
        cout<<"Entre com a idade do funcionario ";
        cin>>idade;
        maior = idade;
        menor = idade;
        cout<<"Agora com o sexo do funcionario <H ou M>: ";
        cin>>sexo;
        if (sexo == 'M'){
            mulheres = mulheres + 1;
        }else{
            homens = homens + 1;
        }
        cout<<"O funcionario possui experiencia no servico? ";
        cin>>experiencia;
        if(idade < 35 && sexo == 'M' && experiencia == 'S'){
            mexp = mexp + 1;
        }
        if(experiencia == 'S' && sexo == 'H'){
            soma = soma + idade;
            media = soma/homens;
        }
        if(sexo == 'M' && experiencia == 'S'){
            if(idade < menor){
                menor <- idade;
            }
        }
        i++;
    }
    cout<<"Mulheres : "<< mulheres<<endl;
    cout<<"Homens : "<< homens<<endl;
    cout<<"Idade media dos homens com experiencia no servico: "<< media<<endl;
    cout<<"Numero de mulheres com idade inferior a 35 anos e com experiencia no servico:  "<< mexp<<endl;
    cout<<"A menor idade entre mulheres que ja tem experiencia no servico e:  "<< menor<<endl;

}

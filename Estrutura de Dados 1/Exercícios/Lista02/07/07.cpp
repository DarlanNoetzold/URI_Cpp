#include <bits/stdc++.h>
using namespace std;

#include "pilha.hpp"

bool verificaExp(string exp){
    Pilha p;
    bool balanced = true;
    int index = 0;
    char valor;
    while(index < exp.length() && balanced){
        char symbol = exp[index];
        if(symbol == '('){
            empilhar(&p, symbol);
        }else if(symbol ==')'){
            if(buscar(&p, '(')){
                balanced == true;
            }else{
                balanced == false;
            }
        }
        index = index + 1;
    }
    if(balanced && vazia(&p)){
        return true;
    }else{
        return false;
    }

}



main(){
    setlocale(LC_ALL, "Portuguese");

    char exp[50];
    cout<<"Digite um exprecao: ";
    cin>>exp;

    

    cout<<verificaExp(exp);
}

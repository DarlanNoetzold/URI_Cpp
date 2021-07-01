#include <bits/stdc++.h>
using namespace std;

#include "pilha.hpp"

bool verificaExp(char exp[50]){
    Pilha p;
    inicializa(&p, 15);
    bool balanced = true;
    int index = 0, auxAbre=0, auxFecha=0;
    char valor;
    while(index < strlen(exp)){
        char symbol = exp[index];
        if(symbol == '('){
            auxAbre++;
            empilhar(&p, symbol);
        }else if(symbol ==')'){
            auxFecha++;
            if(buscar(&p, '(')){
                if(auxAbre > 1){
                    balanced = false;
                    auxAbre--;
                    desempilhar(&p, &valor);
                }else{
                    if(auxFecha > 1){
                        balanced == false;
                        auxFecha--;
                    }else{
                        balanced == true;
                    }
                }
            }else{
                return false;
            }
        }
        index++;
    }
    if(balanced){
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

    
    if(verificaExp(exp)){
        cout<<"Expressao correta!"<<endl;
    }else{
        cout<<"Expressao incorreta!"<<endl;
    }
}

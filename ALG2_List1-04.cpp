#include<bits/stdc++.h>

using namespace std;
#define NUM 5
int v[NUM];

bool verifica(int i){
    for(int j = 0; j< i; j++){
        if(v[i] == v[j]){
            return false;
        }
    }
    return true;
}

void gerarVet(){
    for(int i = 0; i< NUM; i++){
        int num = rand()%100;
        v[i] = num;
        if(verifica(i) == false){
            i--;
        }
    }
}

void ordena(){
    sort(v, v+NUM);
}

void mostrar(){
    cout<<"\n\n   -->> ";
    for(int i = 0; i< NUM; i++){
        cout<<"|"<<v[i];
    }
    cout<<" <<--\n";
}

main(){
    srand(time(NULL));
    setlocale(LC_ALL, "portuguese-brazilian");
    bool sair = false;
    do{
        int op;
        cout<<"\n\n(1) Gerar Vetor V[5]\n";
        cout<<"(2) Ordenar crescente\n";
        cout<<"(3) Mostrar Vetor\n";
        cout<<"(4) sair.\n";

        cout<<"\nDigite a op??o: ";
        cin>>op;

        switch(op){
            case 1:
                gerarVet();
                break;
            case 2:
                ordena();
                break;
            case 3:
                mostrar();
                break;
            case 4:
                sair = true;
                break;
            default:
            cout<<"\nN?o temos esta op??o!";
            break;

        }
    }while(sair == false);

}




#include<iostream>

using namespace std;


int LugaresD[12][2];
int LugaresE[12][2];

void preencherMat(){
    for(int l = 1; l <= 12; l++){
        for(int c = 1; c <= 2; c++){
            LugaresD[l][c] = 0;
        }
    }
    for(int l = 1; l <= 12; l++){
        for(int c = 1; c <= 2; c++){
            LugaresE[l][c] = 0;
        }
    }
}

void mostrar(){
    for(int l = 1; l <= 12; l++){
        for(int c = 1; c <= 2; c++){
            cout<<"|"<<LugaresD[l][c]<<"--"<<LugaresE[l][c];
        }
        cout<<"|\n";
    }
}

bool testaOni(){
    int cont = 0;
    for(int l = 1; l <= 12; l++){
        for(int c = 1; c <= 2; c++){
            cont += LugaresD[l][c];
            cont += LugaresE[l][c];
        }
    }
    if(cont==48){
        cout<<"Onibus Lotado\n";
        return false;
    }
    return true;
}


void vendPas(int lug){
    if(testaOni()){
        for(int l = 1; l <= 12; l++){
            for(int c = 1; c <= 2; c++){
                if((l*c) == lug){
                    if(Lugares[l][c]==0){
                        Lugares[l][c] = 1;
                        mostrar();
                    }else{
                        cout<<"Poltrona Ocupada!";
                    }
                }
            }
        }
    }
}

main(){
    int x = 1;
    preencherMat();
    setlocale(LC_ALL, "portuguese-brazilian");
    while(x!=0){
        int op;
        cout<<"Menu: \n";
        cout<<"1 - Vender Passagem\n";
        cout<<"2 - Mostrar mapa de ocupação do ônibus\n";
        cout<<"3 - Encerrar\n";
        cout<<"Digite o número: ";
        cin>>op;
        if(op == 1){
            int lug, lado;
            cout<<"Digite o lugar de sua escolha (0 - 48): ";
            cin>>lug;
            vendPas(lug);
        }else if(op == 2){
            mostrar();
        }else if(op == 3){
            cout<<"\n\nEncerrando...\n\n\n";
            x = 0;
        }
    }
}





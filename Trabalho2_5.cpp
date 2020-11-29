#include<iostream>

using namespace std;


int Lugares[12][4];

void preencherMat(){
    for(int l = 1; l <= 12; l++){
        for(int c = 1; c <= 4; c++){
            Lugares[l][c] = 0;
        }
    }
}

void mostrar(){
    for(int l = 1; l <= 12; l++){
        for(int c = 1; c <= 4; c++){
            cout<<"|"<<Lugares[l][c];
            if(c==2){
                cout<<"|--";
            }
        }
        cout<<"|\n";
    }
}

bool testaOni(){
    int cont = 0;
    for(int l = 1; l <= 12; l++){
        for(int c = 1; c <= 4; c++){
            cont += Lugares[l][c];
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
            for(int c = 1; c <= 4; c++){
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
        cout<<"2 - Mostrar mapa de ocupa��o do �nibus\n";
        cout<<"3 - Encerrar\n";
        cout<<"Digite o n�mero: ";
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




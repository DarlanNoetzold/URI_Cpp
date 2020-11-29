#include<iostream>

using namespace std;


int Lugares[48];


void preencherMat(){
    for(int l = 1; l <= 48; l++){
        Lugares[l] = 0;
    }
}

void mostrar(){
    int cont = 1;
    for(int l = 1; l <= 48; l++){
        if(cont == 2){
            cout<<Lugares[l]<<"|--|";
        }else if(cont==3){
            cout<<Lugares[l+1]<<"|"<<Lugares[l]<<"|\n";
            cont=0;
            l++;
        }else{
            cout<<"|"<<Lugares[l]<<"|";
        }
        cont++;
    }
}

void mostraPos(){
    int cont = 1;
    for(int l = 1; l <= 48; l++){
        if(cont == 2){
            cout<<l<<"|--|";
        }else if(cont==3){
            cout<<l+1<<"|"<<l<<"|\n";
            cont=0;
            l++;
        }else{
            cout<<"|"<<l<<"|";
        }
        cont++;
    }
}

bool testaOni(){
    int cont = 0;
    for(int l = 1; l <= 48; l++){
        cont += Lugares[l];
    }
    if(cont==48){
        cout<<"Onibus Lotado\n";
        return false;
    }
    return true;
}


void vendPas(int lug, int lado){
    if(testaOni()){
        if(Lugares[lug] == 1){
            cout<<"Poltrona Ocupada!\n";
        }else{
            if(lado == 1 && lug%2==1){
                Lugares[lug] = 1;
                cout<<"Venda efetivada\n";
            }else if(lado == 2 && lug%2==0){
                Lugares[lug] = 1;
                cout<<"Venda efetivada\n";
            }else{
                cout<<"Opção de lado inválida!\n";
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
        cout<<"3 - Mostrar mapa de posições\n";
        cout<<"4 - Encerrar\n";
        cout<<"Digite o número: ";
        cin>>op;
        if(op == 1){
            int lug, lado;
            cout<<"Digite o lugar de sua escolha (0 - 48): ";
            cin>>lug;
            cout<<"Escolha 1 para o lado da janela ou 2 para o lado do corredor: ";
            cin>>lado;
            vendPas(lug, lado);
        }else if(op == 2){
            mostrar();
        }else if(op == 3){
            mostraPos();
        }else if(op == 4){
            cout<<"\n\nEncerrando...\n\n\n";
            x = 0;
        }else{
            cout<<"Opção inválida!\n";
        }
    }
}





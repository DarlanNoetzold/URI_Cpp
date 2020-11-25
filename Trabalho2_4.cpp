#include<iostream>

using namespace std;
#define NUM 3

int Produtos[NUM];
float Estoque[NUM];

int atualizaEstoque(int quantProd, int codProd){
    for(int i = 0; i < NUM; i++){
        if(i == codProd-1){
                cout<<i<<"----\n";
            Estoque[i] = Estoque[i] - quantProd;
            return Estoque[i];
        }
    }
}

bool verificaCodProd(int codProd){
    for(int i = 0; i < NUM; i++){
        if(Produtos[i] == codProd){
            return true;
        }
    }
    return false;
}

mostraTudo(){
    for(int i = 0; i< NUM; i++){
        cout<<"Produdo "<<Produtos[i]<<": "<<Estoque[i]<<".\n";;
    }
}

main(){
    setlocale(LC_ALL, "portuguese-brazilian");
    for(int i = 0; i < NUM; i++){
        cout<<"Digite o c�digo do produto: ";
        cin>>Produtos[i];
        for(int j = 0; j < i;j++){
            if(Produtos[i] == Produtos[j]){
                cout<<"Este produto j� existe!\n";
                i--;
                break;
            }
        }
    }
    for(int i = 0; i < NUM; i++){
        cout<<"Digite a quantidade do produto em estoque: ";
        cin>>Estoque[i];
    }
    int codCli=1, codProd,quantProd;
        while(true){
            cout<<"Digite o c�digo do cliente (0 para sair): ";
            cin>>codCli;
            if(codCli == 0){
                break;
            }
            cout<<"Digite o c�digo do produto que o cliente deseja comprar: ";
            cin>>codProd;
            if(verificaCodProd(codProd)){
                cout<<"C�digo existente!\n";
                cout<<"Digite a quantidade que o cliente deseja: ";
                cin>>quantProd;
                if(Estoque[(codProd-1)] >= quantProd){
                    cout<<"Pedido atendido, volte sempre!\n";
                    cout<<"Novo estoque do produto: "<<atualizaEstoque(quantProd,codProd)<<".\n";
                    mostraTudo();
                }else{
                    cout<<"N�o temos estoque suficiente dessa mercadoria! \n";
                }
            }else{
                cout<<"C�digo inexistente!\n";
            }
        }
}





#include <bits/stdc++.h>
using namespace std;

struct estoque{
    int cod;
    char nome[50];
    char unidade[50];
    float val;
    int quant;

};

void leitura(estoque *x, int i){
        cout << "\n\nInforme o codigo: ";
        cin >> x[i].cod;
        fflush(stdin);

        cout << "Informe o nome: ";
        gets(x[i].nome);
        fflush(stdin);

        cout << "Informe a unidade: ";
        gets(x[i].unidade);
        fflush(stdin);

        cout << "Informe a quantidade: ";
        cin >> x[i].quant;
        fflush(stdin);

        cout << "Informe o valor: ";
        cin >> x[i].val;
        fflush(stdin);
}

void mostra(estoque *x, int i){
    cout << "DADOS DO ESTOQUE: " << endl;
    for(int j = 0; j <= i; j++){
        cout<< "Codigo: " << x[j].cod << endl;
        cout<< "Nome: " << x[j].nome << endl;
        cout<< "Unidade: " << x[j].unidade << endl;
        cout<< "Quantidade: " << x[j].quant << endl;
        cout<< "Valor: " << x[j].val << endl;
        cout<< "\n\n";
    }
}

void buscaCod(estoque *x,int j){
    cout << "Codigo: " << x[j].cod << endl;
    cout << "Nome: " << x[j].nome << endl;
    cout << "Unidade: " << x[j].unidade << endl;
    cout << "Quantidade: " << x[j].quant << endl;
    cout << "Valor: " << x[j].val << endl;
    cout << "\n\n";
    getchar();
}

void venderProduto(estoque *x, int j, int quant){
    if(x[j].quant >= quant){
        cout<<"Quantidade do produto "<<x[j].nome<<" vendida!";
        x[j].quant -= quant;
    }else{
        cout<<"Nao temos esta quantidade de "<<x[j].nome;
    }
    getchar();
}


main(){
    estoque x[50];
    int menu = -1, indice = -1, cod=0, aux=0;

    do{
        system("cls");
        cout << "####################MENU####################" << endl;
        cout << "# 0 - Sair                                 #" << endl;
        cout << "# 1 - Cadastrar produto                    #" << endl;
        cout << "# 2 - Listar produtos cadastrados          #" << endl;
        cout << "# 3 - Consultar produto pelo codigo        #" << endl;
        cout << "# 4 - Vender produto                       #" << endl;
        cout << "############################################" << endl;
        cout << "Sua escolha: ";
        cin >> menu;
        fflush(stdin);//limpa o buffer do teclado

        switch(menu)
        {
            case 0 :
                system("cls");
                cout << "PROGRAMA FINALIZADO";
                getchar();
                break;
            case 1 :
                system("cls");
                indice++;
                if(indice == 50)
                    cout << "Limite maximo de produtos ja cadastrados";
                else
                    leitura(x, indice);
                break;
            case 2 :
                system("cls");
                if(indice < 0)
                    cout << "E necessario ler valores primeiro";
                else
                    mostra(x, indice);
                getchar();
                break;
            case 3 :
                system("cls");
                aux=0;
                cout<<"Digite o codigo: ";
                cin>>cod;
                for(int i = 0; i<=indice;i++){
                    if(x[i].cod == cod){
                        buscaCod(x, i);
                        aux++;
                    } 
                }
                if(aux == 0){
                    cout<<"Nao existe produto com este codigo no estoque!\n";
                    getchar();
                }
                getchar();
                break;
            case 4 :
                system("cls");
                int quant;
                aux=0;
                cout<<"Digite o codigo: ";
                cin>>cod;
                cout<<"Digite o quantidade: ";
                cin>>quant;
                for(int i = 0; i<=indice;i++){
                    if(x[i].cod == cod){
                        venderProduto(x, i, quant);
                        aux++;
                    } 
                }
                if(aux == 0){
                    cout<<"Nao existe produto com este codigo no estoque!";
                    getchar();
                }
                getchar();
                break;

        };
    }while(menu != 0);
}

#include <bits/stdc++.h>

using namespace std;

struct Lanche{
    string nome;
    int quantidade;
    float val;

    void insere(string stnome, int stquantidade, float stval){
        nome = stnome;
        quantidade = stquantidade;
        val = stval;
    }

    float getValTotal(){
        return val * quantidade;
    }
};

main(){
    cout<<fixed<<setprecision(2);
    setlocale(LC_ALL, "portuguese-brazilian");
    cout<<"Descrição\tCódigo\t Valor R$\n";
    cout<<"Cachorro quente\t10\t12,00\n";
    Lanche cachq;
    cachq.insere("Cachorro quente", 0, 12.00);
    cout<<"Bauru simples\t11\t16,50\n";
    Lanche bauru;
    bauru.insere("Bauru simples", 0, 16.50);
    cout<<"Bauru com ovo\t12\t18,00\n";
    Lanche bauruO;
    bauruO.insere("Bauru com ovo", 0, 18.00);
    cout<<"Hambúrger\t13\t22,00\n";
    Lanche hamburguer;
    hamburguer.insere("Hambúrger", 0, 22.00);
    cout<<"Cheeseburguer\t14\t20,00\n";
    Lanche cheese;
    cheese.insere("Cheeseburguer", 0, 20.00);
    cout<<"Torrada   \t15\t10,00\n";
    Lanche torrada;
    torrada.insere("Torrada    ", 0, 10.00);
    cout<<"Refrigerante\t1\t8,00\n";
    Lanche refrigerante;
    refrigerante.insere("Refrigerante", 0, 8.00);
    cout<<"Suco Natural\t2\t10,50\n";
    Lanche suco;
    suco.insere("Suco Natural", 0, 10.50);

    int op = 1;
    do{
        int cod, quant;
        cout<<"\n\nDigite o Código do Pedido: ";
        cin>>cod;
        cout<<"\nDigite a quantidade: ";
        cin>>quant;
        switch(cod){
            case 10:
                cachq.quantidade += quant;
                break;
            case 11:
                bauru.quantidade += quant;
                break;
            case 12:
                bauruO.quantidade += quant;
                break;
            case 13:
                hamburguer.quantidade += quant;
                break;
            case 14:
                cheese.quantidade += quant;
                break;
            case 15:
                torrada.quantidade += quant;
                break;
            case 1:
                refrigerante.quantidade += quant;
                break;
            case 2:
                suco.quantidade += quant;
                break;
            default:
                cout<<"\nNão temos esta opção!";
        }
        cout<<"\n\n1 - Incluir mais um item";
        cout<<"\n2 - Encerrar o pedido";

        cout<<"\nDigite a opção: ";
        cin>>op;
    }while(op == 1);
    Lanche list[8] = {cachq, bauru, bauruO, hamburguer, cheese, torrada, refrigerante, suco};
    float totalVal;
    cout<<"\n\nDescrição\tQTD\tValor do Item\n";
    for(int i = 0; i < 8; i++){
        if(list[i].quantidade > 0){
            cout<<list[i].nome<<"\t"<<list[i].quantidade<<"\t"<<list[i].getValTotal()<<"\n";
        }
        totalVal += list[i].getValTotal();
    }

    cout<<"\n\nTotal do pedido: "<<totalVal<<"\n\n\n";
}
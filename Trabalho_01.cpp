#include<bits/stdc++.h>
using namespace std;

main(){
    setlocale(LC_ALL, "portuguese-brazilian");
    string cod,desc,cat,tam;
    int etiq,col;
    float preco;
    cout<<"Informe o c�digo do Produto : ";
    cin>>cod;
    cout<<"\nInforme a descri��o do Produto : ";
    cin>>desc;
    cout<<"\nInforme a categoria do Produto : ";
    cin>>cat;
    cout<<"\nInforme o tamanho do Produto : ";
    cin>>tam;
    cout<<"\nInforme o pre�o do Produto : ";
    cin>>preco;
    cout<<"\nInforme a quantidade de ETIQUETAS : ";
    cin>>etiq;
    cout<<"\nInforme a op��o de n�mero de colunas [1|2]: ";
    cin>>col;

    for(int i = 0; i < etiq; i++){
        if(col == 1){
            cout<<"\n-------------------------------\n";
            cout<<desc<<"              "<<cat;
            cout<<"\n";
            cout<<"TAM:   "<<tam;
            cout<<"\n";
            cout<<"                      R$ "<<preco;
            cout<<"\n-------------------------------\n";
        }else{
            if(etiq%2==1 && i> etiq-2){
                cout<<"\n-------------------------------\n";
                cout<<desc<<"              "<<cat;
                cout<<"\n";
                cout<<"TAM:   "<<tam;
                cout<<"\n";
                cout<<"                      R$ "<<preco;
                cout<<"\n-------------------------------\n";
            }else{
                cout<<"\n-------------------------------             -------------------------------\n";
                cout<<desc<<"              "<<cat<<"                     "<<desc<<"              "<<cat;
                cout<<"\n";
                cout<<"TAM:   "<<tam<<"                                    TAM:   "<<tam;
                cout<<"\n";
                cout<<"                        R$ "<<preco<<"                                      R$ "<<preco;
                cout<<"\n-------------------------------             -------------------------------\n";
            }
        }

    }
}


#include<bits/stdc++.h>
using namespace std;


main(){
    char tam[3], l[1], c[1];
    fflush(stdin);
    cout<<"Digite o tamanho: (l c)"<<endl;
    gets(tam);
    fflush(stdin);
    l[0] = tam[0];
    c[0] = tam[2];
    int lnum = atoi(l);
    int cnum = atoi(c);
    int quantZeros;
    fflush(stdin);
    cout<<"Digite a quantidade de posicoes zeradas: "<<endl;
    cin>>quantZeros;
    fflush(stdin);
    char lincol[3];
    int lzeros[quantZeros], czeros[quantZeros];
    cout<<"l"<<lnum<<"c"<<cnum;
    for(int i = 0; i < quantZeros; i++){
        fflush(stdin);
        cout<<"Digite a linha e a coluna da "<<i<<" poiscao zerada: (l c)"<<endl;
        gets(lincol);
        fflush(stdin);
        cout<<"quat: "<<quantZeros;
        getchar();
        char lzeroschar[1];
        lzeroschar[0] = lincol[0];
        char czeroschar[1];
        czeroschar[0] = lincol[2];
        lzeros[i] = atoi(lzeroschar);
        czeros[i] = atoi(czeroschar);
    }
    int matriz[cnum][lnum], aux=0;
    for(int i = 0; i < cnum; i++){
        for(int j = 0; j < lnum; j++){
            for(int t = 0; t < quantZeros; t++){
                if(lzeros[t] == j && czeros[t] == i){
                    aux++;
                }
            }
            if(aux == 1){
                matriz[i][j] = 0;
            }else{
                matriz[i][j] = 1;
            }
            aux = 0;

            cout<<matriz[i][j]<<"\t";
        }
        cout<<"\n";
    }
}
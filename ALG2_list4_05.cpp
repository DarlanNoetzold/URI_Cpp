#include <bits/stdc++.h>
#include <math.h>

using namespace std;
double m[5][5];

double leitura(string texto, int i, int j){
    double n;
    cout<< texto <<"["<<i<<"]"<<"["<<j<<"]: ";
    cin>> n;
    return n;
}

void mostrarMat(){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cout<<m[i][j]<<"\t";
        }
        cout<<endl;
    }
}

main(){

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            m[i][j] = leitura("\nDigite um numero para a matriz: ", i,j);
        }
    }
    mostrarMat();
    cout<<endl;
    cout<<"Matriz arredondada: "<<endl;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            int aux = m[i][j];
            if(aux % 2 ==0){
                m[i][j] = ceil(m[i][j]);
            }else{
                m[i][j] = floor(m[i][j]);
            }
        }
    }
    mostrarMat();
    cout<<endl;
    cout<<"Matriz Modificada: "<<endl;
    for(int i = 0; i < 5; i++){
        int maior=0, iMaior,jMaior;
        for(int j = 0; j < 5; j++){
            if(m[i][j] == 0 || m[i][j] > maior){
                maior = m[i][j];
                iMaior = i;
                jMaior = j;
            }
        }
        for(int j = 0; j < 5; j++){
            int aux;
            if(i == j){
                aux = m[i][j];
                m[i][j] = maior;
                m[iMaior][jMaior] = aux;

            }
        }

    }
    mostrarMat();
}
#include <iostream>
#include <ctime>
using namespace std;

void preencheMatriz(int l, int c, int *mat){
    int tam = l*c;
    for(int i=0; i<tam; i++){
        *mat = rand()%50;
        mat++;
    }
    mat -= tam;
    cout<<"Matriz gerada: "<<endl;
    for(int linha=0; linha< l; linha++){
        for(int coluna=0; coluna< c; coluna++){
            int indice = linha*c + coluna;
            cout << mat[indice]  << "\t";
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
}

void soma(int tam, int l, int c, int *matA, int *matB){
    int *soma = new int[tam];
    for(int i = 0; i < tam; i++){
        *soma = *matA + *matB;
        soma++;
        matA++;
        matB++;
    }
    soma -= tam;
    cout<<"Soma das matrizes: "<<endl;
    for(int linha=0; linha< l; linha++){
        for(int coluna=0; coluna< c; coluna++){
            int indice = linha*c + coluna;
            cout << soma[indice]  << "\t";
        }
        cout << endl;
    }
    cout << endl;

    delete[] soma;
}


int main()
{
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));

    int l, c;
    cout << "Informe o numero de linhas: ";
    cin >> l;
    cout << "Informe o numero de colunas: ";
    cin >> c;

    int tam = l*c;
    int *matA = new int[tam];
    preencheMatriz(l,c,matA);
    int *matB = new int[tam];
    preencheMatriz(l,c,matB);

    soma(tam, l, c, matA, matB);
    delete[] matA;
    delete[] matB;
}
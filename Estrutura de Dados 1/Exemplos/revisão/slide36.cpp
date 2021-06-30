#include <iostream>
#include <ctime>
using namespace std;


int main()
{
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));

    int l, c;
    cout << "Informe o número de linhas: ";
    cin >> l;
    cout << "Informe o número de colunas: ";
    cin >> c;

    int tam = l*c;
    int *mat = new int[tam];
    int *ptr = mat;

    for(int i=0; i<tam; i++)
    {
        *ptr = rand()%50;
        cout << mat[i] << endl;
        ptr++;
    }

    cout << endl;
    for(int linha=0; linha<l; linha++)
    {
        for(int coluna=0; coluna<c; coluna++)
        {
            int indice = linha*c + coluna;
            cout << mat[indice]  << "\t";
        }
        cout << endl;

    }
    delete[] mat;
}

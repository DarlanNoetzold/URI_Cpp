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

    int **mat = new int*[l];
    for(int i=0; i<c; i++)
    {
        mat[i] = new int[c];
    }

    for(int i=0; i<l; i++)
    {
        for(int j=0; j<c; j++)
        {
            mat[i][j] = rand()%50;

            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }

    for(int i=0; i<l; i++)
    {
        delete[] mat[i];
    }
    delete[] mat;
}

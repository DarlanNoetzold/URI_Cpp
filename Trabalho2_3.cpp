#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

// matrizes globais
int campo[9][9], campo1[9][9];
char campochar[9][9];

int contador = 0, fim = 0; // variaveis p/ definir o fim da partida

//Zera matrizes do tipo interio e atribui "*" a todas posicoes da matriz do tipo char
void zerar_campo( )
{
    for (int i=0; i<9; i++)
    {
        for(int j=0; j<9; j++)
        {
            campo[i][j]=0;
        }
    }
    for (int i=0; i<9; i++)
    {
        for(int j=0; j<9; j++)
        {
            campo1[i][j]=0;
        }
    }
    for (int i=0; i<9; i++)
    {
        for(int j=0; j<9; j++)
        {
            campochar[i][j]= '*';
        }
    }

}

//Sorteio das bombas na matriz "campo".
void sorteio()
{
    srand(time(NULL));
    for(int i=0; i<10; i++)
    {
        int l, c;
        l = rand() %9;
        c = rand() %9;

        if(campo[l][c] == 0)
        {
            campo[l][c] = 1;
        }
        else
            i--;
    }
}

//Soma de todos os valores que sircundam as casas que nao há bombas da matriz "campo",
//e esse valor e atribuido na matriz "campo1".
void contagem()
{

    if (campo[0][0] == 0)campo1[0][0] = campo[0][1]+campo[1][0]+campo[1][1];
    if (campo[0][8] == 0)campo1[0][8] = campo[0][7]+campo[1][7]+campo[1][8];
    if (campo[8][0] == 0)campo1[8][0] = campo[7][0]+campo[7][1]+campo[8][1];
    if (campo[8][8] == 0)campo1[8][8] = campo[7][7]+campo[7][8]+campo[8][7];

    for(int j=1; j<=7; j++)
    {
        if (campo[0][j] == 0)campo1[0][j] = campo[0][j-1]+campo[0][j+1]+campo[1][j-1]+campo[1][j]+campo[1][j+1];
        if (campo[8][j] == 0)campo1[8][j] = campo[8][j-1]+campo[8][j+1]+campo[7][j-1]+campo[7][j]+campo[7][j+1];
        if (campo[j][0] == 0)campo1[j][0] = campo[j-1][0]+campo[j+1][0]+campo[j-1][1]+campo[j][1]+campo[j+1][1];
        if (campo[j][8] == 0)campo1[j][8] = campo[j-1][8]+campo[j+1][8]+campo[j-1][7]+campo[j][7]+campo[j+1][7];
    }
    for(int i=1; i<=7; i++)
    {
        for(int j=1; j<=7; j++)
        {
            if(campo[i][j] == 0)
                campo1[i][j] = campo[i-1][j-1]+campo[i-1][j]+campo[i-1][j+1]+
                               campo[i+1][j-1]+campo[i+1][j]+campo[i+1][j+1]+
                               campo[i][j-1]+campo[i][j]+campo[i][j+1];
        }
    }
    //contagem das casas com bombas perto
    for (int i=0; i<10; i++)
    {
        for (int j=0; j<10; j++)
        {
            if(campo1 > 0)
                contador ++;
        }
    }
}

// impressao do menu usado a matriz "campochar".
int menu()
{
    cout << " +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << endl;
    cout << " ||||||||||||CAMPO MINADO|||||||||||||" << endl;
    cout << " +-1-+-2-+-3-+-4-+-5-+-6-+-7-+-8-+-9-+" << endl;
    for (int i=0; i<9; i++)
    {
        cout << i+1 << "";
        for(int j=0; j<9; j++)
        {
            cout << "| "<< campochar[i][j] << " ";
        }
        cout << "|" << endl;
        cout << " +---+---+---+---+---+---+---+---+---+" << endl;
    }

}

int jogar()
{

    while(contador != fim)
    {
        int lin, col;
        cout << "Escolha uma linha: ";
        cin >> lin;
        cout << "Escolha uma coluna: ";
        cin >> col;
        if(campo[lin-1][col-1]==1)
        {
            campochar[lin-1][col-1] = 'B';
            menu();
            cout << "Fim de jogo, você perdeu!" << endl;

            return 0;
        }
        else if(campo1[lin-1][col-1]== 1)
        {
            campochar[lin-1][col-1] = '1';
            fim++;
        }
        else if(campo1[lin-1][col-1]== 2)
        {
            campochar[lin-1][col-1] = '2';
            fim++;
        }
        else  if(campo1[lin-1][col-1]== 3)
        {
            campochar[lin-1][col-1] = '3';
            fim++;
        }
        else if(campo1[lin-1][col-1]== 4)
        {
            campochar[lin-1][col-1] = '4';
            fim++;
        }
        else if(campo1[lin-1][col-1]== 5)
        {
            campochar[lin-1][col-1] = '5';
            fim++;
        }
        else if(campo1[lin-1][col-1]== 6)
        {
            campochar[lin-1][col-1] = '6';
            fim++;
        }
        else if(campo1[lin-1][col-1]== 7)
        {
            campochar[lin-1][col-1] = '7';
            fim++;
        }
        else if(campo1[lin-1][col-1]== 8)
        {
            campochar[lin-1][col-1] = '8';
            fim++;
        }
        else if(campo1[lin-1][col-1]== 0)
        {
            campochar[lin-1][col-1] = ' ';
        }
        else
        {
            cout << "ERRO!" << endl;
        }
        menu();
    }
}


int main(int argc, char** argv)
{
    setlocale(LC_ALL, "portuguese-brazilian");
    zerar_campo();
    sorteio();
    contagem();
    menu();
    jogar();
    return 0;
}

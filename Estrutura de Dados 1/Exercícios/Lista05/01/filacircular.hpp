#include <bits/stdc++.h>
using namespace std;

#ifndef _HPP_FILA
#define _HPP_FILA

#include <iomanip> //biblioteca usada para formatar a impress�o da fila

struct Fila
{
    int tam; //tamanho do vetor de dados
    int total; //total de elementos armazenados na fila
    int inicio; //ponteiro para o elemento armazenado no inicio da fila
    int fim; //ponteiro para o fim da fila (posi��o do vetor onde ser� armazenado o pr�ximo elemento)
    char *dados;//ponteiro para o vetor que ser� alocado para armazenar os dados

    Fila() //Construtor. Usado para inicializar os dados das vari�veis da struct
    {
        tam =0;
        total = 0;
        inicio = 0;
        fim = 0;
        dados = nullptr;
    }
};



void inicializaF(Fila *f, int tam) /// inicializa��o da fila
{
    f->tam = tam;
    f->inicio = 0;
    f->fim = 0;
    f->total = 0;
    f->dados = new char[tam];/// aloca mem�ria para vetor
}

void destroiF(Fila *f)
{
    f->fim = 0;
    f->inicio = 0;
    f->total = 0;
    f->tam = 0;

    if(f->dados) //f->dados != NULL
    {
        delete[] (f->dados);
        f->dados = nullptr;
    }
}


bool vaziaF(Fila *f)// fila vazia
{
    if (f->total == 0)
        return true;
    else
        return false;
}

bool cheiaF(Fila *f)// fila cheia
{
    if (f->total == f->tam)
        return true;
    else
        return false;
}

//Enqueue
bool enfileiraF(Fila *f, char valor) /// incluir valor na fila
{
    if (!f->dados || cheiaF(f)) // retorna false se a fila n�o foi inicializada ou se cheia
        return false;

    //inserir no final da fila
    f->dados[f->fim] = valor;

    //incrementa a quantidade de elementos armazenados na fila
    f->total++;

    //avan�a o ponteiro fim
    f->fim++;

    if(f->fim>=f->tam)
       f->fim = 0; //circular

    return true;
}

//Dequeue
bool desenfileiraF(Fila *f, char *valor)  //retirar da fila
{
    if (!f->dados || vaziaF(f)) // retorna false se a fila n�o foi inicializada ou se vazia
        return false;

    //remover do inicio da fila
    *valor = f->dados[f->inicio];

    //diminui a quantidade de elementos armazenados na fila
    f->total--;

    //avan�a o ponteiro in�cio
    f->inicio++;

    if(f->inicio>=f->tam)
       f->inicio = 0; //circular

    return true;
}

//Peek
bool espiarF(Fila *f, char *valor) ///peek
{
    if (!f->dados || vaziaF(f))  // retorna false se a fila n�o foi inicializada ou se vazia
        return false;

    *valor = f->dados[f->inicio];

    return true;
}

void mostraF(Fila *f)
{
    cout << "\nFila{TAM = " << f->tam << ", TOTAL = " <<  f->total << "} -> ";


    if (!f->dados)  // retorna se a fila n�o foi inicializada
        return;

    if (!vaziaF(f))
    {
        int idx = f->inicio;
        cout << "[";
        for(int i = 0; i < f->total; i++)
        {
            cout << f->dados[idx];

            if(i < f->total-1)
                cout << ", ";

            idx++;
            if(idx >= f->tam)
                idx=0; //circular
        }
        cout << "]\n";
    }else
        cout << "Fila vazia!\n";
}




void mostraVetorDadosF(Fila *f)
{
    cout << "\nFila{TAM = " << f->tam << ", TOTAL = " <<  f->total;
    cout << ", I = " << f->inicio << ", F = " <<  f->fim << "} -> ";


    if (!f->dados)  // retorna se a fila n�o foi inicializada
        return;

    //A quantidade de dados armazenados na fila pode ser menor que o tamanho do vetor de dados "f->dados"
    //Assim, o vetor de dados "f->dados" pode conter posi��es livres quando a fila n�o est� cheia.
    //O vetor "dadosFila[f->tam]" foi usado para determinar se uma posi��o i do vetor f->dados est� livre ou n�o
    bool dadosFila[f->tam];

    //inicializa o vetor, indicando que que todos as posi��es do vetor est�o livres, ou seja, fila vazia
    for(int i = 0; i < f->tam; i++)
        dadosFila[i] = false;

    //Atribui TRUE para cada posi��o do vetor de dados que armazena um valor da fila
    int idx = f->inicio;
    for(int i = 0; i < f->total; i++) // FOR percorrendo f->inicio at� f->fim
    {
        dadosFila[idx] = true;
        idx++;
        if(idx >= f->tam)
            idx=0; //circular
    }

    //imprimir o vetor, colocando "-" para posi��es livres
    cout << "[";
    for(int i = 0; i < f->tam; i++)
    {
        //para cada posi��o n�o nula do vetor de dados, imprimir o valor do dado
        if(dadosFila[i])
            cout << f->dados[i];
        else
            cout << "-";

        if(i < f->tam-1)
            cout << ", ";
    }
    cout << "]\n";
}

#endif // _HPP_FILA


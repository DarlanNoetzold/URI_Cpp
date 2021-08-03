#include <bits/stdc++.h>
using namespace std;

#ifndef _HPP_FILA_DINAMICA
#define _HPP_FILA_DINAMICA

#include "Estruturas.hpp"

typedef Pessoa DadoNoFila;

struct NoFila
{
    DadoNoFila dado; //informacao do n�
    NoFila *prox; //proximo elemento da fila
};

struct Fila
{
    NoFila *inicio;
    NoFila *fim;

    Fila(){ //Construtor. Usado para inicializar os dados das vari�veis da struct
        inicio = nullptr;
        fim = nullptr;
    }
};


///inicializa��o dos dados da fila
void inicializaF(Fila *f)
{
    //define nulo para o in�nio e o fim da fila
    f->inicio = nullptr;
    f->fim = nullptr;
}

bool vaziaF(Fila *f)
{
    if (!f->inicio) //verifica se a fila est� vazia, ou seja, (f->inicio == NULL)
        return true;
    else
        return false;
}


//Enqueue
bool enfileiraF(Fila *f, DadoNoFila dado)
{
    NoFila *novo = new NoFila();
    if (!novo) /// n�o conseguiu alocar mem�ria (novo == NULL)
        return false;

    novo->dado = dado;
    novo->prox = nullptr;
    if (!f->inicio) //verifica se a fila est� vazia, ou seja, (f->inicio == NULL)
        f->inicio = novo;
    else
        f->fim->prox = novo;

    f->fim = novo;
    return true;
}

//Dequeue
bool desenfileiraF(Fila *f, DadoNoFila *dado)
{
    // se n�o estiver vazia, retira valor
    if (f->inicio) //verifica se a fila n�o est� vazia, ou seja, (f->inicio != NULL)
    {
        *dado = f->inicio->dado; //pega o dado armazenado no primeiro n�
        NoFila *apagar = f->inicio; //guarda o primeiro n� em uma vari�vel auxiliar;
        f->inicio = f->inicio->prox; // atualiza o in�cio da fila
        delete apagar;  // libera a mem�ria

        if (!f->inicio) //verifica se a fila est� vazia, ou seja, (f->inicio == NULL)
            f->fim = nullptr;

        return true;
    }
    else
        return false;
}

//peek
bool espiaF(Fila* f, DadoNoFila *dado)
{
    if (f->inicio) //verifica se a fila n�o est� vazia, ou seja, (f->inicio != NULL)
    {
        *dado= f->inicio->dado;
        return true;
    }
    else
        return false;
}

//show
void mostraF(Fila *f)
{
    cout << "Fila: ";

    if(f->inicio) //verifica se a fila n�o est� vazia, ou seja, (f->inicio != NULL)
    {

        cout << "[";

        NoFila *no = f->inicio;
        while (no) //fa�a enquanto (no != NULL)
        {
            cout << no->dado.nomeCompleto;
            no = no->prox;

            if(no) //verifica se o pr�ximo n� n�o � nulo (no != NULL)
                cout << ", ";
        }
        cout << "]" << endl;
    }
    else
        cout << "vazia!\n";
}

// retorna true se o valor existe na fila
// retorna false se o valor n�o existe na fila
bool buscaF(Fila *f, DadoNoFila dado)
{

    NoFila *no = f->inicio;
    while (no) //fa�a enquanto (no != NULL)
    {
        if(no->dado.nomeCompleto == dado.nomeCompleto)
            return true;

        no = no->prox;
    }

    return false;
}

void destroiF(Fila *f)
{

    NoFila *no = f->inicio;
    while (no) //fa�a enquanto (no != NULL)
    {
        NoFila *apagar = no; //guarda o n� em uma vari�vel auxiliar;

        no = no->prox;

        delete apagar;
    }

    f->inicio = nullptr;
    f->fim = nullptr;
}

#endif // _HPP_FILA_DINAMICA






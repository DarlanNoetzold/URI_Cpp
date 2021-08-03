#include <bits/stdc++.h>
using namespace std;

#ifndef _HPP_FilaEmpresa_DINAMICA
#define _HPP_FilaEmpresa_DINAMICA

#include "Estruturas.hpp"

typedef Empresa DadoNoFilaEmpresa;

struct NoFilaEmpresa
{
    DadoNoFilaEmpresa dado; //informacao do n�
    NoFilaEmpresa *prox; //proximo elemento da FilaEmpresa
};

struct FilaEmpresa
{
    NoFilaEmpresa *inicio;
    NoFilaEmpresa *fim;

    FilaEmpresa(){ //Construtor. Usado para inicializar os dados das vari�veis da struct
        inicio = nullptr;
        fim = nullptr;
    }
};


///inicializa��o dos dados da FilaEmpresa
void inicializaFilaEmpresa(FilaEmpresa *f)
{
    //define nulo para o in�nio e o fim da FilaEmpresa
    f->inicio = nullptr;
    f->fim = nullptr;
}

bool vaziaFilaEmpresa(FilaEmpresa *f)
{
    if (!f->inicio) //verifica se a FilaEmpresa est� vazia, ou seja, (f->inicio == NULL)
        return true;
    else
        return false;
}


//Enqueue
bool enfileiraFilaEmpresa(FilaEmpresa *f, DadoNoFilaEmpresa dado)
{
    NoFilaEmpresa *novo = new NoFilaEmpresa();
    if (!novo) /// n�o conseguiu alocar mem�ria (novo == NULL)
        return false;

    novo->dado = dado;
    novo->prox = nullptr;
    if (!f->inicio) //verifica se a FilaEmpresa est� vazia, ou seja, (f->inicio == NULL)
        f->inicio = novo;
    else
        f->fim->prox = novo;

    f->fim = novo;
    return true;
}

//Dequeue
bool desenfileiraFilaEmpresa(FilaEmpresa *f, DadoNoFilaEmpresa *dado)
{
    // se n�o estiver vazia, retira valor
    if (f->inicio) //verifica se a FilaEmpresa n�o est� vazia, ou seja, (f->inicio != NULL)
    {
        *dado = f->inicio->dado; //pega o dado armazenado no primeiro n�
        NoFilaEmpresa *apagar = f->inicio; //guarda o primeiro n� em uma vari�vel auxiliar;
        f->inicio = f->inicio->prox; // atualiza o in�cio da FilaEmpresa
        delete apagar;  // libera a mem�ria

        if (!f->inicio) //verifica se a FilaEmpresa est� vazia, ou seja, (f->inicio == NULL)
            f->fim = nullptr;

        return true;
    }
    else
        return false;
}

//peek
bool espiaFilaEmpresa(FilaEmpresa* f, DadoNoFilaEmpresa *dado)
{
    if (f->inicio) //verifica se a FilaEmpresa n�o est� vazia, ou seja, (f->inicio != NULL)
    {
        *dado= f->inicio->dado;
        return true;
    }
    else
        return false;
}

//show
void mostraFilaEmpresa(FilaEmpresa *f)
{
    cout << "FilaEmpresa: ";

    if(f->inicio) //verifica se a FilaEmpresa n�o est� vazia, ou seja, (f->inicio != NULL)
    {

        cout << "[";

        NoFilaEmpresa *no = f->inicio;
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

// retorna true se o valor existe na FilaEmpresa
// retorna false se o valor n�o existe na FilaEmpresa
bool buscaFilaEmpresa(FilaEmpresa *f, DadoNoFilaEmpresa dado)
{

    NoFilaEmpresa *no = f->inicio;
    while (no) //fa�a enquanto (no != NULL)
    {
        if(no->dado.nomeCompleto == dado.nomeCompleto)
            return true;

        no = no->prox;
    }

    return false;
}

void destroiFilaEmpresa(FilaEmpresa *f)
{

    NoFilaEmpresa *no = f->inicio;
    while (no) //fa�a enquanto (no != NULL)
    {
        NoFilaEmpresa *apagar = no; //guarda o n� em uma vari�vel auxiliar;

        no = no->prox;

        delete apagar;
    }

    f->inicio = nullptr;
    f->fim = nullptr;
}

#endif // _HPP_FilaEmpresa_DINAMICA






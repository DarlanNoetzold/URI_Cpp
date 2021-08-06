#include <bits/stdc++.h>
using namespace std;

#ifndef _HPP_FilaPessoa_DINAMICA
#define _HPP_FilaPessoa_DINAMICA

#include "Estruturas.hpp"

typedef Pessoa DadoNoFilaPessoa;

struct NoFilaPessoa
{
    DadoNoFilaPessoa dado; //informacao do n�
    NoFilaPessoa *prox; //proximo elemento da FilaPessoa
};

struct FilaPessoa
{
    NoFilaPessoa *inicio;
    NoFilaPessoa *fim;

    FilaPessoa(){ //Construtor. Usado para inicializar os dados das vari�veis da struct
        inicio = nullptr;
        fim = nullptr;
    }
};


///inicializa��o dos dados da FilaPessoa
void inicializaFilaPessoa(FilaPessoa *f)
{
    //define nulo para o in�nio e o fim da FilaPessoa
    f->inicio = nullptr;
    f->fim = nullptr;
}

bool vaziaFilaPessoa(FilaPessoa *f)
{
    if (!f->inicio) //verifica se a FilaPessoa est� vazia, ou seja, (f->inicio == NULL)
        return true;
    else
        return false;
}


//Enqueue
bool enfileiraFilaPessoa(FilaPessoa *f, DadoNoFilaPessoa dado)
{
    NoFilaPessoa *novo = new NoFilaPessoa();
    if (!novo) /// n�o conseguiu alocar mem�ria (novo == NULL)
        return false;

    novo->dado = dado;
    novo->prox = nullptr;
    if (!f->inicio) //verifica se a FilaPessoa est� vazia, ou seja, (f->inicio == NULL)
        f->inicio = novo;
    else
        f->fim->prox = novo;

    f->fim = novo;
    return true;
}

//Dequeue
bool desenfileiraFilaPessoa(FilaPessoa *f, DadoNoFilaPessoa *dado)
{
    // se n�o estiver vazia, retira valor
    if (f->inicio) //verifica se a FilaPessoa n�o est� vazia, ou seja, (f->inicio != NULL)
    {
        *dado = f->inicio->dado; //pega o dado armazenado no primeiro n�
        NoFilaPessoa *apagar = f->inicio; //guarda o primeiro n� em uma vari�vel auxiliar;
        f->inicio = f->inicio->prox; // atualiza o in�cio da FilaPessoa
        delete apagar;  // libera a mem�ria

        if (!f->inicio) //verifica se a FilaPessoa est� vazia, ou seja, (f->inicio == NULL)
            f->fim = nullptr;

        return true;
    }
    else
        return false;
}

//peek
bool espiaFilaPessoa(FilaPessoa* f, DadoNoFilaPessoa *dado)
{
    if (f->inicio) //verifica se a FilaPessoa n�o est� vazia, ou seja, (f->inicio != NULL)
    {
        *dado= f->inicio->dado;
        return true;
    }
    else
        return false;
}

//show
void mostraFilaPessoa(FilaPessoa *f)
{
    cout << "FilaPessoa: ";

    if(f->inicio) //verifica se a FilaPessoa n�o est� vazia, ou seja, (f->inicio != NULL)
    {

        cout << "[";

        NoFilaPessoa *no = f->inicio;
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


void mostraFilaPessoaUnificada(FilaPessoa *f1, FilaPessoa *f2){
    NoFilaPessoa *no = f1->inicio;
    int totalPessoas = 0, fem = 0, masc = 0, def = 0, gest = 0;
    while (no){
        totalPessoas++;
        if (no->dado.defFisico){
            def++;
        }
        if (no->dado.gestante){
            gest++;
        }
        if (no->dado.sexo == "feminino"){
            fem++;
        }
        else if (no->dado.sexo == "masculino"){
            masc++;
        }
        no = no->prox;
    }

    NoFilaPessoa *no2 = f2->inicio;
    while (no2){
        totalPessoas++;
        if (no2->dado.defFisico){
            def++;
        }
        if (no2->dado.gestante){
            gest++;
        }
        if (no2->dado.sexo == "feminino"){
            fem++;
        }
        else if (no2->dado.sexo == "masculino"){
            masc++;
        }
        no2 = no2->prox;
    }

    cout << "O total de pessoas na fila eh: " << totalPessoas << endl;
    cout << "Existem " << fem << " mulheres." << endl;
    cout << "Existem " << masc << " homens." << endl;
    cout << "Existem " << def << " deficientes." << endl;
    cout << "Existem " << gest << " gestantes." << endl;
}

// retorna true se o valor existe na FilaPessoa
// retorna false se o valor n�o existe na FilaPessoa
bool buscaFilaPessoa(FilaPessoa *f, DadoNoFilaPessoa dado)
{

    NoFilaPessoa *no = f->inicio;
    while (no) //fa�a enquanto (no != NULL)
    {
        if(no->dado.nomeCompleto == dado.nomeCompleto)
            return true;

        no = no->prox;
    }

    return false;
}

void totalFilaPessoa(FilaPessoa *f, int *total){
    NoFilaPessoa *no = f->inicio;
    while (no){
        *total++;
        no = no->prox;
    }
}

void destroiFilaPessoa(FilaPessoa *f)
{

    NoFilaPessoa *no = f->inicio;
    while (no) //fa�a enquanto (no != NULL)
    {
        NoFilaPessoa *apagar = no; //guarda o n� em uma vari�vel auxiliar;

        no = no->prox;

        delete apagar;
    }

    f->inicio = nullptr;
    f->fim = nullptr;
}

#endif // _HPP_FilaPessoa_DINAMICA






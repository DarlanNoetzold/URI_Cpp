#include <bits/stdc++.h>
using namespace std;
#ifndef _HPP_PilhaFichaDoacao_DINAMICA
#define _HPP_PilhaFichaDoacao_DINAMICA

#include <iomanip> //biblioteca usada para formatar a impress�o da PilhaFichaDoacao

#include "Estruturas.hpp"

struct No
{
    FichaDoacao dado; //informacao do n�
    No *prox; //proximo elemento da PilhaFichaDoacao
};

struct PilhaFichaDoacao
{
    No *topo;

    PilhaFichaDoacao(){ //Construtor. Usado para inicializar os dados das vari�veis da struct
        topo = nullptr;
    }
};


///inicializa��o dos dados da PilhaFichaDoacao
void inicializaFichaDoacao(PilhaFichaDoacao *p)
{
    p->topo = nullptr; //define nulo para o topo da PilhaFichaDoacao
}

bool vaziaFichaDoacao(PilhaFichaDoacao *p)
{
    if (!p->topo) //(p->topo == NULL)
        return true;
    else
        return false;
}





//push
bool empilhaFichaDoacao(PilhaFichaDoacao *p, FichaDoacao dado)
{
    No *novo =  new No(); //cria um novo n�
    if (!novo) /// sistema n�o conseguiu alocar a mem�ria
        return false;

    novo->dado = dado; //armazena a informa��o no n�
    novo->prox = p->topo; //o pr�ximo elemento do n� criado ser� o �ltimo elemento da PilhaFichaDoacao
    p->topo = novo; //atualiza o topo da PilhaFichaDoacao para o n� criado.
    return true;
}

//pop
bool desempilhaFichaDoacao(PilhaFichaDoacao *p, FichaDoacao *dado)
{
    // se n�o estiver vazia, retira valor
    if (!vaziaFichaDoacao(p))
    {
        *dado = p->topo->dado; //pega o dado armazenado no n� do topo
        No *apagar = p->topo; //guarda o n� do topo em uma vari�vel auxiliar;
        p->topo = p->topo->prox; //atualiza o topo para o pr�ximo elemento;
        delete apagar;  /// libera a mem�ria
        return true;
    }
    else
        return false;
}

//peek
bool espiarFichaDoacao(PilhaFichaDoacao* p, FichaDoacao *dado)
{
    if (p->topo)
    {
        *dado= p->topo->dado;
        return true;
    }
    else
        return false;
}


void mostrarFichaDoacao(PilhaFichaDoacao *p)
{
    cout << "PilhaFichaDoacao: " << endl;

    if(!vaziaFichaDoacao(p))
    {
        cout << "--------------------------------------------" << endl;
        cout << setfill(' ') << std::setw(13) << "N�" << " | ";
        cout << setfill(' ') << std::setw(13) << "Prox" << " | ";
        cout << setfill(' ') << std::setw(10) << "Dado" << " |" << endl;
        cout << "--------------------------------------------" << endl;
        No *no = p->topo;
        while (no != NULL)
        {
            cout << setfill(' ') << std::setw(13) << no << " | ";
            cout << setfill(' ') << std::setw(13) << no->prox << " | ";
            cout << setfill(' ') << std::setw(10) << no->dado.pessoa.nomeCompleto << " |" << endl;

            no = no->prox;
        }
        cout << "--------------------------------------------" << endl;
    }
}

/// retorna true se o valor existe na PilhaFichaDoacao
/// retorna false se o valor n�o existe na PilhaFichaDoacao
bool buscarFichaDoacao(PilhaFichaDoacao *p, FichaDoacao dado)
{

    No *no = p->topo;
    while (no != NULL)
    {
        if(no->dado.pessoa.nomeCompleto == dado.pessoa.nomeCompleto)
            return true;

        no = no->prox;
    }

    return false;

}

void desalocarFichaDoacao(PilhaFichaDoacao *p)
{
    FichaDoacao dado;
    while(!vaziaFichaDoacao(p))
        desempilhaFichaDoacao(p, &dado);
}

#endif // _HPP_PilhaFichaDoacao






#include <bits/stdc++.h>
using namespace std;
#ifndef _HPP_PilhaObjeto_DINAMICA
#define _HPP_PilhaObjeto_DINAMICA

#include <iomanip> //biblioteca usada para formatar a impress�o da PilhaObjeto

#include "Estruturas.hpp"

struct No
{
    Objeto dado; //informacao do n�
    No *prox; //proximo elemento da PilhaObjeto
};

struct PilhaObjeto
{
    No *topo;

    PilhaObjeto(){ //Construtor. Usado para inicializar os dados das vari�veis da struct
        topo = nullptr;
    }
};


///inicializa��o dos dados da PilhaObjeto
void inicializaObjeto(PilhaObjeto *p)
{
    p->topo = nullptr; //define nulo para o topo da PilhaObjeto
}

bool vaziaObjeto(PilhaObjeto *p)
{
    if (!p->topo) //(p->topo == NULL)
        return true;
    else
        return false;
}





//push
bool empilhaObjeto(PilhaObjeto *p, Objeto dado)
{
    No *novo =  new No(); //cria um novo n�
    if (!novo) /// sistema n�o conseguiu alocar a mem�ria
        return false;

    novo->dado = dado; //armazena a informa��o no n�
    novo->prox = p->topo; //o pr�ximo elemento do n� criado ser� o �ltimo elemento da PilhaObjeto
    p->topo = novo; //atualiza o topo da PilhaObjeto para o n� criado.
    return true;
}

//pop
bool desempilhaObjeto(PilhaObjeto *p, Objeto *dado)
{
    // se n�o estiver vazia, retira valor
    if (!vaziaObjeto(p))
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
bool espiar(PilhaObjeto* p, Objeto *dado)
{
    if (p->topo)
    {
        *dado= p->topo->dado;
        return true;
    }
    else
        return false;
}


void mostrarObjeto(PilhaObjeto *p)
{
    cout << "PilhaObjeto: " << endl;

    if(!vaziaObjeto(p))
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
            cout << setfill(' ') << std::setw(10) << no->dado.descricao << " |" << endl;

            no = no->prox;
        }
        cout << "--------------------------------------------" << endl;
    }
}

/// retorna true se o valor existe na PilhaObjeto
/// retorna false se o valor n�o existe na PilhaObjeto
bool buscarObjeto(PilhaObjeto *p, Objeto dado)
{

    No *no = p->topo;
    while (no != NULL)
    {
        if(no->dado.descricao == dado.descricao)
            return true;

        no = no->prox;
    }

    return false;

}

void desalocarObjeto(PilhaObjeto *p)
{
    Objeto dado;
    while(!vaziaObjeto(p))
        desempilhaObjeto(p, &dado);
}

#endif // _HPP_PilhaObjeto






#include <bits/stdc++.h>
using namespace std;
#ifndef _HPP_PilhaFichaDoacao_DINAMICA
#define _HPP_PilhaFichaDoacao_DINAMICA

#include <iomanip> //biblioteca usada para formatar a impress�o da PilhaFichaDoacao

#include "Estruturas.hpp"

struct NoFichaObjeto
{
    FichaDoacao dado; //informacao do n�
    NoFichaObjeto *prox; //proximo elemento da PilhaFichaDoacao
};

struct PilhaFichaDoacao
{
    NoFichaObjeto *topo;

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
    NoFichaObjeto *NoFichaObjetovo =  new NoFichaObjeto(); //cria um NoFichaObjetovo n�
    if (!NoFichaObjetovo) /// sistema n�o conseguiu alocar a mem�ria
        return false;

    NoFichaObjetovo->dado = dado; //armazena a informa��o NoFichaObjeto n�
    NoFichaObjetovo->prox = p->topo; //o pr�ximo elemento do n� criado ser� o �ltimo elemento da PilhaFichaDoacao
    p->topo = NoFichaObjetovo; //atualiza o topo da PilhaFichaDoacao para o n� criado.
    return true;
}

//pop
bool desempilhaFichaDoacao(PilhaFichaDoacao *p, FichaDoacao *dado)
{
    // se n�o estiver vazia, retira valor
    if (!vaziaFichaDoacao(p))
    {
        *dado = p->topo->dado; //pega o dado armazenado NoFichaObjeto n� do topo
        NoFichaObjeto *apagar = p->topo; //guarda o n� do topo em uma vari�vel auxiliar;
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
        NoFichaObjeto *NoFichaObjeto = p->topo;
        while (NoFichaObjeto != NULL)
        {
            cout << setfill(' ') << std::setw(13) << NoFichaObjeto << " | ";
            cout << setfill(' ') << std::setw(13) << NoFichaObjeto->prox << " | ";
            cout << setfill(' ') << std::setw(10) << NoFichaObjeto->dado.pessoa.nomeCompleto << " |" << endl;

            NoFichaObjeto = NoFichaObjeto->prox;
        }
        cout << "--------------------------------------------" << endl;
    }
}

/// retorna true se o valor existe na PilhaFichaDoacao
/// retorna false se o valor n�o existe na PilhaFichaDoacao
bool buscarFichaDoacao(PilhaFichaDoacao *p, FichaDoacao dado)
{

    NoFichaObjeto *NoFichaObjeto = p->topo;
    while (NoFichaObjeto != NULL)
    {
        if(NoFichaObjeto->dado.pessoa.nomeCompleto == dado.pessoa.nomeCompleto)
            return true;

        NoFichaObjeto = NoFichaObjeto->prox;
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






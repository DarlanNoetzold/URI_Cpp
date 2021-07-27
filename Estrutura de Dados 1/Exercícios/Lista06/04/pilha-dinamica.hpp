#include <bits/stdc++.h>
using namespace std;

#ifndef _HPP_PILHA_DINAMICA
#define _HPP_PILHA_DINAMICA

#include <iomanip> //biblioteca usada para formatar a impress�o da pilha

struct No
{
    int dado; //informacao do n�
    No *prox; //proximo elemento da pilha
};

struct Pilha
{
    No *topo;

    Pilha(){ //Construtor. Usado para inicializar os dados das vari�veis da struct
        topo = nullptr;
    }
};


///inicializa��o dos dados da pilha
void inicializa(Pilha *p)
{
    p->topo = nullptr; //define nulo para o topo da pilha
}

bool vazia(Pilha *p)
{
    if (!p->topo) //(p->topo == NULL)
        return true;
    else
        return false;
}





//push
bool empilhar(Pilha *p, int dado)
{
    No *novo =  new No(); //cria um novo n�
    if (!novo) /// sistema n�o conseguiu alocar a mem�ria
        return false;

    novo->dado = dado; //armazena a informa��o no n�
    novo->prox = p->topo; //o pr�ximo elemento do n� criado ser� o �ltimo elemento da pilha
    p->topo = novo; //atualiza o topo da pilha para o n� criado.
    return true;
}

//pop
bool desempilhar(Pilha *p, int *dado)
{
    // se n�o estiver vazia, retira valor
    if (!vazia(p))
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
bool espiar(Pilha* p, int *dado)
{
    if (p->topo)
    {
        *dado= p->topo->dado;
        return true;
    }
    else
        return false;
}


void mostrar(Pilha *p)
{
    cout << "PILHA: " << endl;

    if(!vazia(p))
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
            cout << setfill(' ') << std::setw(10) << no->dado << " |" << endl;

            no = no->prox;
        }
        cout << "--------------------------------------------" << endl;
    }
}

/// retorna true se o valor existe na pilha
/// retorna false se o valor n�o existe na pilha
bool buscar(Pilha *p, int dado)
{

    No *no = p->topo;
    while (no != NULL)
    {
        if(no->dado == dado)
            return true;

        no = no->prox;
    }

    return false;

}

void desalocar(Pilha *p)
{
    int dado;
    while(!vazia(p))
        desempilhar(p, &dado);
}

#endif // _HPP_PILHA






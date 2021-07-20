#include <bits/stdc++.h>
using namespace std;

#ifndef _HPP_PILHA
#define _HPP_PILHA

#include <iomanip> //biblioteca usada para formatar a impress�o da pilha

struct Pilha
{
    int tam;
    int base;
    int topo;
    char *dados; //Vetor que ser� alocado para armazenar os elementos da pilha

    Pilha() //Construtor. Usado para inicializar os dados das vari�veis da struct
    {
        tam=0;
        base = -1;
        topo = -1;
        dados = NULL;
    }
};

///inicializa��o dos dados da pilha
void inicializa(Pilha *p, int tam)
{
  p->base = -1; ///  (*p).base = -1;  /// p->base  p.topo
  p->topo = -1;
  p->tam  =  tam;
  p->dados = new char[tam];///aloca mem�ria dinamicamente

}

void desalocar(Pilha *p)
{
    p->base = -1;
    p->topo = -1;
    p->tam = 0;

    if(p->dados != NULL)
    {
        delete[] (p->dados);
        p->dados = NULL;
    }
}

bool cheia(Pilha *p)
{
    if (p->topo == p->tam - 1)
        return true;
    else
        return false;
}

bool vazia(Pilha *p)
{
    if (p->topo == p->base)
        return true;
    else
        return false;
}

bool empilhar(Pilha *p, int valor)
{
    /// retorna false se a pilha n�o foi inicializada ou se cheia
    if (p->dados == NULL || cheia(p))
        return false;
    else{
        p->topo++;
        p->dados[p->topo] = valor;
        return true;
    }
}

bool desempilhar(Pilha *p, char *valor)
{
    ///se a pilha foi inicializada && se n�o estiver vazia, retira valor
    if (p->dados != NULL && !vazia(p))
    {
        *valor = p->dados[p->topo];
        p->topo--;
        return true;
    }
    else
        return false;
}



void mostrar(Pilha *p)
{

    if (p->dados == NULL) /// retorna se a pilha n�o foi inicializada
        return;

    cout << "PILHA: " << endl;
    cout << "TAM: " << p->tam << endl;
    cout << "TOPO: " << p->topo << endl;
    if(!vazia(p))
    {
        cout << "   ------------" << endl;
        for(int i = p->topo; i > p->base; i--){

            cout << setfill(' ') << std::setw(3) << i << "|";
            cout << setfill(' ') << std::setw(10) << p->dados[i] << "|" << endl;
            cout << "   ------------" << endl;
        }
    }
}

/// retorna true se o valor existe na pilha
/// retorna false se o valor n�o existe na pilha
bool buscar(Pilha *p, int valor)
{

   if (p->dados == NULL) /// retorna false se a pilha n�o foi inicializada
        return false;

   for(int i = p->topo ; i > p->base; i--)
   {
       if (valor == p->dados[i])
          return true;
   }
   return false;

}

#endif // _HPP_PILHA






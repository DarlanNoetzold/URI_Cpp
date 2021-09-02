#include <bits/stdc++.h>
using namespace std;

#ifndef _HPP_LISTA_DESCRITOR
#define _HPP_LISTA_DESCRITOR

struct Func{
    int cod;
    string nome;
    int idade;
    double salario;
};

typedef Func DadoNoLista;

struct No
{
    DadoNoLista dado;
    struct No *prox;
    No() // construtor
    {
        dado.cod = 0;
        dado.nome = "";
        dado.idade = 0;
        dado.salario = 0.0;
        prox = nullptr;
    }
};

struct Lista
{
    No *inicio;
    No *fim;
    int tamanho;
    Lista() /// construtor
    {
        //cout << "\n executando o construtor...\n";
        inicio = nullptr;
        fim = nullptr;
        tamanho =0;
    }
    ~Lista() /// desconstrutor /// quando chame delete(ponteiro)
    {
        //cout << "\n executando o desconstrutor....\n";
        No *n = inicio;
        while(n)
        {
            No *aux = n;
            n = n->prox;
            delete aux;
        }
    }
};


/// quando cout receber uma struct No
ostream& operator<<(ostream& os, const No *n)
{
    /// cout << n
    return os <<"\n--Informacoes:"<<"\nCodigo: "<< n->dado.cod << "\nIdade: "<<n->dado.idade<< "\nNome: "<<n->dado.nome<< "\nSalario: "<< n->dado.salario;
}

/// quanto cout receber uma struct Lista
ostream& operator << (ostream& os, const Lista *l)
{
    No *n = l->inicio;
    while(n)
    {
        os << n;
        n = n->prox;
        if(n)
            os << ", ";
    }
    return os;
}


bool vaziaL(Lista *lista)
{
    if(! (lista->inicio) )
        return true;
    else
        return false;
}

///insere no in�cio da lista
bool insereInicioL(Lista *lista, DadoNoLista valor)
{

    No *novo = new No();
    if (!novo)
        return false;

    novo->dado = valor;
    novo->prox = lista->inicio;
    lista->inicio = novo;
    lista->tamanho++;
    if (!lista->fim)
        lista->fim = lista->inicio;

    return true;
}


bool removeL(Lista *lista, DadoNoLista valor)
{
    No *anterior = nullptr;
    No *atual = lista->inicio;
    ///fica no la�o enquanto tiver elementos na lista
    /// e n�o encontrar o valor procurado
    while(atual && atual->dado.cod != valor.cod)
    {
        anterior = atual;
        atual = atual->prox;
    }
    /// pode sair do la�o sem encontrar o valor (atual==NULL)
    /// se encontrar >>> atual tem o endere�o do elemento para excluir
    /// NULL == false    >>> !false == true
    if(!atual) /// se atual � NULL >> n�o encontrou
        return false;
    if (!anterior) /// se anterior � igual a NULL
    {
        /// o elemento a ser exclu�do est� no in�cio da lista
        lista->inicio = atual->prox;
        if (!lista->inicio) ///lista ficou vazia ?
            lista->fim = lista->inicio;
    }
    else   /// elemento est� no meio ou no fim
    {
        anterior->prox = atual->prox;
        if (!atual->prox)/// se for retirado �ltimo da lista
            lista->fim = anterior;
    }
    /// libera a mem�ria do elemento
    lista->tamanho--;

    delete(atual);
    return true;

}

No* buscaL(Lista *lista, DadoNoLista valor)
{
    No *n = lista->inicio;
    while (n)
    {
        if (n->dado.cod == valor.cod)
            return n;

        n = n->prox;
    }

    return nullptr;
}

bool inserePosicaoL(Lista *lista, DadoNoLista valor, int posicao)
{
    No *anterior = NULL;
    No *atual = lista->inicio;
    int p = 0;
    while (atual && p!=posicao)
    {
        anterior = atual;
        atual = atual->prox;
        p++;
    }
    if (p != posicao)
        return false; ///significa q n�o encontrou a posi��o

    No *novo = new No();
    novo->dado = valor;
    if(!anterior)/// inclus�o no in�cio da lista
    {
        novo->prox = lista->inicio;
        lista->inicio = novo;

        if (!lista->fim)
            lista->fim = lista->inicio;
    }
    else
    {
        novo->prox = anterior->prox;
        anterior->prox = novo;

        if (!novo->prox) //o n� adicionado est� no final da lista?
            lista->fim = novo;
    }

    lista->tamanho++;

    return true;
}

void mostraDescritorL(Lista *lista){
    if(lista->fim && lista->inicio){
        cout<<"\n\nDescritor ["<<lista->tamanho<<", "<<lista->fim->dado.cod<<", "<<lista->inicio->dado.cod<<"]\n\n";
    }else{
        cout<<"NULL";
    }
}

bool insereInicio(Lista *lista, DadoNoLista valor){
    No *novo = new No();
    novo->dado = valor;

    novo->prox = lista->inicio;
    lista->inicio = novo;

    if (!lista->fim)
        lista->fim = lista->inicio;

    lista->tamanho++;
    
    return true;
}

bool insereFim(Lista *lista, DadoNoLista valor){
    No *novo = new No();
    novo->dado = valor;

    lista->fim = novo;
    
    lista->tamanho++;
    return true;
}

double mediaSalario(Lista *lista){
    No *anterior = NULL;
    No *atual = lista->inicio;
    double soma=0.0;
    int p=0;
    while (atual && atual != lista->fim){
        soma += atual->dado.salario;
        p++;

        anterior = atual;
        atual = atual->prox;

    }

    return soma/p;
}

void salMenorMedia(Lista *lista){
    No *anterior = NULL;
    No *atual = lista->inicio;

    while (atual && atual != lista->fim){
        if(mediaSalario(lista) > atual->dado.salario){
            cout<<atual->dado.nome;
        }
        anterior = atual;
        atual = atual->prox;

    }
}


#endif // _HPP_LISTA_DESCRITOR




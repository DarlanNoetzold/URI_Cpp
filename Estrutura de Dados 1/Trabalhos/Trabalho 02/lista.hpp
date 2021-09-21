#ifndef _HPP_LISTA
#define _HPP_LISTA

#include <string>
#include <iostream>


//pr�-declara��o da struct Usuario
struct Usuario;

struct No
{
    Usuario *dado; //referencia do usu�rio, evita duplicar dados entre as lista de amigos e a lista de usu�rios da rede
    No *prox;

    No()
    {
        dado = nullptr;
        prox = nullptr;
    }
};

struct Lista
{
    No* inicio;
    No* fim;
    int tamanho;
    Lista() //inicializa a lista!
    {
        inicio = nullptr;
        fim = nullptr;
        tamanho = 0;
    }
    ~Lista() //destroi a lista!
    {

        No *n = inicio;
        while(n)
        {
            No *aux = n;
            n = n->prox;

            delete aux; //apaga apenas o n�, "Usuario *dado" ainda permanece alocado
        }
        inicio = nullptr;
        fim = nullptr;
        tamanho = 0;
    }
};

//alocar mem�ria para criar um usu�rio: Usuario* usr = new  Usuario(1, 20, 0, "Joao");"
struct Usuario
{
    int ID;
    int idade;
    int sexo;
    std::string nome;
    Lista *amigos; //lista de amigos


    Usuario(int id, int ida, int sx, string nm)
    {
        ID = id;
        idade = ida;
        sexo = sx;
        nome =  nm;
        amigos = new Lista();
    }

    Usuario()
    {
        ID = 0;
        idade = 0;
        sexo = 0;
        nome =  "";
        amigos = nullptr;
    }

    ~Usuario()
    {

        if(amigos)
            delete amigos;
        amigos = nullptr;

        ID = 0;
        idade = 0;
        sexo = 0;
        nome =  "";
        amigos = nullptr;
    }
};



void escreveLista(Lista *lista){
    No *n = lista->inicio;

    ofstream escreve("saida.txt",ios::app);
    escreve<<"Usuários da rede: ";
    
    while(n){
        escreve<<n->dado->nome<<" ("<<n->dado->ID<<") ";
        n = n->prox;
    }

    escreve<<endl;
    escreve.close();
}

void insereOrdenado(Lista *lista, Usuario *valor){
    No *anterior = nullptr;
    No *atual = lista->inicio;
    while (atual && atual->dado->ID <= valor->ID)
    {
        anterior = atual;
        atual = atual->prox;
    }

    No *novo = new No();
    novo->dado = valor;
    if (!anterior) {
        novo->prox = lista->inicio;
        lista->inicio = novo;

        if (!lista->fim)
            lista->fim = lista->inicio;
    }
    else{
        novo->prox = anterior->prox;
        anterior->prox = novo;
    }
}

No* buscaL(Lista *lista, Usuario *valor)
{
    No *n = lista->inicio;
    while (n)
    {
        if (n->dado->ID == valor->ID)
            return n;

        n = n->prox;
    }

    return nullptr;
}

#endif // _HPP_LISTA




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

No* buscaL(Lista *lista, int valor)
{
    No *n = lista->inicio;
    while (n)
    {
        if (n->dado->ID == valor)
            return n;

        n = n->prox;
    }

    return nullptr;
}

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

void escreveAmigos(Lista *lista, int ID){
    ofstream escreve("saida.txt",ios::app);

    if(!buscaL(lista, ID)){
        escreve<<"Erro ao imprimir amigos do usuário com ID "<<ID<<". O usuário não existe!"<<endl;
    }

    No *usuario = buscaL(lista, ID);

    escreve<<"Amigos de "<<usuario->dado->nome<<" ("<<usuario->dado->ID<<"): ";
    No *n = usuario->dado->amigos->inicio;
    while(n){
        escreve<<n->dado->nome<<" ("<<n->dado->ID<<") ";
        n = n->prox;
    }

    escreve<<endl;
    escreve.close();
}

bool insereOrdenado(Lista *lista, Usuario *valor){
    No *anterior = nullptr;
    No *atual = lista->inicio;
    
    while (atual && atual->dado->ID <= valor->ID)
    {
        anterior = atual;
        atual = atual->prox;
    }

    No *novo = new No();
    if (!novo)
        return false;
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

    return true;
}

bool insereL(Lista *lista, No *valor){
    No *novo = new No();
    if (!novo)
        return false;

    novo->dado = valor->dado;
    novo->prox = lista->inicio;
    lista->inicio = novo;
    lista->tamanho++;
    if (!lista->fim)
        lista->fim = lista->inicio;
    return true;
}

bool imprimirMediaIdadeAmigos(Lista *lista, int ID){
    ofstream escreve("saida.txt",ios::app);

    if(!buscaL(lista, ID)){
        escreve<<"Erro ao imprimir a média de idade dos amigos do usuário com ID "<<ID<<". O usuário não existe!"<<endl;
    }

    No *usuario = buscaL(lista, ID);

    escreve<<"Média de idade dos amigos de "<<usuario->dado->nome<<" ("<<usuario->dado->ID<<"): ";
    No *n = usuario->dado->amigos->inicio;
    double soma;
    while(n){
        soma += usuario->dado->idade;
        n = n->prox;
    }
    escreve<<soma/usuario->dado->amigos->tamanho;
    escreve<<endl;
    escreve.close();
}

#endif // _HPP_LISTA




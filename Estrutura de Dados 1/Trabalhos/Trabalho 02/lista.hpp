#ifndef _HPP_LISTA
#define _HPP_LISTA


#include <string>
#include <iostream>


//pré-declaração da struct Usuario
struct Usuario;

struct No
{
    Usuario *dado; //referencia do usuário, evita duplicar dados entre as lista de amigos e a lista de usuários da rede
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

            delete aux; //apaga apenas o nó, "Usuario *dado" ainda permanece alocado
        }
        inicio = nullptr;
        fim = nullptr;
        tamanho = 0;
    }
};

//alocar memória para criar um usuário: Usuario* usr = new  Usuario(1, 20, 0, "Joao");"
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


#endif // _HPP_LISTA




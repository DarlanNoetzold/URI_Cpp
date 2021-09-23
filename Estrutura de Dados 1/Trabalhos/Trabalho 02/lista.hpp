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
        return;
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

void imprimirMediaIdadeAmigos(Lista *lista, int ID){
    ofstream escreve("saida.txt",ios::app);

    if(!buscaL(lista, ID)){
        escreve<<"Erro ao imprimir a média de idade dos amigos do usuário com ID "<<ID<<". O usuário não existe!"<<endl;
        return;
    }

    No *usuario = buscaL(lista, ID);

    escreve<<"Media de idade dos amigos de "<<usuario->dado->nome<<" ("<<usuario->dado->ID<<"): ";
    No *n = usuario->dado->amigos->inicio;
    double soma=0.0;
    double cont=0.0;
    while(n){
        cont++;
        soma += n->dado->idade;
        n = n->prox;
    }
    if(cont >0){
        double media = soma/cont;
        escreve<<media;
    }
    escreve<<endl;
    escreve.close();
}

void imprimirAmigosEmComum(Lista *lista, int ID1, int ID2, int sexo){
    ofstream escreve("saida.txt", ios::app);
    if(ID1 == ID2){
        escreve<<"Erro ao imprimir amigos em comum dos usuários com IDs "<< ID1 <<" e "<<ID2<<" !"<<endl;
        return;
    }

    if(sexo == 0){
        if(buscaL(lista, ID2) && buscaL(lista, ID1)){
            No *usuario2 = buscaL(lista, ID2);
            No *usuario1 = buscaL(lista, ID1);
            escreve<<"Amigos em comum entre "<<usuario1->dado->nome<<" ("<<usuario1->dado->ID<<") e "<<usuario2->dado->nome<<" ("<<usuario2->dado->ID<<") (sexo masculino): ";

            No *n1 = usuario1->dado->amigos->inicio;
            
            while(n1){
                No *n2 = usuario2->dado->amigos->inicio;
                while(n2){
                    if(n1->dado->ID == n2->dado->ID && n1->dado->sexo == 0 && n2->dado->sexo == 0){
                        escreve<<n1->dado->nome<<" ("<<n1->dado->ID<<") ";
                    }
                    n2 = n2->prox;
                }
                n1 = n1->prox;
            }
            escreve<<endl;
        }else{
            escreve<<"Erro ao imprimir amigos em comum dos usuários com IDs "<< ID1 <<" e "<<ID2<<" !"<<endl;
            return;
        }
    }else if(sexo == 1){
        if(buscaL(lista, ID2) && buscaL(lista, ID1)){
            No *usuario2 = buscaL(lista, ID2);
            No *usuario1 = buscaL(lista, ID1);
            escreve<<"Amigos em comum entre "<<usuario1->dado->nome<<" ("<<usuario1->dado->ID<<") e "<<usuario2->dado->nome<<" ("<<usuario2->dado->ID<<") (sexo feminino): ";

            No *n1 = usuario1->dado->amigos->inicio;
            
            while(n1){
                No *n2 = usuario2->dado->amigos->inicio;
                while(n2){
                    if(n1->dado->ID == n2->dado->ID && n1->dado->sexo == 1 && n2->dado->sexo == 1){
                        escreve<<n1->dado->nome<<" ("<<n1->dado->ID<<") ";
                    }
                    n2 = n2->prox;
                }
                n1 = n1->prox;
            }
            escreve<<endl;
        }else{
            escreve<<"Erro ao imprimir amigos em comum dos usuários com IDs "<< ID1 <<" e "<<ID2<<" !"<<endl;
            return;
        }
    }else if(sexo == 2){
        if(buscaL(lista, ID2) && buscaL(lista, ID1)){
            No *usuario2 = buscaL(lista, ID2);
            No *usuario1 = buscaL(lista, ID1);
            escreve<<"Amigos em comum entre "<<usuario1->dado->nome<<" ("<<usuario1->dado->ID<<") e "<<usuario2->dado->nome<<" ("<<usuario2->dado->ID<<") (todos os sexos): ";

            No *n1 = usuario1->dado->amigos->inicio;
            
            while(n1){
                No *n2 = usuario2->dado->amigos->inicio;
                while(n2){
                    if(n1->dado->ID == n2->dado->ID){
                        escreve<<n1->dado->nome<<" ("<<n1->dado->ID<<") ";
                    }
                    cout<<"teste "<<n1->dado->ID<<" "<< n2->dado->ID<<endl;
                    n2 = n2->prox;
                }
                n1 = n1->prox;
            }
            escreve<<endl;
        }else{
            escreve<<"Erro ao imprimir amigos em comum dos usuários com IDs "<< ID1 <<" e "<<ID2<<" !"<<endl;
            return;
        }
    }else{
        escreve<<"Erro ao imprimir amigos em comum dos usuários com IDs "<< ID1 <<" e "<<ID2<<" !"<<endl;
        return;
    }

    escreve.close();
}

#endif // _HPP_LISTA




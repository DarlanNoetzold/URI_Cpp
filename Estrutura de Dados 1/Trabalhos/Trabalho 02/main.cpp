#include <iostream>
using namespace std;

#include <cstring>
#include <fstream>
#include "lista.hpp"


void addUsuario(Lista *listaUsuariosRede, int ID, int idade, int sexo, string nome){
    Usuario *novoUsr = new Usuario(ID, idade, sexo, nome);

    ofstream escreve("saida.txt", ios::app);
    if (!buscaL(listaUsuariosRede, novoUsr->ID))
    {
        escreve << "O usuário " << nome << " (" << ID << ") foi adicionado na rede." << endl;
        insereOrdenado(listaUsuariosRede, novoUsr);
    }
    else
    {
        escreve << "Erro ao adicionar o usuário " << nome << " (" << ID << "). O ID " << ID << " já existe!" << endl;
    }
    escreve.close();
}

void addAmigo(Lista *listaUsuariosRede, int ID1, int ID2){
    ofstream escreve("saida.txt", ios::app);

    if(ID1 == ID2){
        escreve<<"Erro ao criar amizade dos usuários com IDs "<< ID1 <<" e "<<ID2<<" !"<<endl;
        return;
    }

    if(buscaL(listaUsuariosRede, ID2) && buscaL(listaUsuariosRede, ID1)){
        No *usuario2 = buscaL(listaUsuariosRede, ID2);
        No *usuario1 = buscaL(listaUsuariosRede, ID1);
        
        if(buscaL(usuario1->dado->amigos, ID2) || buscaL(usuario2->dado->amigos, ID1)){
            escreve<<"Erro ao criar amizade dos usuários com IDs "<< ID1 <<" e "<<ID2<<" !"<<endl;
            return;
        }

        if(!insereOrdenado(usuario1->dado->amigos, usuario2->dado) || !insereOrdenado(usuario2->dado->amigos, usuario1->dado)){
            escreve<<"Erro ao criar amizade dos usuários com IDs "<< ID1 <<" e "<<ID2<<" !"<<endl;
        }else{
            escreve << "Os usuários " << usuario1->dado->nome << " (" << usuario1->dado->ID << ") e " << usuario2->dado->nome << " (" << usuario2->dado->ID << ") se tornaram amigos."<<endl;
        }
    }else{
        escreve<<"Erro ao criar amizade dos usuários com IDs "<< ID1 <<" e "<<ID2<<" !"<<endl;
    }   

    escreve.close();     
}


void removerAmigo(Lista *listaUsuariosRede, int ID1, int ID2){
    ofstream escreve("saida.txt", ios::app);
    if(buscaL(listaUsuariosRede, ID1) && buscaL(listaUsuariosRede, ID2)){
        No *usuario1 = buscaL(listaUsuariosRede, ID1);
        No *usuario2 = buscaL(listaUsuariosRede, ID2);

        if(removeL(usuario1->dado->amigos, usuario2->dado) && removeL(usuario2->dado->amigos, usuario1->dado)){
            escreve << "Os usuários "<<usuario1->dado->nome<<" ("<<usuario1->dado->ID<<") e "<<usuario2->dado->nome<<" ("<<usuario2->dado->ID<<") "<<" não são mais amigos"<<endl;
        }else{
            escreve<< "Erro ao excluir a relação de amigo com IDs "<<ID1<<" e "<<ID2<<". A amizade não existe!"<<endl;
        }
    }else{
        escreve<< "Erro ao excluir a relação de amigo com IDs "<<ID1<<" e "<<ID2<<". Algum usuário não existe!"<<endl;
    }
    escreve.close();
}


bool removerTodasAmizades(Lista *listaUsuariosRede, Lista *lista, int ID){
    No *n = lista->inicio;
    while (n){
        if(buscaL(listaUsuariosRede, ID) && buscaL(listaUsuariosRede, n->dado->ID)){
            No *usuario1 = buscaL(listaUsuariosRede, ID);
            No *usuario2 = buscaL(listaUsuariosRede, n->dado->ID);
            removeL(usuario1->dado->amigos, usuario2->dado);
            removeL(usuario2->dado->amigos, usuario1->dado);
        }
        n = n->prox;
    }

    return true;
}

void removerUsuario(Lista * listaUsuariosRede, int ID1){
    ofstream escreve("saida.txt", ios::app);
    if(buscaL(listaUsuariosRede, ID1)){
        No *usuario = buscaL(listaUsuariosRede, ID1);

        if(removerTodasAmizades(listaUsuariosRede, usuario->dado->amigos, ID1)){
            escreve<<"O usuário "<<usuario->dado->nome<<" ("<<usuario->dado->ID<<") foi excluído da rede."<<endl;
            removeL(listaUsuariosRede, usuario->dado);
            delete usuario;

        }else{
            escreve<<"Erro ao excluir o usuário com ID "<<ID1<<endl;
        }
    }else{
        escreve<<"Erro ao excluir o usuário com ID "<<ID1<<". O usuário não existe!"<<endl;
    }
    escreve.close();
}

void removerTodosUsariosRede(Lista * listaUsuariosRede){
    No *n = listaUsuariosRede->inicio;
    while (n){
        removerUsuario(listaUsuariosRede, n->dado->ID);
        n = n->prox;
    }
}

int main(void){
    setlocale(LC_ALL, "Portuguese");

    Lista *listaUsuariosRede = new Lista();
    string op;
    ifstream ler("entrada.txt", ios::in);
    
    while (!ler.fail()){
        ler >> op;
        if(op == "addUsuario"){
            int ID;
            int idade;
            int sexo;
            string nome;

            ler >> ID;
            ler >> idade;
            ler >> sexo;
            ler >> nome;
            addUsuario(listaUsuariosRede,ID, idade, sexo, nome);
            
        }else if(op == "imprimirUsuarios"){
            escreveLista(listaUsuariosRede);

        }else if(op == "addAmigo"){
            int ID1;
            int ID2;
            ler >> ID1;
            ler >> ID2;
            addAmigo(listaUsuariosRede, ID1, ID2);

        }else if(op == "imprimirAmigos"){
            int ID;
            ler>> ID;
            escreveAmigos(listaUsuariosRede, ID);

        }else if(op == "imprimirMediaIdadeAmigos"){
            int ID;
            ler>> ID;
            
            imprimirMediaIdadeAmigos(listaUsuariosRede, ID);
        }else if(op =="imprimirAmigosEmComum"){
            int ID1;
            int ID2;
            int sexo;
            ler >> ID1;
            ler >> ID2;
            ler >> sexo;

            imprimirAmigosEmComum(listaUsuariosRede ,ID1, ID2, sexo);
        }else if(op == "removerAmigo"){
            int ID1;
            int ID2;
            ler >> ID1;
            ler >> ID2;
            removerAmigo(listaUsuariosRede, ID1, ID2);

        }else if(op == "removerUsuario"){
            int ID1;
            ler >> ID1;
            removerUsuario(listaUsuariosRede, ID1);
        }
    }




    delete listaUsuariosRede;
    return EXIT_SUCCESS;
}



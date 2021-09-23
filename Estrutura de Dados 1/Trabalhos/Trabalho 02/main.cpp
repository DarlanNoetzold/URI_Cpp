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
            cout<<"\n"<<usuario1->dado->nome;
            escreve << "Os usuários " << usuario1->dado->nome << " (" << usuario1->dado->ID << ") e " << usuario2->dado->nome << " (" << usuario2->dado->ID << ") se tornaram amigos."<<endl;
        }
    }else{
        escreve<<"Erro ao criar amizade dos usuários com IDs "<< ID1 <<" e "<<ID2<<" !"<<endl;
    }        
}


void removerAmigo(Lista * listaUsuariosRede, int ID1, int ID2)
{
    //buscar usu�rio 1, passando por par�metro (listaUsuariosRede, ID1)

    //buscar usu�rio 2, passando por par�metro (listaUsuariosRede, ID2)


    //removeL(usuario1->amigos, usu�rio2); //remove o n�
    //removeL(usuario2->amigos, usu�rio1); //remove o n�
}

void removerUsuarioRede(Lista * listaUsuariosRede, int ID1)
{
    //buscar usu�rio 1, passando por par�metro (listaUsuariosRede, ID1)

    //Se Fernanda ser� removida, a amizada entre Fernanda e Pedro deve ser removida primeiro!
    //removerTotasAmizades(usuario1);


    //removeL(listaUsuariosRede, usu�rio1); //remove o n�
    //delete usu�rio1; //desaloca o usu�rio
}

void removerTodosUsariosRede(Lista * listaUsuariosRede)
{
    //chamar "removerUsuarioRede" para todos os usu�rios da rede...
}

int main(void){

    setlocale(LC_ALL, "Portuguese");

    Lista *listaUsuariosRede = new Lista();

    int aux=0;
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
            escreveAmigos(listaUsuariosRede, ID);
            
        }
    }




    delete listaUsuariosRede;
    return EXIT_SUCCESS;
}



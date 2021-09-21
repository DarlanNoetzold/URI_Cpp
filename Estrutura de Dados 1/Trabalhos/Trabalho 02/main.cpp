#include <iostream>
using namespace std;

#include <cstring>
#include <fstream>
#include "lista.hpp"

void addAmigo(Lista * listaUsuariosRede, int ID1, int ID2)
{
    //buscar usu�rio 1, passando por par�metro (listaUsuariosRede, ID1)

    //buscar usu�rio 2, passando por par�metro (listaUsuariosRede, ID2)


    //insereL(usuario1->amigos, usu�rio2);
    //insereL(usuario2->amigos, usu�rio1);
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
        cout<<op;
        if(op == "addUsuario"){
            int ID;
            int idade;
            int sexo;
            string nome;

            ler >> ID;            
            ler >> idade;
            ler >> sexo;
            ler >> nome;

            Usuario *novoUsr = new Usuario(ID, idade, sexo, nome);

            ofstream escreve("saida.txt",ios::app);
            if(!buscaL(listaUsuariosRede, novoUsr)){
                escreve<<"O usuário " <<nome<<" ("<<ID<<") foi adicionado na rede."<<endl;
                insereOrdenado(listaUsuariosRede, novoUsr);
            }else{
                escreve<<"Erro ao adicionar o usuário "<<nome<<" ("<<ID<<"). O ID "<<ID<<" já existe!"<<endl;
            }
            escreve.close();

            
        }else if(op == "imprimirUsuarios"){
            escreveLista(listaUsuariosRede);
        }
    }


    //aidiconando amigo
    addAmigo(listaUsuariosRede, 4, 10);

    //removendo amigo
    removerAmigo(listaUsuariosRede,  4, 10);


    //removendo usu�rio da rede
    removerUsuarioRede(listaUsuariosRede, 10);


    removerTodosUsariosRede(listaUsuariosRede);

    delete listaUsuariosRede;
    return EXIT_SUCCESS;
}



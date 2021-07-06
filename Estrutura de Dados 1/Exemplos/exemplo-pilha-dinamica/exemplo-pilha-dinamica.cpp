#include <iostream>
using namespace std;

#include "pilha-dinamica.hpp"


int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    Pilha p1;
    int dado;
    bool resultado;

    //Não precisamos definir o tamanho da pilha
    inicializa(&p1);


    cout << "\n\n###TESTE 1\n";
    //empilhando  100
    dado = 100;
    resultado = empilhar(&p1, dado);
    if(resultado)
        cout << "O valor " << dado << " foi empilhado com sucesso!\n";

    //empilhando 50
    dado = 50;
    if(empilhar(&p1, dado))
        cout << "O valor " << dado << " foi empilhado com sucesso!\n";

    //empilhando 30
    dado = 30;
    if(empilhar(&p1, dado))
        cout << "O valor " << dado << " foi empilhado com sucesso!\n";

    //mostra a pilha
    mostrar(&p1);



    system("pause");
    cout << "\n\n###TESTE 2\n";
    cout << "Empilhar os valors 300, 40 e 90\n";
    empilhar(&p1, 300);
    empilhar(&p1, 40);
    empilhar(&p1, 90);




    //mostra a pilha
    mostrar(&p1);

    //verificando se a pilha está vazia
    if(vazia(&p1))
        cout << "A pilha está vazia!\n";
    else
        cout << "A pilha NÃO está vazia!\n";


    system("pause");
    cout << "\n\n###TESTE 3\n";
    cout << "Informe uma informação para buscar na pilha:";
    cin >> dado;

    //desempilhar
    if(buscar(&p1, dado))
        cout << "O valor " << dado << " foi encontrado na pilha!\n";
    else
        cout << "O valor " << dado << " NÃO foi encontrado na pilha!\n";


    system("pause");
    cout << "\n\n###TESTE 4\n";
    //desempilhar
    if(desempilhar(&p1, &dado))
        cout << "O valor desempilhado é " << dado << endl;
    else
        cout << "Não foi possivel desempilhar, verifique se pilha está vazia!\n";

    if(desempilhar(&p1, &dado))
        cout << "O valor desempilhado é " << dado << endl;
    if(desempilhar(&p1, &dado))
        cout << "O valor desempilhado é " << dado << endl;
    if(desempilhar(&p1, &dado))
        cout << "O valor desempilhado é " << dado << endl;
    if(desempilhar(&p1, &dado))
        cout << "O valor desempilhado é " << dado << endl;
    if(desempilhar(&p1, &dado))
        cout << "O valor desempilhado é " << dado << endl;

    mostrar(&p1);


    //verificando se a pilha está vazia
    if(vazia(&p1))
        cout << "A pilha está vazia!\n";
    else
        cout << "A pilha NÃO está vazia!\n";

    //desalocar memória
    desalocar(&p1);


    return EXIT_SUCCESS;

}//final do main


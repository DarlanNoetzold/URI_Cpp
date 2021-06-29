#include <iostream>
using namespace std;

#include "pilha.hpp"

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    Pilha p1;
    int tamPilha, valor;
    bool resultado;


    cout << "Informe o tamanho da pilha: ";
    cin >> tamPilha;
    inicializa(&p1, tamPilha);


    cout << "\n\n###TESTE 1\n";
    //empilhando o valor 100
    valor = 100;
    resultado = empilhar(&p1, valor);
    if(resultado)
        cout << "O valor " << valor << " foi empilhado com sucesso!\n";

    //empilhando o valor 30
    valor = 30;
    if(empilhar(&p1, valor))
        cout << "O valor " << valor << " foi empilhado com sucesso!\n";

    //mostra a pilha
    mostrar(&p1);



    system("pause");
    cout << "\n\n###TESTE 2\n";
    cout << "Empilhar os valors 300, 40, 50 e 90\n";
    empilhar(&p1, 300);
    empilhar(&p1, 40);
    empilhar(&p1, 50);
    empilhar(&p1, 90);




    //mostra a pilha
    mostrar(&p1);

    //verificando se a pilha está cheia
    if(cheia(&p1))
        cout << "A pilha está cheia!\n";
    else
        cout << "A pilha NÃO está cheia!\n";


    //verificando se a pilha está vazia
    if(vazia(&p1))
        cout << "A pilha está vazia!\n";
    else
        cout << "A pilha NÃO está vazia!\n";


    system("pause");
    cout << "\n\n###TESTE 3\n";
    cout << "Informe um valor para buscar na pilha:";
    cin >> valor;

    //desempilhar
    if(buscar(&p1, valor))
        cout << "O valor " << valor << " foi encontrado na pilha!\n";
    else
        cout << "O valor " << valor << " NÃO foi encontrado na pilha!\n";


    system("pause");
    cout << "\n\n###TESTE 4\n";
    //desempilhar
    if(desempilhar(&p1, &valor))
        cout << "O valor desempilhado é " << valor << endl;
    else
        cout << "Não foi possivel desempilhar, verifique se pilha está vazia ou se foi inicializada!\n";

    mostrar(&p1);


    system("pause");
    cout << "\n\n###TESTE 5\n";
    if(desempilhar(&p1, &valor))
        cout << "O valor desempilhado é " << valor << endl;
    if(desempilhar(&p1, &valor))
        cout << "O valor desempilhado é " << valor << endl;
    if(desempilhar(&p1, &valor))
        cout << "O valor desempilhado é " << valor << endl;
    if(desempilhar(&p1, &valor))
        cout << "O valor desempilhado é " << valor << endl;

    mostrar(&p1);


    //verificando se a pilha está cheia
    if(cheia(&p1))
        cout << "A pilha está cheia!\n";
    else
        cout << "A pilha NÃO está cheia!\n";


    //verificando se a pilha está vazia
    if(vazia(&p1))
        cout << "A pilha está vazia!\n";
    else
        cout << "A pilha NÃO está vazia!\n";

    //desalocar memória
    desalocar(&p1);


    return EXIT_SUCCESS;

}//final do main


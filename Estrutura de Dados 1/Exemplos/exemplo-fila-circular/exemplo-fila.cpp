#include <iostream>
using namespace std;

#include "filacircular.hpp"


int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    Fila f1;
    int tamFila=6, valor;
    bool resultado;
    inicializaF(&f1, tamFila);

    cout << "\n\n###TESTE 1\n";

    mostraF(&f1);
    mostraVetorDadosF(&f1);

    valor = 5;
    resultado = enfileiraF(&f1, valor);
    if(resultado)
        cout << "\nO valor " << valor << " foi enfileirado com sucesso!\n";

    valor = 6;
    resultado = enfileiraF(&f1, valor);
    if(resultado)
        cout << "O valor " << valor << " foi enfileirado com sucesso!\n";

    valor = 7;
    resultado = enfileiraF(&f1, valor);
    if(resultado)
        cout << "O valor " << valor << " foi enfileirado com sucesso!\n";

    mostraF(&f1);
    mostraVetorDadosF(&f1);

    cout << "\n\n###TESTE 2\n";

    if(desenfileiraF(&f1, &valor))
        cout << "O valor " << valor << " foi desenfileirado com sucesso!\n";

    if(desenfileiraF(&f1, &valor))
        cout << "O valor " << valor << " foi desenfileirado com sucesso!\n";

    valor = 10;
    resultado = enfileiraF(&f1, valor);
    if(resultado)
        cout << "O valor " << valor << " foi enfileirado com sucesso!\n";

    mostraF(&f1);
    mostraVetorDadosF(&f1);


    cout << "\n\n###TESTE 3\n";

    valor = 13;
    resultado = enfileiraF(&f1, valor);
    if(resultado)
        cout << "O valor " << valor << " foi enfileirado com sucesso!\n";

    valor = 14;
    resultado = enfileiraF(&f1, valor);
    if(resultado)
        cout << "O valor " << valor << " foi enfileirado com sucesso!\n";


    mostraF(&f1);
    mostraVetorDadosF(&f1);


    cout << "\n\n###TESTE 4\n";

    valor = 16;
    resultado = enfileiraF(&f1, valor);
    if(resultado)
        cout << "\nO valor " << valor << " foi enfileirado com sucesso!\n";

    mostraF(&f1);
    mostraVetorDadosF(&f1);

    valor = 17;
    resultado = enfileiraF(&f1, valor);
    if(resultado)
        cout << "\nO valor " << valor << " foi enfileirado com sucesso!\n";


    mostraF(&f1);
    mostraVetorDadosF(&f1);


     cout << "\n\n###TESTE 5\n";

    valor = 20;
    resultado = enfileiraF(&f1, valor);
    if(resultado)
        cout << "\nO valor " << valor << " foi enfileirado com sucesso!\n";
    else
        cout << "\nO valor " << valor << " NÃO foi enfileirado! Fila cheia!!!\n";

    mostraF(&f1);
    mostraVetorDadosF(&f1);


    cout << "\n\n###TESTE 6\n";

    if(desenfileiraF(&f1, &valor))
        cout << "O valor " << valor << " foi desenfileirado com sucesso!\n";

    mostraF(&f1);
    mostraVetorDadosF(&f1);

    if(desenfileiraF(&f1, &valor))
        cout << "\nO valor " << valor << " foi desenfileirado com sucesso!\n";

    mostraF(&f1);
    mostraVetorDadosF(&f1);


    if(desenfileiraF(&f1, &valor))
        cout << "\nO valor " << valor << " foi desenfileirado com sucesso!\n";

    mostraF(&f1);
    mostraVetorDadosF(&f1);


    if(desenfileiraF(&f1, &valor))
        cout << "\nO valor " << valor << " foi desenfileirado com sucesso!\n";

    mostraF(&f1);
    mostraVetorDadosF(&f1);

    if(desenfileiraF(&f1, &valor))
        cout << "\nO valor " << valor << " foi desenfileirado com sucesso!\n";

    mostraF(&f1);
    mostraVetorDadosF(&f1);


    if(desenfileiraF(&f1, &valor))
        cout << "\nO valor " << valor << " foi desenfileirado com sucesso!\n";

    mostraF(&f1);
    mostraVetorDadosF(&f1);



    cout << "\n\n###TESTE 7\n";

    valor = 99;
    resultado = enfileiraF(&f1, valor);
    if(resultado)
        cout << "\nO valor " << valor << " foi enfileirado com sucesso!\n";
    else
        cout << "\nO valor " << valor << " NÃO foi enfileirado! Fila cheia!!!\n";

    mostraF(&f1);
    mostraVetorDadosF(&f1);


    destroiF(&f1);
    return EXIT_SUCCESS;

}//final do main


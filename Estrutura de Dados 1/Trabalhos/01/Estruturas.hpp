#include <bits/stdc++.h>
using namespace std;

#ifndef _HPP_ESTRUTURAS
#define _HPP_ESTRUTURAS

struct Pessoa{
    string nomeCompleto;
    string sexo;
    string CPF;
    int idade;
    bool defFisico;
    bool gestante;  
};

struct Objeto{
    string tipo;
    string descricao;
};

struct FichaDoacao{
    Pessoa pessoa;
    Objeto objeto;
};

struct Emprese{
    string nome;
    string CNPJ;
    string tipo;
};


#endif
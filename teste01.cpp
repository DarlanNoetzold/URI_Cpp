#include <iostream>
#include <cstring>
#include <locale>

using namespace std;

main()
{
    setlocale(LC_ALL, "Portuguese");
    unsigned int i, j, branco, numero, eusouespecial, aux;
    branco = 0;
    numero = 0;
    eusouespecial = 0;
    aux = 0;
    string string1, string2, string1aux, string2aux;
    cout<< "Escreva duas palavras com mesmo comprimento!" << endl;
    cout<< "Qual sua primeira palavra? "<< endl;
    getline(cin, string1);
    cout<< "Qual sua segunda palavra? " << endl;
    getline(cin, string2);
    //bota para maiusculo ambas as plavaras, caso as palavras forem diferentes renicia o programa
    if (string1.size()==string2.size())
    {
        string1[0] = toupper(string1[0]);
        string2[0] = toupper(string2[0]);
        for(i=0; i<=string1.size(); i++)
        {
            string1[i] = toupper(string1[i]);
            string2[i] = toupper(string2[i]);
        }
    }
    else
    {
        cout<< "Palavras informadas com comprimento diferente!" << endl;
        system("pause");
        return 0;
    }
    //verifica caracteres especiais
    for (i=0; i<=string1.size()-1; i++)
    {
        if(isspace(string1[i]))
        {
            branco++;
        }
        else if(isdigit(string1[i]))
        {
            numero++;
        }
        else if(isalpha(string1[i]))
        {
        }
        else
        {
            eusouespecial++;
        }

        if(isspace(string2[i]))
        {
            branco++;
        }
        else if(isdigit(string2[i]))
        {
            numero++;
        }
        else if(isalpha(string2[i]))
        {
        }
        else
        {
            eusouespecial++;
        }
    }
    if (eusouespecial > 0 || branco > 0 || numero > 0)
    {
        cout<< "Palavras informadas com caracteres especiais!" << endl;
        system("pause");
        return 0;
    }
    else
    {
        char letrasIguais[50];
        int aux=0;
        for(int i = 0; i < string1.size(); i++){
            for(int j = 0; j < string2.size(); j++){
                if(string1[i] == string2[j]){
                    for(int c = 0; c < strlen(letrasIguais); c++){
                        if(string1[i] == letrasIguais[c]){
                            aux++;
                        }
                    }
                    if(aux == 0){
                        letrasIguais[i] = string1[i];
                    }
                }
            }
        }


        cout<< "Palavra/String 1: " << string1 << endl;
        cout<< "Palavra/String 2: " << string2 << endl;
        cout<< "Caracteres nas duas palavras/strings: " << endl;
        for(int i = 0; i< 2; i++){
            cout<<letrasIguais[i]<<"\n";
        }
        cout<< "Caracteres somente na palavra/string 1: " << string1aux << endl;
        cout<< "Caracteres somente na palavra/string 2: " << string2aux << endl;
    }
}


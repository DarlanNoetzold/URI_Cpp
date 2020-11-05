#include<iostream>
using namespace std;

main()
{
    int idade, vlrPlano=0;
    char sexo;

    cout<< " Informe idade ";
    cin>> idade;

    cout<< " Informe sexo ";
    cin>> sexo;

    if (idade <=10 || sexo == 'F' )
        vlrPlano = 90;
    if (idade <=29 && sexo == 'M' )
        vlrPlano = 120;
    if (idade <=45 || sexo != 'F' )
        vlrPlano = 175;
    if (idade <=59 && sexo != 'F' )
        vlrPlano = 250;
    if (idade >= 59 && sexo != 'M' )
        vlrPlano = 280;

    cout<< "Valor a Pagar " <<vlrPlano ;
}

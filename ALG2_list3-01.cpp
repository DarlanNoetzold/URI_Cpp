#include <bits/stdc++.h>

using namespace std;

double leitura(char texto[100])
{
    double n;
    cout << texto;
    cin >> n;
    return n;
}

void mostra(double v1, double v2, double v3)
{
    cout<<"Base maior: " <<v1<<endl;
    cout<<"Base menor: " <<v2<<endl;
    cout<<"Altura: "<<v3<<endl;
}

double calcula(double baseMaior, double baseMenor, double altura)
{
    return ((baseMaior+baseMenor) * altura)/2;
}

main(){
    double baseMaior, baseMenor,altura;
    int op = -1, leu = 0;
    do{
        system("cls");
        cout << "-----------MENU-----------" << endl;
        cout << "- 0 - Sair               -" << endl;
        cout << "- 1 - Ler                -" << endl;
        cout << "- 2 - Mostrar            -" << endl;
        cout << "- 3 - Calcula Trapezio   -" << endl;
        cout << "--------------------------" << endl;
        cout << "Digite a opcao: ";
        cin >> op;
        fflush(stdin);
        switch(op)
        {
            case 0 :
                system("cls");
                cout << "Fim do Programa!";
                getchar();
                break;
            case 1 :
                system("cls");
                baseMaior = leitura("Digite a base maior: ");
                baseMenor = leitura("Digite a base menor: ");
                altura = leitura("Digite a altura: ");
                leu = 1;
                break;
            case 2 :
                system("cls");
                if(leu == 0)
                    cout << "E necessario ler valores primeiro";
                else
                    mostra(baseMaior, baseMenor, altura);
                getchar();
                break;
            case 3 :
                system("cls");
                if(leu == 0)
                    cout << "E necessario ler valores primeiro";
                else{
                    cout << "A area do trapezio e: " << calcula(baseMaior, baseMenor, altura) << endl;
                }
                getchar();
                break;
        };
    }while(op != 0);
}


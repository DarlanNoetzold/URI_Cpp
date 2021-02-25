#include <bits/stdc++.h>
#include <time.h>

#define NUM 10
int v[NUM];

using namespace std;

void criaVetor(){
    for(int i = 0; i < NUM; i++){
        v[i] = rand()%100;
    }
    for(int i = 0; i<NUM; i++){
        cout<<v[i]<<" |";
    }
}

double calculaMedia(){
    double soma=0;
    for(int i = 0; i < NUM; i++){
        soma += v[i];
    }
    return soma/10;
}

void mostraMaiorMenor(){
    int maior=0, menor=0;
    for(int i = 0; i < NUM; i++){
        if(i == 0 || v[i] > maior){
            maior = v[i];
        }
        if(i == 0 || v[i] < menor){
            menor = v[i];
        }
    }
    cout<<"\nO maior numero eh: "<<maior<<" e o menor numero eh: "<<menor<<endl;
}

void ordenaInverso(){
    reverse(v, v+NUM);

    for(int i = 0; i<NUM; i++){
        cout<<v[i]<<" |";
    }
}

void mostrar(){
    for(int i = 0; i<NUM; i++){
        cout<<v[i]<<" |";
    }
}

void ordenaCrescente(){
    sort(v,v+NUM);
    for(int i = 0; i<NUM; i++){
        cout<<v[i]<<" |";
    }
}

main(){
    srand(time(NULL));
    int op, leu = 0;
    do{
        system("cls");
        cout << "-----------MENU-----------" << endl;
        cout << "- 0 - Sair               -" << endl;
        cout << "- 1 - Criar Vetor        -" << endl;
        cout << "- 2 - Calcula a Media    -" << endl;
        cout << "- 3 - Inverte ordem      -" << endl;
        cout << "- 4 - Ordena Crescente   -" << endl;
        cout << "- 5 - Mostrar            -" << endl;
        cout << "- 6 - Maior e Menor      -" << endl;
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
                criaVetor();
                cout<<"\nVetor Criado!"<<endl;
                leu = 1;

                getchar();
                break;
            case 2:
                system("cls");
                if(leu == 0)
                    cout<<"\nE necessario criar o vetor primeiro! "<<endl;
                else
                    cout<<"\nA media eh igual a: "<<calculaMedia()<<endl;
                
                getchar();
                break;
            case 3 :
                system("cls");
                if(leu == 0)
                    cout<<"\nE necessario criar o vetor primeiro! "<<endl;
                else
                    ordenaInverso();
                
                getchar();
                break;
            case 5 :
                system("cls");
                if(leu == 0)
                    cout<<"\nE necessario criar o vetor primeiro! "<<endl;
                else
                    mostrar();

                getchar();
                break;
            case 4 :
                system("cls");
                if(leu == 0)
                    cout<<"\nE necessario criar o vetor primeiro! "<<endl;
                else
                    ordenaCrescente();
        
                getchar();
                break;
            case 6 :
                system("cls");
                if(leu == 0)
                    cout<<"\nE necessario criar o vetor primeiro! "<<endl;
                else
                    mostraMaiorMenor();
                getchar();
                break;
            default:
                system("cls");
                cout<<"Opcao invalida!";
                getchar();
                break;
        };
    }while(op != 0);
}
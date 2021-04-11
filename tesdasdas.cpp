#include <bits/stdc++.h>
using namespace std;

void leitura(float (*notas)[3], int tam){
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < 3; j++){
            cout<<"Digite a nota do aluno "<<i<<": ";
            cin>>notas[i][j];
        }
    }
}

void mostrar(float (*notas)[3], int tam){
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < 3; j++){
            cout << notas[i][j] << "\t";
        }
        cout << "\nAluno "<<i<<": ";
    }
}

void mostrarMarMenor(float (*notas)[3], int tam){
    float maior=0, menor=0;
    for(int i = 0; i < tam; i++){
        float mediaAluno=0;
        for(int j = 0; j < 3; j++){
            mediaAluno += notas[i][j];
        }
        if(i==0 || mediaAluno > maior){
            maior = mediaAluno;
        }
        if(i==0 || mediaAluno < maior){
            menor = mediaAluno;
        }
    }

    cout<<"A maior media foi: "<<maior/3;
    cout<<"A menor media foi: "<<menor/3;
}

void mostrarDiv(float (*notas)[3], int tam){
    int maior=0, menor=0;
    for(int i = 0; i < tam; i++){
        float mediaAluno=0;
        for(int j = 0; j < 3; j++){
            mediaAluno += notas[i][j];
        }
        mediaAluno = mediaAluno/3;
        if(mediaAluno >= 6){
            maior++;
        }else{
            menor++;
        }
    }
    cout<<"Existem "<<maior<<" alunos com media maior ou igual a 6 e "<<menor<<" alunos com media menor que 6.";
}


main(){
    srand(time(NULL));
    int tam;
    float (*notas)[3];
    
    int menu = -1, indice = 0;

    do{
        system("cls");
        cout << "###############MENU###############" << endl;
        cout << "# 0 - Sair                       #" << endl;
        cout << "# 1 - Leitura                    #" << endl;
        cout << "# 2 - Mostrar Matriz             #" << endl;
        cout << "# 3 - Maior e menor media        #" << endl;
        cout << "# 4 - Superior/inferior 6        #" << endl;
        cout << "##################################" << endl;
        cout << "Sua escolha: ";
        cin >> menu;
        fflush(stdin);//limpa o buffer do teclado

        switch(menu)
        {
            case 0 :
                system("cls");
                cout << "PROGRAMA FINALIZADO";
                getchar();
                break;
            case 1 :
                system("cls");
                indice++;
                cout<<"Digite quantos alunos voc? quer registrar: ";
                cin>>tam;
                notas = new float[tam][3];
                leitura(&notas[3], tam);
                getchar();
                break;
            case 2 :
                system("cls");
                if(indice < 0)
                    cout << "E necessario ler valores de v3";
                else{
                    mostrar((&notas)[3], tam);
                }
                getchar();
                break;
            case 3 :
                system("cls");
                if(indice < 0)
                    cout << "E necessario ler valores de v3";
                else
                    mostrarMarMenor((&notas)[3], tam);
                getchar();
                break;

            case 4 :
                system("cls");
                if(indice < 0)
                    cout << "E necessario ler valores primeiro";
                else
                    mostrarDiv(&((notas)[3]), tam);
                getchar();
                break;
        };
    }while(menu != 0);
}

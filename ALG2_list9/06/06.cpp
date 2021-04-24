#include <bits/stdc++.h>
using namespace std;

void gerarValores(float (*matriz)[8]){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            matriz[i][j] = rand()%100;
        }
    }
}

void gravarValores(float (*matriz)[8]){
    ofstream escreve("teste.txt",ios::out);
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            escreve << matriz[i][j] << ",";
        }
    }
}

void lerValores(){
    ifstream ler("teste.txt", ios::in);
    char numChar[4];
    int aux=0;
    while(!ler.fail()){
        ler.getline(numChar,4, ',');
        cout<<numChar<<"\t";
        if((aux%7)==0){
            cout<<"\n";
        }
        aux++;
    }

}


main(){
    srand(time(NULL));
    int menu = -1;
    int tam=8;
    float (*matriz)[8];
    matriz = new float[tam][8];
    do{
        system("cls");
        cout << "####################MENU####################" << endl;
        cout << "# 0 - Sair                                 #" << endl;
        cout << "# 1 - Gerar Valores                        #" << endl;
        cout << "# 2 - Gravar Valores                       #" << endl;
        cout << "# 3 - Ler Valores                          #" << endl;
        cout << "############################################" << endl;
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
                gerarValores(matriz);
                break;
            case 2 :
                system("cls");
                gravarValores(matriz);
                break;
            case 3 :
                system("cls");
                lerValores();
                getchar();
                break;
        };
    }while(menu != 0);
    
}
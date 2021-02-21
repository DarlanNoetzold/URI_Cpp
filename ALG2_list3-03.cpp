#include <bits/stdc++.h>

using namespace std;

int leitura(string texto){
    int n;
    cout << texto;
    cin >> n;
    return n;
}

void verificaPrimo(int val){
    int cont=0;
    for(int i = 1; i < val; i++){
        if(val % i == 0){
            cont++;
        }
    }
    if(cont > 1)
        cout<<"\nNao eh primo!"<<endl;
    else
        cout<<"\nEh primo!"<<endl;
}

int calcula(int val){
    int soma=0;
    string str = to_string(val);
    for(int i = 0; i < str.size(); i++){
        char alg[1] = {str[i]};
        soma += atoi(alg);
    }
    return soma;
}

main(){
    int val;
    int op = -1, leu = 0;
    do{
        system("cls");
        cout << "-----------MENU-----------" << endl;
        cout << "- 0 - Sair               -" << endl;
        cout << "- 1 - Ler                -" << endl;
        cout << "- 2 - Verifica Primo     -" << endl;
        cout << "- 3 - Soma Algarismos    -" << endl;
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
                val = leitura("Digite um numero: ");
                leu = 1;
                break;
            case 2:
                system("cls");
                if(leu == 0)
                    cout<<"E necessario ler o valor primeiro! ";
                else{
                    verificaPrimo(val);
                }
                getchar();
                break;
            case 3 :
                system("cls");
                if(leu == 0)
                    cout << "E necessario ler o valor primeiro! ";
                else{
                    cout << "A soma dos algarismos e: " << calcula(val) << endl;
                }
                getchar();
                break;
        };
    }while(op != 0);
}


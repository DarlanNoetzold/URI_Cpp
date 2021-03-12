#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

struct livro{
    char nome[50];
    char editora[100];
    char isbn[17];
    int ano;
    char paginas[7];
    float preco;
};

int leitura(livro x[], int i);
void visualizar(livro x[], int i);
void menosCaro(livro x[], int i);
void maisCaro(livro x[], int i);
void buscaAno(livro x[], int i, int ano);

main(){
    livro x[20];
    int menu = -1, indice = -1, num=0,ano;
    float val;

    do{
        system("cls");
        cout << "####################MENU####################" << endl;
        cout << "# 0 - Sair                                 #" << endl;
        cout << "# 1 - Incluir Livro                        #" << endl;
        cout << "# 2 - Mostrar Livros Cadastrados           #" << endl;
        cout << "# 3 - Livro mais caro                      #" << endl;
        cout << "# 4 - Livro mais barato                    #" << endl;
        cout << "# 5 - Mostrar livros em determinado ano    #" << endl;
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
                indice++;
                if(indice == 20)
                    cout << "Limite maximo de livros ja cadastrados";
                else
                    leitura(x, indice);
                break;
            case 2 :
                system("cls");
                if(indice < 0)
                    cout << "E necessario ler livros primeiro";
                else
                    visualizar(x, indice);
                getchar();
                break;
            case 3 :
                system("cls");
                if(indice < 0)
                    cout << "E necessario ler livros primeiro";
                else
                    maisCaro(x, indice);
                getchar();
                break;
            case 4 :
                system("cls");
                if(indice < 0)
                    cout << "E necessario ler livros primeiro";
                else
                    menosCaro(x, indice);
                getchar();
                break;
            case 5 :
                system("cls");
                if(indice < 0)
                    cout << "E necessario ler livros primeiro";
                else
                    cout<<"Digite o ano de busca: ";
                    cin>>ano;
                    buscaAno(x, indice,ano);
                getchar();
                break;

        };
    }while(menu != 0);

}

int leitura(livro x[], int i){
        cout << "Informe o nome: ";
        gets(x[i].nome);
        fflush(stdin);

        cout << "Informe o editora: ";
        gets(x[i].editora);
        fflush(stdin);

        cout << "Informe o isbn: ";
        gets(x[i].isbn);
        fflush(stdin);

        cout << "Informe o ano de edicao: ";
        cin >> x[i].ano;
        fflush(stdin);

        cout << "Informe o numero de paginas: ";
        gets(x[i].paginas);
        fflush(stdin);

        cout << "Informe o preco: ";
        cin >> x[i].preco;
        fflush(stdin);
        return 0;
}

void visualizar(livro x[], int i){
    int aux = 0;
    for(int j = 0; j <= i; j++){
        cout<< "--------LIVRO "<< j+1<<"--------"<< endl;
        cout<< "Nome: " << x[j].nome << endl;
        cout<< "Editora: " << x[j].editora << endl;
        cout<< "Isbn: " << x[j].isbn << endl;
        cout<< "Ano de edicao: " << x[j].ano << endl;
        cout<< "Numero de paginas: " << x[j].paginas << endl;
        cout<< "Preco: " << x[j].preco << endl;
        cout<< "--------------------------"<< endl;
        cout<< "\n\n";
        aux++;
    }
}

void maisCaro(livro x[], int i){
    int maior;
    for(int j = 0; j < i;j++){
        if(j == 0 || x[j].preco > x[maior].preco){
            maior = j;
        }
    }

    cout<< "--------LIVRO "<< maior+1<<"--------"<< endl;
    cout<< "Nome: " << x[maior].nome << endl;
    cout<< "Editora: " << x[maior].editora << endl;
    cout<< "Isbn: " << x[maior].isbn << endl;
    cout<< "Ano de edicao: " << x[maior].ano << endl;
    cout<< "Numero de paginas: " << x[maior].paginas << endl;
    cout<< "Preco: " << x[maior].preco << endl;
    cout<< "--------------------------"<< endl;
    cout<< "\n\n";
}

void menosCaro(livro x[], int i){
    int menor;
    for(int j = 0; j <= i;j++){
        if(j == 0 || x[j].preco < x[menor].preco){
            menor = j;
        }
    }

    cout<< "--------LIVRO "<< menor+1<<"--------"<< endl;
    cout<< "Nome: " << x[menor].nome << endl;
    cout<< "Editora: " << x[menor].editora << endl;
    cout<< "Isbn: " << x[menor].isbn << endl;
    cout<< "Ano de edicao: " << x[menor].ano << endl;
    cout<< "Numero de paginas: " << x[menor].paginas << endl;
    cout<< "Preco: " << x[menor].preco << endl;
    cout<< "--------------------------"<< endl;
    cout<< "\n\n";
}

void buscaAno(livro x[], int i, int ano){
    int aux=0;
    for(int j = 0; j <= i;j++){
        if(x[j].ano == ano){
            cout<< "--------LIVRO "<< j+1<<"--------"<< endl;
            cout<< "Nome: " << x[j].nome << endl;
            cout<< "Editora: " << x[j].editora << endl;
            cout<< "Isbn: " << x[j].isbn << endl;
            cout<< "Ano de edicao: " << x[j].ano << endl;
            cout<< "Numero de paginas: " << x[j].paginas << endl;
            cout<< "Preco: " << x[j].preco << endl;
            cout<< "--------------------------"<< endl;
            cout<< "\n\n";
            aux++;
            getchar();
        }
    }
    if(aux==0){
        cout<<"Este ano nao tem nenhum livro cadastrado!"<<endl;
        getchar();
    }
}
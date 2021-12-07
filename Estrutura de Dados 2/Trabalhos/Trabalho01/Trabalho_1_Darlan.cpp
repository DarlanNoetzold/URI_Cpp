#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;

typedef struct arv
{
  int info;
  arv *sad;
  arv *sae;
} arvore;

arvore *cria_arvore()
{

  return NULL;
}

int testa_vazia(arvore *t)
{
  if (t == NULL)
    return 1;
  if (t->info == NULL)
    return 1;
  return 0;
}

void mostra(arvore *t)
{
  cout << "<";         
  if (!testa_vazia(t)) 
  {
    
    cout << t->info; 
    mostra(t->sae);  
    mostra(t->sad);  
  }
  cout << ">"; 
}


void mostra_2(arvore *t)
{
  cout << "<";        
  if (!testa_vazia(t))
  {
    mostra_2(t->sae); 
    cout << t->info;  
    mostra_2(t->sad); 
  }
  cout << ">"; 
}
void mostra_3(arvore *t)
{
  cout << "<";
  if (!testa_vazia(t))
  {
    mostra_3(t->sae);
    mostra_3(t->sad);
    cout << t->info;
  }
  cout << ">";
}

void inserir(arvore **t, int v)
{
  if (*t == NULL)
  {
    *t = new arvore;  
    (*t)->sae = NULL; 
    (*t)->sad = NULL; 
    (*t)->info = v;   
  }
  else
  {
    if (v < (*t)->info) 
    {
      inserir(&(*t)->sae, v);
    }
    if (v >= (*t)->info) 
    {
      inserir(&(*t)->sad, v);
    }
  }
}

arvore *remover(arvore **t, int v)
{
  if (v < (*t)->info)
    remover(&(*t)->sae, v);
  else if (v > (*t)->info)
    remover(&(*t)->sad, v);
  else
  {
    arvore *aux = *t;
    if (((*t)->sae == NULL) && ((*t)->sad == NULL))
    {
      delete (aux);
      (*t) = NULL;
    }
    else if ((*t)->sae == NULL)
    {
      (*t) = (*t)->sad;
      aux->sad = NULL;
      delete (aux);
      aux = NULL;
    }
    else if ((*t)->sad == NULL)
    {
      (*t) = (*t)->sae;
      aux->sae = NULL;
      delete (aux);
      aux = NULL;
    }
    else
    {
      aux = (*t)->sae;
      while (aux->sad != NULL)
      {
        aux = aux->sad;
      }
      (*t)->info = aux->info;
      aux->info = v;
      (*t)->sae = remover(&(*t)->sae, v);
    }
  }
  return *t;
}

int conta_altura(arvore *t){
  if (t == NULL) 
      return -1;
   else {
      int altura_e = conta_altura (t->sae);
      int altura_d = conta_altura (t->sad);
      if (altura_e < altura_d) 
        return altura_d + 1;
      else 
        return altura_e + 1;
   }
}

void nivel_valor(arvore *t, int v, int cont){
  cont++;
  if(t == NULL){
    cout<<"Esse valor nao existe!"<<endl;
    getchar();
    return;
  }

  if (v < t->info){
    nivel_valor(t->sae, v, cont);
  }else if (v > t->info){
    nivel_valor(t->sad, v, cont);
  }else if(v == t->info){
    cout<<"O nivel desse valor eh: "<<cont-1<<endl;
    getchar();
  }
}

bool valores_no_nivel(arvore *t, int niv, int cont, bool testa){
    if(t == NULL) return testa;

    if(niv == cont){
        cout<<t->info<<", ";
        testa = true;
    }

    cont++;
    testa = valores_no_nivel(t->sae, niv, cont, testa);
    testa = valores_no_nivel(t->sad, niv, cont, testa);

    return testa;
}




int main(){
    arvore *t = cria_arvore(); 
    arvore *no_pai;
    int menu = -1, num, valor;
    bool testa = false;


  do
  {
    system("cls");
    cout << "*-----------------------*" << endl;
    cout << "|    MENU DE OPCOES!!   |" << endl;
    cout << "*-----------------------*" << endl;
    cout << "| 0 - Sair              |" << endl;
    cout << "| 1 - Incluir           |" << endl;
    cout << "| 2 - Mostrar           |" << endl;
    cout << "| 3 - Remover           |" << endl;
    cout << "| 4 - Altura Sub-Arvore |" << endl;
    cout << "| 5 - Altura            |" << endl;
    cout << "| 6 - Limpar Arvore     |" << endl;
    cout << "| 7 - Nivel do valor    |" << endl;
    cout << "| 8 - Valores no nivel  |" << endl;
    cout << "*-----------------------*" << endl;
    cout << "Sua escolha: ";
    cin >> menu;
    fflush(stdin);
    switch (menu)
    {
    case 0:
      system("cls");
      delete (t);
      cout << "PROGRAMA FINALIZADO!";
      getchar();
      break;
    case 1:
      system("cls");
      cout << "Informe o valor a ser incluido: ";
      cin >> num;
      fflush(stdin);
      inserir(&t, num);
      cout << "VALOR INCLUIDO COM SUCESSO!";
      getchar();
      break;
    case 2:
      system("cls");
      if (testa_vazia(t)) 
        cout << "\n\nArvore vazia!!\n";
      else
      {
        cout << "ELEMENTOS NA ARVORE EM PRE-ORDEM: " << endl;
        mostra(t);
        cout << "\nELEMENTOS NA ARVORE EM ORDEM: " << endl;
        mostra_2(t);
        cout << "\nELEMENTOS NA ARVORE EM POS-ORDEM: " << endl;
        mostra_3(t);
      }
      getchar();
      break;
    case 3:
      system("cls");
      if (testa_vazia(t)) 
        cout << "\n\nArvore vazia!!\n";
      else
      {
        cout << "Informe o valor a ser removido: ";
        cin >> num;
        fflush(stdin);
        if (t->sae == NULL && t->sad == NULL)
        {
          delete (t);
          t = NULL;
        }
        else
        {

          remover(&t, num);
          cout << "VALOR REMOVIDO COM SUCESSO.";
        }
      }
      getchar();
      break;
    case 4:
        system("cls");
        cout<<"Sub-arvore Esquerda: " << conta_altura(t->sae)+1<<endl;
        cout<<"Sub-arvore Direita: " << conta_altura(t->sad)+1<<endl;
        getchar();
        break;
    case 5:
        system("cls");
        cout<<"Altura: " << conta_altura(t)+1<<endl;
        getchar();
        break;
    case 6:
        system("cls");
        while(!testa_vazia(t)){
          remover(&t, t->info);
        }
        cout<<"Arvore limpa!"<<endl;
        getchar();
        break;
    case 7:
        system("cls");
        cout<<"Digite o valor: "<<endl;
        cin>>valor;

        nivel_valor(t, valor, 0);
        getchar();
        break;
    case 8:
        system("cls");
        cout<<"Digite o nivel: "<<endl;
        cin>>valor;
        cout<<"Valores no nivel "<<valor<<": ";
        testa = false;
        testa = valores_no_nivel(t, valor, 0, testa);

        if(!testa){
            cout<<"Nivel nao existente na arvore"<<endl;
        }
        getchar();
        getchar();
        break;
    };
  } while (menu != 0);
}

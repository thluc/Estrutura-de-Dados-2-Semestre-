#include "iostream"

#define max 3
using namespace std;

typedef struct lifo info;

struct dados{
int topo;
int idade;
string nome;
float salario;
};

string ler_nome() {
  string nome;
  cout << "Digite o seu nome: ";
  cin >> nome;
  return nome;
};

int ler_idade() {
  int idade;
  cout << "Digite a sua idade: ";
  cin >> idade;
  return idade;
}

float ler_salario() {
  double salario;
  cout << "Digite o seu salário: ";
  cin >> salario;
  return salario;
}

bool infoCheia(info)
{ if (infodados == max - 1)
  return true;  return false; }

bool infoVazia();

{ if (topo == -1)
  return true;     return false; 
  }

info push (int info)
{if (infoCheia()  == true)
{     cout << "\nPilha Cheia\n";
  system("pause");
  return p;
  } 
  p.topo ++; p.dado[p.topo] = valor;
  cout << "\nO valor empilhado foi" << valor << endl; system("pause");
  return p;
  }
pilha pop (pilha p) 
{if (pilhaVazia(p) == true)
{ cout << "\nA pilha já está vazia!"; 
  system("pause");
  return p;
  }
  cout << "\nO valor desempilhado será:" << p.dado[p.topo] << endl;
  system("pause");
  p.dado[p.topo] = '\0';
  p.topo --;
  return p;
  }

int main() {
  std::cout << "Hello World!\n";
}
#include "cstdlib"
#include "iostream"
#define max 3
using namespace std;
typedef struct lifo pilha;
struct lifo {
 int topo;
 int dado[max];
 string nome[max];
 int idade[max];
 double salario[max];
};
string lerNome() {
 string nome;
 cout << "\nDigite seu nome: ";
 cin >> nome;
 return nome;
}
int lerIdade() {
 int idade;
 cout << "Digite sua idade: ";
 cin >> idade;
 return idade;
}
double lerSalario() {
 double salario;
 cout << "Digite seu salário: R$";
 cin >> salario;
 return salario;
}
bool pilhaCheia(pilha *p) {
 if (p->topo == max - 1)
 return true;
 return false;
}
bool pilhaVazia(pilha *p) {
 if (p->topo == -1)
 return true;
 return false;
}
void push(string nome, int idade, double salario, pilha *p) {
 if (pilhaCheia(p) == true) {
 cout << "\nRegistros Cheios\n";
 system("clear");
 return;
 }
 p->topo++;
 p->nome[p->topo] = nome;
 p->idade[p->topo] = idade;
 p->salario[p->topo] = salario;
 cout << "\n==== O valor registrado foi ====" << endl;
 cout << "\nNome: " << nome << endl;
 cout << "Idade: " << idade << endl;
 cout << "Salario: " << salario << endl;
 return;
}
void pop(pilha *p) {
 if (pilhaVazia(p) == true) {
 cout << "\nOs registros estão vazios!";
 system("pause");
 return;
 }
 cout << "\nO registro excluído será: " << p->dado[p->topo] << endl;
 system("pause");
 p->dado[p->topo] = '\0';
 p->topo--;
 return;
}
void mostrarPilha(pilha *p) {
 if (pilhaVazia(p) == true) {
 cout << "\nOs registros estão vazios!";
 return;
 }
 for (int i = p->topo; i >= 0; i--)
 cout << "\nNome: " << p->nome[i] << endl;
 for (int i = p->topo; i >= 0; i--)
 cout << "\nIdade: " << p->idade[i] << endl;
 for (int i = p->topo; i >= 0; i--)
 cout << "\nSalario: " << p->salario[i] << endl;
 system("pause");
}
int tela() {
 int tecla;
 system("break");
 cout << "\n==== Insira seus Dados ====\n";
 cout << "\nPush:1 \nPop:2 \nMostrar Registros:3 \nSair:4 \nEscolha um "
 "número: ";
 cin >> tecla;
 return tecla;
}
void controlarPilha() {
 int tecla, idade;
 double salario;
 string nome;
 pilha p1;
 pilha *ptpilha;
 ptpilha = &p1;
 ptpilha->topo = -1;
 do {
 tecla = tela();
 switch (tecla) {
 case 1:
 nome = lerNome();
 idade = lerIdade();
 salario = lerSalario();
 push(nome, idade, salario, &p1);
 break;
 case 2:
 pop(&p1);
 break;
 case 3:
 mostrarPilha(&p1);
 }
 } while (tecla != 4);
 cout << "\nPrograma Finalizado...!\n";
}
int main() {
 controlarPilha();
 return 0;
}

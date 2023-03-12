#include "iostream"
#include "cstdlib"
#include "stdlib.h"

#define max 8
using namespace std;

typedef struct nopilha pilha;
struct nopilha
{
int valor;
pilha *ant;
};
int cont; 
pilha * topo;
void construtor() {
topo = NULL; cont = 0; }
bool push(int valor)
{
pilha *newpilha = (pilha*) malloc(sizeof(pilha));
if (newpilha == NULL) return false;
newpilha->valor = valor;
newpilha->ant = topo;
topo = newpilha;
cont ++; 
return true;
}
void mostrarpilha()
{
pilha *temp;
temp= topo;
system("clear");
while ( temp != NULL)
{
cout << "\nValores digitados:\n" << temp->valor << endl;
temp = temp->ant;
}
system("sleep 3");
}
int lerValor()
{
int valor;
cout << "\nDigite um valor:\n";
cin >> valor; return valor;
}
bool pop()
{
int valor; pilha *temp;
temp = topo;
valor = topo->valor;
topo = topo->ant;
free(temp);
cout << "\nValor a ser removido:" << valor << endl;
system("sleep 3");
return true;
}
void destrutor() {
pilha *temp;
while (topo != NULL)
{ temp = topo;
topo = topo->ant;
free (temp); }
free (topo);
cout << "Valor destruido.\n";
system("sleep 3"); }

int tela()
{
int tecla;
system("clear");
cout << "LIFO\n 1)Inserir um dado\n 2)Deletar um dado \n 3)Exibir um dado\n 4)Destruir um dado \n 5)Sair \n Item escolhido:";
cin >> tecla;
return tecla;
}
void menu(){
int tecla;
int valor;
string nome;
do {
tecla = tela();
switch (tecla)
{
case 1:
valor = lerValor();
push(valor);
break;
case 2: pop();
break;
case 3: mostrarpilha();
break;
case 4: destrutor();
}
} while (tecla != 5);
cout << "\nPrograma Finalizado...!\n";
}
int main () {
menu();
}
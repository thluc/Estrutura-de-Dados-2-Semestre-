#include "iostream"
#include "stdlib.h"
#include "string.h"

using namespace std;

 struct P{

string nome[2];
int idade[2];
string sexo[2];  
float salario[2];
float nsalario[2];

} pessoa;

struct P *ptrpessoa = &pessoa;

int ler_idade() {
  int idade;
  cout << "Digite a sua idade: ";
  cin >> idade;
  return idade;
}

string ler_sexo() {
  string sexo;
  cout << "Digite o seu sexo: ";
  cin >> sexo;
  return sexo;
}

string ler_nome() {
  string nome;
  cout << "Digite o seu nome: ";
  cin >> nome;
  return nome;
}

float ler_salario() {
  float salario;
  cout << "Digite o seu salário: ";
  cin >> salario;
  return salario;
}

float getAumento(float *salario) {
  return (*salario)*1.10;
}

void novaLinhaStruct() {
 for (int i = 0; i < 2; i++) {

 ptrpessoa->nome[i] = ler_nome();
 ptrpessoa->idade[i] = ler_idade();
 ptrpessoa->sexo[i] = ler_sexo();
 ptrpessoa->salario[i] = ler_salario();
 ptrpessoa->nsalario[i] = getAumento(&ptrpessoa->salario[i]);
 }
}

void listarLinhasStruct() {
 for (int i = 0; i < 2; i++) {
 cout << "Pessoa -----------------" << endl;
 cout << "Nome: " << ptrpessoa->nome[i] << endl;
 cout << "Idade: " << ptrpessoa->idade[i] << endl;
 cout << "Sexo: " << ptrpessoa->sexo[i] << endl;
 cout << "Salário: " << ptrpessoa->salario[i] << endl;
 cout << "Novo Salário: " << ptrpessoa->nsalario[i] << endl;
}
}

   
int main() {

int opcao;


MENU:
 cout << " " << endl;
 cout << " Selecione umas das opções:" << endl;
 cout << "  1 - Ler Linha  " << endl;
 cout << "  2 - Mostrar  " << endl;
 cout << "  3 - Sair  " << endl;
 cin >> opcao;
 cout << " " << endl;

 switch (opcao) {
 case 1:
 novaLinhaStruct();
 break;
 case 2:

 listarLinhasStruct();
 break;
 case 3:
 
 cout << "Cálculo do salário" << endl;
cout << " - FIM - " << endl;
 cout << " -------- ****************** --------- " << endl;
 cout << "" << endl;
 exit(0);
 break;
 }
 goto MENU;
 return 0;
}

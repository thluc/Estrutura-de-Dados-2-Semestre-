#include "iostream"
#include "cstdlib"
#include "stdio.h"
#include "iomanip"

using namespace std;

int main () {

  int const n = 5;
int idade[] = {19, 35, 40, 23, 26}; 
string nome[n];

for (int i = 0; i < n; i++) {
  cout << "Digite um nome: ";
  cin >> nome[i];
}

  {  int maior, menor;
    int tot = sizeof(idade)/sizeof(int);
    for (int i = 0; i< tot; i++)
      {
        if ( idade[i] > maior || i == 0 ) maior = idade[i];
        if ( idade[i] < menor || i == 0 ) menor = idade[i]; 
        }
    cout << "Pessoa com maior idade: " << nome[3] << "\nMaior:" << maior << endl;
    cout << "Pessoa com menor idade: " << nome[1] << "\nMenor: " << menor << endl;
    cout << "Média das idades: " << tot << endl;

    }
  }
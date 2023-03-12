#include "iostream"
#include "cstdlib"
#include "string.h"

using namespace std;

double CalculaReajuste(double SM, double PR, double NS, double NS1) {
	NS = (SM*PR)/100;
  NS1 = SM+NS;
	return NS1;
}

struct valores; 

double SM;
double PR;
double NS;
double NS1;

double lereajuste() { system("clear");
  cout<<"\nDigite o seu salário mensal: ";
  cin >> SM;
  cout << "\nDigite o percentual de reajuste: ";
  cin >> PR;

  NS1 = CalculaReajuste(SM, PR, NS, NS1);
  
  cout <<"\nO seu novo salário é: " << NS1 << endl;
  
  return NS; 
  }

  int main()
{
  int tecla=0;
  while (tecla != 2)
  { 
    cout << "\n1 Calcular o reajuste de salário\n2 Sair\nitem:"; 
    cin >> tecla;
    switch(tecla) 
      {case 1: lereajuste(); 
        break;
        case 2:
        exit(0);
        break; 
        }
    }
  return 0;}
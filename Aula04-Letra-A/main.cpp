#include "iostream"
#include "cstdlib"
#include "string.h"

using namespace std;

int CalculaProduto(int A, int C, int P) {
	P = A*C;
	return P;
}

int CalculaSoma(int B, int D, int S) {
	S = B+D;
	return S;
}

struct valores; 

int A;
int C;
int B;
int D;
double P;
double S;

int ler_calc() {
  cout<<"\nDigite o primeiro valor: ";
  cin>>A;
  cout<<"\nDigite o segundo valor: ";
  cin>>B;
  cout<<"\nDigite o terceiro valor: ";
  cin>>C;
  cout<<"\nDigite o quarto valor: ";
  cin>>D;

  P = CalculaProduto(A, C, P);
  S = CalculaSoma(B, D, S);
  
   cout<<"\nO produto é: " << P << endl;
  cout<<"\nA soma é: " << S << endl;
  
  return P; 
  return S; 
  }

  int main()
{
  int tecla=0;
  while (tecla != 3)
  {    
    cout << "\n1 Calcular o produto e soma\n2 Sair\nitem:"; 
    cin >> tecla;
    switch(tecla) 
      {case 1: ler_calc(); 
        break;
        case 2:
        exit(0);
        break; 
        }
    }
  return 0;}
#include"iostream"
using namespace std;
int const n=5;
string nm[n];
string cpf[n];
string ende[n];
string em[n];
string tel[n];

int main () 
{ setlocale
  (LC_ALL, "Portuguese-brasilian"); 
  for (int i = 0; i < n ; i ++) 
  {     cout << "\nDigite seu nome, CPF, endereço, email e telefone: ";
    cin >> nm[i];  
    cin >> cpf[i]; 
    cin >> ende[i];
    cin >> em[i];
    cin >> tel[i];
    }
  return 0; }
#include "iostream"
#include "math.h"
#include "stdio.h"

using namespace std;

double ConversorDeMoeda(double QUELQUECHOSE, double PERSONNESIMPORTE);

int main() {

double dolar, rea;
  
  cout << "Digite a cotação do dólar nos dias atuais no formato double: "<< endl;
  cin >> dolar;
  cout << "Digite o seu dinheiro: "<< endl;
  cin >> rea;

double conver =  ConversorDeMoeda(dolar, rea);
  //(REMEMBER) In order to the fuction (with operation) works, the fuction must be in the middle of the input right before the operation take its place.
  
  cout << "Conversão: "<< conver << endl;

  return 0;
}

double ConversorDeMoeda(double dol, double real) {
  
 double conv = (dol*real);

  return conv; 
}
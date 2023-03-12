#include "math.h"
#include "iostream"
#include "iomanip"

using namespace std;

double CalcDaCaixa(double A,double B,double C,double D);

int main(){

double compr, largu, altu, vol;

  cout << "Digite o comprimento: " << endl;
  cin >> compr;
  cout << "Digite a largura: " << endl;
  cin >> largu;
  cout << "Digite a altura: " << endl;
  cin >> altu;

vol = CalcDaCaixa(compr, largu, altu, vol);
  
  cout << "O volume é de: " << vol << endl;

  return 0;
  }
double CalcDaCaixa(double comp,double larg,double alt,double volume){
  
volume = (comp * larg) * alt;
  
  return volume;
  }
#include "cstdlib" 
#include "iostream" 
#include "math.h" 

using namespace std; 

double const pi = 3.14; 

double LerComprimento() { 

  double comprimento; 

  cout << "Digite o comprimento do circulo: " << endl; 
  cin >> comprimento; 

  return comprimento; 

} 

void MostarArea(double comprimento) { 

  double raio, area; 

  raio = comprimento / (2 * pi); 

  area = raio*raio*pi; 

  cout << "\nRaio: " << raio << endl; 
  cout << "Diâmetro: " << raio * 2 << endl; 
  cout << "Área: " << area << endl; 

} 

int main() { 

  int op; 
  double comprimento; 

MENU: 

  system("clear"); 
  cout << "\nMenu do programa\n1 - Executar\n2 - Sair\nEscolha:"; 

  cin >> op; 

  switch (op) { 

  case 1: 
    comprimento = LerComprimento(); 
    MostarArea(comprimento); 
    break; 
  case 2: 
    cout << "Fim do programa." << endl; 
    getchar(); 
    exit(0); 
    break; 

  } 
  return 0; 

} 
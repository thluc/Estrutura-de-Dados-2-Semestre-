#include "iostream"
#include "math.h"
#include "stdio.h"

using namespace std;

int SomaDosQuadrados (int d, int e, int f, int g);

int main() {
  
int a, b, c, s;

  cout << "Digite o primeiro valor: " << endl;
  cin >> a;
  cout << "Digite o segundo valor: " << endl;
  cin >> b;
  cout << "Digite o terceiro valor: " << endl;
  cin >> c;

s = SomaDosQuadrados(a, b, c, s);
  
cout << "A soma dos quadrados é: " << s << endl;
  
  return 0; 
}

int SomaDosQuadrados(int a, int b, int c, int soma) {

soma = a*a+b*b+c*c;

  return soma;
}
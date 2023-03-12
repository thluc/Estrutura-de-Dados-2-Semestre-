#include "iostream"
#include "math.h"

using namespace std;

int lerValores(int w, int g, int v, int t);

int main() {

 int x, y, z, zz;
 
  cout << "Digite um número do tipo int: " << endl;
  cin >> x;
  cout << "Digite outro número do tipo int: " << endl;
  cin >> y;

 zz = lerValores(x, y, z, zz);

  cout << "Diferença dos dois números: " << zz << endl;

  return 0;
}

int lerValores(int a, int b, int s, int ss)
{
  s = a - b;
  ss = s*s;

  return ss; 
}

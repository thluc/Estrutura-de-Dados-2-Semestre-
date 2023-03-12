#include "iostream"
#include "cstdlib"

using namespace std;

int main()

{   
  int a = 189;
  int *pn;
  pn = &a;

  int b = 38;
  int *pn2;
  pn2 = &b;

 int soma = *pn + *pn2;
  
  cout << "Soma dos ponteiros: " << soma << endl;
 
  }


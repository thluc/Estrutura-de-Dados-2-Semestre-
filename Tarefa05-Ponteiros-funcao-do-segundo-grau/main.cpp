#include "iostream"
#include "cmath"

using namespace std;

int funcaosg(int *a, int *b, int *c);
int funcaosg2(int *a, int *b, int *c);
int heron(int *a, int *b, int *c);

int fazerfdsg() {
  int a, b, c;

  cout << "Digite o número A: ";
  cin >> a;
  cout << "Digite o número B ";
  cin >> b;
  cout << "Digite o número C: ";
  cin >> c;
  
  int valor = funcaosg(&a, &b, &c);
  int valor2 = funcaosg2(&a, &b, &c);
  
  cout << "Seu primeiro valor é: " << valor << "\nE seu segundo é: " << valor2 << endl;

  return valor;
  return valor2;
  }
  
int calch () {
  int a, b, c;

  cout << "Digite o número A: ";
  cin >> a;
  cout << "Digite o número B ";
  cin >> b;
  cout << "Digite o número C: ";
  cin >> c;
  
  int valor = heron(&a, &b, &c);
  
  cout << "Cálculo do triângulo na fórmula Heron: " << valor << endl;

  return valor;
}


int main() {

   int tecla=0;
  while (tecla != 2)
  { 
    cout << "\n1 Fazer função do segundo grau:\n2 Fazer triângulo Heron:\n3 Sair:\nItem:"; 
    cin >> tecla;
    switch(tecla) 
      {case 1: fazerfdsg(); 
        break;
        case 2: calch();
        break;
        case 3:
        exit(0);
        break; 
        }
    }
  return 0;
}

int funcaosg(int *a, int *b, int *c) {
 
 double d = *b**b;
 double de = 4**a**c;
 double del = d + de; 

 double x1 = (*b + sqrt(del));
 double vlra = 2**a;
 double x11 = x1 / vlra;
  
  return x11;
}

int funcaosg2(int *a, int *b, int *c) {
 
 double d2 = (*b**b);
 double de2 = 4**a**c;
 double del2 = d2 + de2;
  
 double x2 = (*b - sqrt(del2));
 double vlrb = 2**a;
 double x22 =  x2 / vlrb;
  
  return x22;
}

int heron(int *a, int *b, int *c) {

 int p = (*a+*b+*c) / 2;
 int a1 = (p-*a)*(p-*b)*(p-*c);
 double p1 = p*a1;
 double p11 = sqrt(p1); 

  return p11;
}
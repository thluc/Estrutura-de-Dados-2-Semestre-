#include"iostream"
using namespace std;
void main ()
{
  int arr[4];

  cout << "Digite seu nome, cpf, email e telefone: " <<endl;
  for (int i=0; i<4; i++)
    {
      cin >> arr[i];
    }

  cout << "Dados digitados: " << endl;
  for (int i=0; i<4; i++)
    {
      cout << arr[i] << "  ";
    }
  cout <<"n\n\n" << endl;
}
system("pause");
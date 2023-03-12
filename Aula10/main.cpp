#include "iostream"
#include "cstdlib"

using namespace std;

int total;  

struct noFifo
{
int chave;      
noFifo * prox;  
};

noFifo * primeiroNo; 
noFifo * ultimoNo; 

void construtor ()
{primeiroNo = ultimoNo = NULL; 
total = 0; 
cout << "\nFIFO iniciada!\n"; 
system("sleep 2"); 
  system("clear");
}

bool vazia ()
{
return ( primeiroNo == NULL );
}

void inserirNo ( int valor ) { 
  noFifo * novoNo = ( noFifo * ) malloc ( sizeof (noFifo ) );

if ( novoNo == NULL )
{ 
cout << "\nErro de alocação!" << endl;  
 system("sleep 2");
return ; }  
  
novoNo->chave = valor;     
novoNo->prox  = NULL;     
 total ++;  

if (  vazia () == true )   
{ primeiroNo = novoNo;
     ultimoNo   = novoNo;
  }else
{  ultimoNo->prox = novoNo; }

ultimoNo = novoNo;
}

void removerNo()
{     
cout << "Removendo o valor" << endl;
noFifo  * temp; 
     temp = primeiroNo; 
if (  ! vazia ( )  ) 
{ 
primeiroNo = temp->prox; 
} 
free ( temp );
total --; 
}

void mostrar (){
 noFifo * temp;
 temp = primeiroNo;

while ( temp != NULL ) 
{
    cout << temp->chave << " ";   
 temp = temp->prox;
 }   
cout << endl;  
 system("sleep 3");
free(temp); 
}

void destrutor()
{ 
noFifo * temp, * aux; 
temp = primeiroNo;

while ( temp != NULL ) {
aux = temp;
temp = temp->prox;
free ( aux ); 
} 
cout << "\nFIFO destruída...!" << endl; 

  }

int tela(){
  int opcao;
  cout << "Menu de Registros" << endl; 
  cout << " 1 - Inserir (push)" << endl; 
  cout << " 2 - Deletar (pop)" << endl; 
  cout << " 3 - Mostrar Pilha" << endl; 
  cout << " 4 - Destruir" << endl;
  cout << " 5 - Sair" << endl;
  cout << "" << endl;
  cout << "Elemento escolhido: "; 
    cin >> opcao;
return opcao;
}


void controle() {

  int opcao; 
  int valor; 
do {
  opcao = tela(); 
  
  switch (opcao) { 
    
    case 1:   
    cout << "Digite um valor" << endl;
    cin >> valor;
    inserirNo(valor);
    break; 
    
    case 2: 
    removerNo();  
    break; 
    
    case 3:
    mostrar();
    break; 
    
    case 4:
    destrutor(); 
    
    case 5:
    cout << "FIM DO PROGRAMA" << endl;
    exit(0); 
    }
} while (opcao < 5);
cout << "Não existe essa opção."; }

int main(){
  controle();
}
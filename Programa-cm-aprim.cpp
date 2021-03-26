////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Programa Gerador de Média com exportação de dados em texto
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream> //Biblioteca de entrada (cin) e saídas (cout) em tela
#include <iomanip> //Biblioteca de manipulação das entradas e saídas (setprecision e fixed)
#include <conio.h> //Biblioteca monitora de entradas do teclado
#include <stdio.h> //Biblioteca de exportação e importação de dados
using namespace std;

int main() {
  //Declaração das Variáveis
  int qtdeanterior, qtdeseguinte; //Variáveis de quantidade
  float vmedioanterior, valornovo; //Variáveis de valores
  FILE *arq; //Variavel de arquivo de exportação
  
  //Comando para criação e abertura de arquivo de texto
  arq = fopen("dados.txt","wb");
  if (arq == NULL){
	cout << "Problemas na abertura do arquivo" << endl;
  }
  
  //Entradas de valores
  cout << "Bem vindo! Essa e a calculadora de Custo Medio da MucaTech" << endl << endl << "Entre com a quantidade em estoque" << endl;
  cin >> qtdeanterior;
  cout << "Informe o valor medio do produto em estoque" << endl;
  cin >> vmedioanterior;
  cout << "Informe a quantidade dos produtos adquiridos" << endl;
  cin >> qtdeseguinte;
  cout << "Indique o valor unitário dos produtos adquiridos" << endl;
  cin >> valornovo;
  
  //Impressora de Resultado em Tela
  cout << endl << endl << "Aguarde!!!";
  cout << endl << endl << "O novo valor e R$ " << fixed << setprecision(2) << (qtdeanterior * vmedioanterior + qtdeseguinte * valornovo) / (qtdeanterior + qtdeseguinte) << endl;  
  
  //Gravadora de Resultado no Arquivo
  fprintf (arq, "O novo Custo Médio é R$ %f", ((qtdeanterior * vmedioanterior + qtdeseguinte * valornovo) / (qtdeanterior + qtdeseguinte)));
  fclose (arq);

  //Comando de Aguardo de Tecla Pressionada
  getch();
}
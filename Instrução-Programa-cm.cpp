////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Programa Gerador de Média simples
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int main() {
  //Declaração das Variáveis
  int qtdeanterior, qtdeseguinte; //Variáveis de quantidade
  float vmedioanterior, valornovo; //Variáveis de valores

  //Entradas de valores
  cout << "Bem vindo! Essa e a calculadora de Custo Medio da MucaTech" << endl << endl << "Entre com a quantidade em estoque" << endl;
  cin >> qtdeanterior;
  cout << "Informe o valor medio do produto em estoque" << endl;
  cin >> vmedioanterior;
  cout << "Informe a quantidade dos produtos adquiridos" << endl;
  cin >> qtdeseguinte;
  cout << "Indique o valor unitário dos produtos adquiridos" << endl;
  cin >> valornovo;
  
  //Impressora de Resultado
  cout << endl << endl << "Aguarde!!!";
  cout << endl << endl << "O novo valor e R$ " << fixed << setprecision(2) << (qtdeanterior * vmedioanterior + qtdeseguinte * valornovo) / (qtdeanterior + qtdeseguinte) << endl;  
  getch();
}
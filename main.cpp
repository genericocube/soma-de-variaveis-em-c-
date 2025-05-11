#include <iostream>
using namespace std;

int main ()
{
  //define três variveis int
  int valor1, valor2, resultado;

  //pergunta o valor das duas variaveis que vai somar
  std::cin >> valor1;
  std::cin >> valor2;
  
  //faz a soma das duas variaveis
  resultado = valor1 + valor2;

  //e printa o resultado
  cout << resultado;

  system("pause");
  return 0;
}

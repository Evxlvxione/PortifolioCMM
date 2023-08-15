/*
	Conversor de moeda: Converte um valor monet�rio em reais (ISO 4217: BRL) para d�lar (ISO 4217: USD) e euro (ISO 4217: EUR).
	Programa escrito em linguagem C++.
*/

#include <iostream> // Declara��o de biblioteca padr�o.
using namespace std; // Declara��o do namespace.

int main() {
	double USD, EUR, BRL; // Declara��o das vari�veis.
	
	cout << "Digite a quantidade de dinheiro: "; // Mensagem de intera��o com o usu�rio.
	cin >> BRL; // Armazenamento de valor em vari�vel.
	
	USD = BRL / 5.0; // Convers�o dos valores.
	EUR = BRL / 5.2;
	
	printf("%.2f \n", BRL); // Resultado final exibindo valor em real e valores convertidos.
	printf("%.2f \n", USD);
	printf("%.2f \n", EUR);

	return 0;	
};

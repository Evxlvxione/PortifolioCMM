/*
	Conversor de moeda: Converte um valor monetário em reais (ISO 4217: BRL) para dólar (ISO 4217: USD) e euro (ISO 4217: EUR).
	Programa escrito em linguagem C++.
*/

#include <iostream> // Declaração de biblioteca padrão.
using namespace std; // Declaração do namespace.

int main() {
	double USD, EUR, BRL; // Declaração das variáveis.
	
	cout << "Digite a quantidade de dinheiro: "; // Mensagem de interação com o usuário.
	cin >> BRL; // Armazenamento de valor em variável.
	
	USD = BRL / 5.0; // Conversão dos valores.
	EUR = BRL / 5.2;
	
	printf("%.2f \n", BRL); // Resultado final exibindo valor em real e valores convertidos.
	printf("%.2f \n", USD);
	printf("%.2f \n", EUR);

	return 0;	
};

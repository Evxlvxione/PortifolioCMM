/*
	Conversor de moeda: Converte um valor monetário em reais (ISO 4217: BRL) para dólar (ISO 4217: USD) e euro (ISO 4217: EUR).
	Programa escrito em linguagem C++.
*/

#include <iostream> // Declaração de bibliotecas.
#include <cmath>
using namespace std;

int main() {
	float BRL; // Definição de variáveis.
	float USD = 5.0;
	float EUR = 5.5;
	int moeda;
	
	cout << "Digite um valor em reais: \n"; // Interação com o usuário.
	cin >> BRL;
	cout << "Digite 1 para converter para dolar e 2 para converter para euro.\n";
	cin >> moeda;
	
	if(moeda == 1) { // Estrutura condicional.
		printf("%.2f", BRL / USD);
	} else if(moeda == 2) {
		printf("%.2f", BRL / EUR);	
	} else {
		cout << "Conversao invalida.";
	}
	
	return 0;	
};

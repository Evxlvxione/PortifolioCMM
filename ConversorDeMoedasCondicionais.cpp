/*
	Conversor de moeda: Converte um valor monet�rio em reais (ISO 4217: BRL) para d�lar (ISO 4217: USD) e euro (ISO 4217: EUR).
	Programa escrito em linguagem C++.
*/

#include <iostream> // Declara��o de bibliotecas.
#include <cmath>
using namespace std;

int main() {
	float BRL; // Defini��o de vari�veis.
	float USD = 5.0;
	float EUR = 5.5;
	int moeda;
	
	cout << "Digite um valor em reais: \n"; // Intera��o com o usu�rio.
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

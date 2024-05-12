//Faça um programa para uma calculadora simples que solicita ao usuário dois operandos como entrada, seleciona uma das opções da lista 
//(1- soma, 2- multiplicação, 3- divisão, 4-potência) e exibe o resultado. O algoritmo deve executar repetidamente até que os dois operandos informados sejam iguais a zero.
//Utilize uma variável do tipo real para exibir o resultado.
#include <iostream>
#include <locale.h>
#include <cmath>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	float soma;
	float multiplicacao;
	float divisao;
	float potencia;
	float num1;
	float num2;
	int operacao;
	double base, expoente;
	int i;
	
	cout << "CALCULADORA SIMPLES!\n\n\n";
	
		cout << "Dígite o prímeiro valor (ou base): ";
		cin >> num1;
		
		cout << "\nDígite o segundo valor (ou expoente): ";
		cin >> num2;
		
		cout << "\n\nQual operação você deseja realizar: "; 
		cout << "1- Soma  2- Multiplicação  3- Divisão  4- Potência: ";
		cin >> operacao;
	
	
	
	for(num1,num2; num1 != 0 && num2 != 0; i++){
	
		
		if(operacao == 1){
			
			soma = num1 + num2;
			cout << "\n\nA soma dos dois valores é de: " << soma;
			system("pause");
			
		}else if(operacao == 2){
			
			multiplicacao = num1 * num2;
			cout << "\n\nA multiplicação dos dois valores é de: " << multiplicacao;
			system("pause");
			
		}else if(operacao == 3){
			
			divisao = num1 / num2;
			cout << "\n\nA divisão dos dois valores é de: " << divisao;
			system("pause");
			
		}else if(operacao == 4){
			
			base = num1;
			expoente = num2;
			potencia = pow(base,expoente);
			cout << "\n\n" << base << " elevado a " << expoente << " é igual a: " << potencia;
			system("pause");
			
		}else{
			
			cout << "\n\nValor dígitado incorreto, tente novamente!";
			system("pause");
		}
	}
	
	cout << "\n\nFim do programa!";
	
		
	return 0;
}

//Fa�a um programa para uma calculadora simples que solicita ao usu�rio dois operandos como entrada, seleciona uma das op��es da lista 
//(1- soma, 2- multiplica��o, 3- divis�o, 4-pot�ncia) e exibe o resultado. O algoritmo deve executar repetidamente at� que os dois operandos informados sejam iguais a zero.
//Utilize uma vari�vel do tipo real para exibir o resultado.
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
	
		cout << "D�gite o pr�meiro valor (ou base): ";
		cin >> num1;
		
		cout << "\nD�gite o segundo valor (ou expoente): ";
		cin >> num2;
		
		cout << "\n\nQual opera��o voc� deseja realizar: "; 
		cout << "1- Soma  2- Multiplica��o  3- Divis�o  4- Pot�ncia: ";
		cin >> operacao;
	
	
	
	for(num1,num2; num1 != 0 && num2 != 0; i++){
	
		
		if(operacao == 1){
			
			soma = num1 + num2;
			cout << "\n\nA soma dos dois valores � de: " << soma;
			system("pause");
			
		}else if(operacao == 2){
			
			multiplicacao = num1 * num2;
			cout << "\n\nA multiplica��o dos dois valores � de: " << multiplicacao;
			system("pause");
			
		}else if(operacao == 3){
			
			divisao = num1 / num2;
			cout << "\n\nA divis�o dos dois valores � de: " << divisao;
			system("pause");
			
		}else if(operacao == 4){
			
			base = num1;
			expoente = num2;
			potencia = pow(base,expoente);
			cout << "\n\n" << base << " elevado a " << expoente << " � igual a: " << potencia;
			system("pause");
			
		}else{
			
			cout << "\n\nValor d�gitado incorreto, tente novamente!";
			system("pause");
		}
	}
	
	cout << "\n\nFim do programa!";
	
		
	return 0;
}

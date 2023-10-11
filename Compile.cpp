#include <stdio.h>

#define PI 3.14

int main() {
	bool running = true;
	int option;
	float results;
	
	do {
		printf("* * * * * * * * * * *\n");
		printf("* ESCOLHA UMA OPCAO *\n");
		printf("* * * * * * * * * * *\n");
		
		printf("[1] Calcular IMC\n");
		printf("[2] Realizar operacao matematica basica\n");
		printf("[3] Calcular area do circulo\n");
		printf("[4] Converter temperatura\n");
		printf("[5] Finalizar o programa\n");
		
		scanf("%d", &option);
		
		switch (option) {
			case 1:
				printf("* * * *\n");
				printf("* IMC *\n");
				printf("* * * *\n");
		
				float weight, height;
				
				printf("Entre com o seu peso: ");
				scanf("%f", &weight);
				
				printf("Entre com a sua altura em metros: ");
				scanf("%f", &height);
				
				results = weight / (height * height);
				
				printf("Seu IMC: %.2f\n", results);
				
				break;
				
			case 2:
				printf("* * * * * * * * * * *\n");
				printf("* OPERACOES BASICAS *\n");
				printf("* * * * * * * * * * *\n");
				
				int opt;
				float numberOne, numberTwo;
				
				printf("Selecione a operacao:\n");
				printf("[1] Adicao\n");
				printf("[2] Subtracao\n");
				printf("[3] Multiplicacao\n");
				printf("[4] Divisao\n");
				
				scanf("%d", &opt);
				
				if (opt > 4 || opt <= 0) {
					printf("Operacao invalida!");
					break;
				}
				
				printf("Insira o primeiro numero: ");
				scanf("%f", &numberOne);
				
				printf("Insira o segundo numero: ");
				scanf("%f", &numberTwo);
				
				if (opt == 1) {
					results = numberOne + numberTwo;
				} else if (opt == 2) { 
					results = numberOne - numberTwo;
				} else if (opt == 3) {
					results = numberOne * numberTwo;
				} else {
					results = numberOne / numberTwo;
				}
				
				printf("O resultado foi: %.2f\n", results);
				
				break;
				
			case 3:
				printf("* * * * * * * * * *\n");
				printf("* AREA DO CIRCULO *\n");
				printf("* * * * * * * * * *\n");
				
				float input;
				
				printf("Entre com o raio do circulo em METROS: ");
				scanf("%f", &input);
				
				results = PI * (input * input);
				
				printf("A area do ciruculo e: %.2f\n", results);
				
				break;
				
			case 4:
				printf("* * * * * * * * * * * * *\n");
				printf("* CONVERSOR TEMPERATURA *\n");
				printf("* * * * * * * * * * * * *\n");
				
				float temperature;
				
				printf("Entre com a temperatura em CELSIUS: ");
				scanf("%f", &temperature);
				
				results = (temperature * 1.8) + 32;
				
				printf("Temperatura em Fahrenheit: %.2f\n", results);
				
				break;
			
			default:
				running = false;
				break;
		}
	} while (running);
	
	printf("Finalizando o programa...");
	
	return 0;
}

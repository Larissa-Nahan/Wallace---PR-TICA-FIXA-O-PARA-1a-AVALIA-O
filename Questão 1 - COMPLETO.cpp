#include <stdio.h>
#include <locale.h>

int main()
{
	/*1. Criar uma aplicação, para ler 5 números e ir armazenando-os em um vetor.
	Em seguida, exiba esse vetor em ordem crescente dos índices e 
	em ordem decrescente dos índices.*/
	setlocale(LC_ALL,"");
	
	int numeros[4];
	int i, j, armazena;

	printf("Digite 5 números: \n");
	for(i = 0; i <= 4; i++){
		scanf("%d", &numeros[i]);	
	}

	printf("\nA ordem crescente dos índice é:\n");
	for(i = 4; i >= 0; i--){
		printf("%d\n", numeros[i]);
	}
	printf("\nA ordem decrescente dos índices é:\n");
		for(i = 0; i <= 4; i++){
			printf("%d\n", numeros[i]);
	}

	for(i = 0; i <= 4; i++){
		for(j = i; j <= 4; j++){
			if(numeros[i] <= numeros[j]){
				armazena = numeros[j];
				numeros[j] = numeros[i];
				numeros[i] = armazena;
			}
		}
	}
	
	printf("\nA ordem crescente dos números digitados é: \n");
	for(i = 4; i >= 0; i--){
		printf("%d\n", numeros[i]);
	}
	printf("\nA ordem decrescente dos números digitados é: \n");
	for(i = 0; i <= 4; i++){
		printf("%d\n", numeros[i]);
	}

	return 0;
}


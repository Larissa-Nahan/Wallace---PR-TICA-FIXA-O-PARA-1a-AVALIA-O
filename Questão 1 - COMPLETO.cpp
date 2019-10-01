#include <stdio.h>
#include <locale.h>

int main()
{
	/*1. Criar uma aplica��o, para ler 5 n�meros e ir armazenando-os em um vetor.
	Em seguida, exiba esse vetor em ordem crescente dos �ndices e 
	em ordem decrescente dos �ndices.*/
	setlocale(LC_ALL,"");
	
	int numeros[4];
	int i, j, armazena;

	printf("Digite 5 n�meros: \n");
	for(i = 0; i <= 4; i++){
		scanf("%d", &numeros[i]);	
	}

	printf("\nA ordem crescente dos �ndice �:\n");
	for(i = 4; i >= 0; i--){
		printf("%d\n", numeros[i]);
	}
	printf("\nA ordem decrescente dos �ndices �:\n");
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
	
	printf("\nA ordem crescente dos n�meros digitados �: \n");
	for(i = 4; i >= 0; i--){
		printf("%d\n", numeros[i]);
	}
	printf("\nA ordem decrescente dos n�meros digitados �: \n");
	for(i = 0; i <= 4; i++){
		printf("%d\n", numeros[i]);
	}

	return 0;
}


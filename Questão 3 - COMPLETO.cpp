#include <stdio.h>
#include <locale.h>

int main()
{
	/*3.Ler 10 números a serem digitados pelo usuário e armazená-los em um vetor. 
	Em seguida, diga qual é o maior dos 10 números.*/
	setlocale(LC_ALL,"");
	
	int numeros[10];
	int i, j, maior = 0;
	
	for(i = 0; i < 10; i++){
		printf("Digite um número: ");
		scanf("%d", &numeros[i]);

		if(maior <= numeros[i]){
			maior = numeros[i];	
		}
		else{
			if(maior == 0){
				maior = numeros[i];	
			}
		}
	}
	
	printf("\nO maior número entre os 10 números digitados é o número %d", maior);
	
	return 0;
}

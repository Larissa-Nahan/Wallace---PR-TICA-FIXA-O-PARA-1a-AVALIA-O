#include <stdio.h>
#include <locale.h>

int main()
{
	/*2.Ler 10 números a serem digitados pelo usuário e armazená-los em um vetor.
	Em seguida, exibir a quantidade de vezes que o número 3 está presente no vetor.*/
	setlocale(LC_ALL,"");
	
	int numeros[9];
	int i, contador = 0;
	
	printf("Digite 10 números: \n");
	for(i = 0; i <= 9; i++){
		scanf("%d", &numeros[i]);
		
		if(numeros[i] == 3){
			contador ++;
		}
	}
	
	printf("\nO número 3 foi digitado %d vezes.", contador);
	
	return 0;
}

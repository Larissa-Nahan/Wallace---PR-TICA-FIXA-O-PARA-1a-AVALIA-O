#include <stdio.h>
#include <locale.h>

int main()
{
	/*3.Ler 10 n�meros a serem digitados pelo usu�rio e armazen�-los em um vetor. 
	Em seguida, diga qual � o maior dos 10 n�meros.*/
	setlocale(LC_ALL,"");
	
	int numeros[10];
	int i, j, maior = 0;
	
	for(i = 0; i < 10; i++){
		printf("Digite um n�mero: ");
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
	
	printf("\nO maior n�mero entre os 10 n�meros digitados � o n�mero %d", maior);
	
	return 0;
}

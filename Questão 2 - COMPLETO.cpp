#include <stdio.h>
#include <locale.h>

int main()
{
	/*2.Ler 10 n�meros a serem digitados pelo usu�rio e armazen�-los em um vetor.
	Em seguida, exibir a quantidade de vezes que o n�mero 3 est� presente no vetor.*/
	setlocale(LC_ALL,"");
	
	int numeros[9];
	int i, contador = 0;
	
	printf("Digite 10 n�meros: \n");
	for(i = 0; i <= 9; i++){
		scanf("%d", &numeros[i]);
		
		if(numeros[i] == 3){
			contador ++;
		}
	}
	
	printf("\nO n�mero 3 foi digitado %d vezes.", contador);
	
	return 0;
}

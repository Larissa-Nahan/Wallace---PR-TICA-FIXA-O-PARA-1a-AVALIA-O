#include <stdio.h>
#include <locale.h>

int main()
{
	/*4.Criar uma aplica��o para ler um nome e armazenar em um vetor de caracteres. 
	Em seguida exiba o nome de tr�s formas diferentes. 
			a) texto normal, utilizando a m�scara de formata��o string (%s). 
			b) caractere a caractere em ordem crescente dos �ndices. 
			c) caractere a caractere em ordem decrescente dos �ndices.*/
	setlocale(LC_ALL,"");
	
	char armazena, nome[10];
	int i, j;
	
	printf("Digite um nome: ");
	gets(nome);
	
	printf("\nO nome digitado foi %s\n", nome);
	
	printf("\nO nome em ordem crescente dos �ndices fica:\n");
	for(i = 0; nome[i] != '\0'; i++){
		printf("%c\n", nome[i]);
	}
	
	printf("\nO nome em ordem decrescente dos �ndices fica:");
	for(j = i; j >= 0 ; j--){
		printf("%c\n", nome[j]);
	}
		
	return 0;
}

#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main()
{
	/*6.Converter um texto para maiúsculo, depois para minúsculo. 
	Utilize as funções toupper, e tolower. Mostre o texto após cada conversão*/
	setlocale(LC_ALL,"");
	
	char texto[50];
	int i;
	
	printf("Digite um texto: ");
	gets(texto);
	
	printf("\nO texto em maiúsculo fica:\n");
	for(i = 0; i < 50 && texto[i] != '\0'; i++){
		printf("%c", toupper(texto[i]));
	}

	printf("\n\nO texto em minúsculo fica:\n");
	for(i = 0; i < 50 && texto[i] != '\0'; i++){
		printf("%c", tolower(texto[i]));
	}
		
	return 0;
}

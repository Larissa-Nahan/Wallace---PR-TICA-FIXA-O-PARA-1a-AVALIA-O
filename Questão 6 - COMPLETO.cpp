#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main()
{
	/*6.Converter um texto para mai�sculo, depois para min�sculo. 
	Utilize as fun��es toupper, e tolower. Mostre o texto ap�s cada convers�o*/
	setlocale(LC_ALL,"");
	
	char texto[50];
	int i;
	
	printf("Digite um texto: ");
	gets(texto);
	
	printf("\nO texto em mai�sculo fica:\n");
	for(i = 0; i < 50 && texto[i] != '\0'; i++){
		printf("%c", toupper(texto[i]));
	}

	printf("\n\nO texto em min�sculo fica:\n");
	for(i = 0; i < 50 && texto[i] != '\0'; i++){
		printf("%c", tolower(texto[i]));
	}
		
	return 0;
}

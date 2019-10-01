#include <stdio.h>
#include <locale.h>

int main()
{
	/*7.Leia o nome completo de uma pessoa (nome / sobrenome / nome do meio). 
	Em seguida, exiba cada um dos nomes em linhas diferentes. 
	Ex.: João da Silva Cavalcanti. 
	João 
	da 
	Silva 
	Cavalcanti*/
	setlocale(LC_ALL,"");
	
	char completo[50];
	int i;
	
	printf("Digite seu nome completo: ");
	gets(completo);
	
	for(i = 0; i < sizeof(completo) && completo[i] != '\0'; i++){
		if(completo[i] == ' '){
			printf("\n");
		}
		else{
			printf("%c", completo[i]);	
		}
	}
	
	return 0;
}

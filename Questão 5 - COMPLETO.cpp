#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
	/*5.Criar uma aplicação, para ler dois nomes. Em seguida:
		a) exiba o tamanho (quantidade de caracteres) de cada nome. Utilize strlen().
		b) diga se os nomes são: iguais, ou se o primeiro é maior, ou se o primeiro é menor. Utilize strcmp().*/
	setlocale(LC_ALL,"");

	char nome1[10], nome2[10];
	int maior, i, j;

	printf("Digite um nome: ");
	scanf("%s", &nome1);
	printf("Digite outro nome: ");
	scanf("%s", &nome2);

	printf("\nO primeiro nome tem %d caracteres.", strlen(nome1));
	printf("\nO segundo nome tem %d caracteres.", strlen(nome2));

	for(i = 0; nome1[i] != '\0' && nome2[i]!= '\0'; i++){
	}
	
    maior = strcmp(nome2, nome1);

    if(maior == 0){
        printf("\n\nOs dois nomes são iguais.");
    }
    else {
    	if(nome1[i]==nome2[i]){
        	printf("\n\nOs dois nomes tem o mesmo tamanho e são diferentes.");
    	}
		else{
			printf("\n\nOs dois nomes são diferentes.");
	        printf("\n\n%d", maior);
	        if(maior < 0){
	            printf("\n\nO primeiro nome é maior que o segundo.");
	        }
	        else{
	            printf("\n\nO segundo nome é maior que o primeiro.");
	        }
    	}
	}

	return 0;
}

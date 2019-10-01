#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
	/*5.Criar uma aplica��o, para ler dois nomes. Em seguida:
		a) exiba o tamanho (quantidade de caracteres) de cada nome. Utilize strlen().
		b) diga se os nomes s�o: iguais, ou se o primeiro � maior, ou se o primeiro � menor. Utilize strcmp().*/
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
        printf("\n\nOs dois nomes s�o iguais.");
    }
    else {
    	if(nome1[i]==nome2[i]){
        	printf("\n\nOs dois nomes tem o mesmo tamanho e s�o diferentes.");
    	}
		else{
			printf("\n\nOs dois nomes s�o diferentes.");
	        printf("\n\n%d", maior);
	        if(maior < 0){
	            printf("\n\nO primeiro nome � maior que o segundo.");
	        }
	        else{
	            printf("\n\nO segundo nome � maior que o primeiro.");
	        }
    	}
	}

	return 0;
}

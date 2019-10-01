#include <stdio.h>
#include <locale.h>

int main()
{
	/*8.Fa�a um programa para verifica��o de pal�ndromo.
	O programa deve receber um texto do usu�rio, e determinar se a string � um pal�ndromo ou n�o
	(isto �, tem a mesma leitura no sentido normal e no sentido inverso).
	O programa n�o precisa tratar espa�os em branco, pontua��o e caracteres especiais.
	Exemplos de pal�ndromo:
	"ANA"
	"REVIVER"
	"ROMA ME TEM AMOR "
	"SOCORRAM-ME, SUBI NO �NIBUS EM MARROCOS"*/
	setlocale(LC_ALL,"");

	char texto[50], reverso[50], reverso_sem_espaco[50], texto_sem_espaco[50];
	int i, j;
	int aux = 0;

	printf("Digite um texto: ");
	gets(texto);

	for(i = 0; texto[i] != '\0' && i < 50; i++){
	}

	for(j = 0; i>0; j++){
    	i--;
		reverso[j] = texto[i];
  	}
  	reverso[j]='\0';

  	for(i=0,j=0; reverso[i] != '\0' && i < 50; i++){
    	if(reverso[j]!=' '){
      		reverso_sem_espaco[i] = reverso[j];
      		j++;
    	}
    	else{
      		j++;
      		i--;
    	}
  	}
    
  	for(i = 0, j = 0; texto[i] != '\0' && i < 50; i++){
    	if(texto[j] != ' '){
      		texto_sem_espaco[i] = texto[j];
      		j++;
    	}
    	else{
      		j++;
      		i--;
    	}
  	}
  	texto_sem_espaco[i] = '\0';

  	for(i = 0; reverso_sem_espaco[i] == texto_sem_espaco[i] && reverso_sem_espaco[i] != '\0' && texto_sem_espaco[i] != '\0'; i++){
    	aux = 1;
	}

	if(aux == 1){
    	printf("\nO texto � um pal�ndromo.");
	}
	else{
    	printf("\nO texto n�o � um pal�ndromo.");
	}

	return 0;
}

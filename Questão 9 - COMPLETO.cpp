#include <stdio.h>
#include <locale.h>

int main()
{
	/*9.Fazer um programa que recebe um texto e exibe o texto sem os espaços em branco no início e fim do string: 
	" Bom dia, senhor   "  deve ser transformado em "Bom dia, senhor" 
	"Bom dia, senhor   "   deve ser transformado em "Bom dia, senhor" 
	"  Bom dia, senhor"    deve ser transformado em "Bom dia, senhor"*/
	setlocale(LC_ALL,"");
	
	char texto[50], sem_espaco[50];
	int i, j;
	
	printf("Digite um texto: ");
	gets(texto);	
	
    for(j = 0; texto[j] != '\0'; j++){
    	if(texto[j] == ' '){
		}
		else{
			break;
		}
    }
    
    for(i = 0; texto[j] != '\0' && i < 50 ; i++){
      if(texto[j] != ' '){
        sem_espaco[i] = texto[j];
        j++;
      }
      else{
        if(texto[j] == ' ' && texto[j+1] != ' ' && texto[j+1] != '\0'){
          sem_espaco[i] = texto[j];
          j++;	
        }
        else{
          if(texto[j] == ' ' && texto[j+1] == ' '){
            i--;
            j++;
          }
          else{
            sem_espaco[i] = '\0';
            break;
          }	
        }
      }
    }
    sem_espaco[i] = '\0';

	printf("%s", sem_espaco);
	
	return 0;
}

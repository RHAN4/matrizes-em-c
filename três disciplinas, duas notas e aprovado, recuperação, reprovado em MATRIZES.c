#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#include <limits.h>

void cabecalho () {
	printf("\n== SENAI ==\n");
}

int main () {
	cabecalho();
	setlocale(LC_ALL, "");
	int i, j;
	char disciplinas [3][250];
	float nota [3][2];
	float media [3];
	float somaNotas = 0;
	
	for (i = 0; i < 3; i++) {
		printf("\nDigite o nome da %iº disciplina: \n", i + 1);
		gets(disciplinas[i]);
	
		for (j = 0; j < 2; j++) {
			printf("\nInforme a %iº nota: \n", j + 1);
			scanf("%f",&nota[i][j]);
			
			somaNotas += nota[i][j];
		}
		
		media[i] = somaNotas / j;
		somaNotas = 0; 
		fflush(stdin);
	}
	
	printf("\n-- EXIBINDO RESULTADOS --\n");
	
	for (i = 0; i < 3; i++) {
		printf("\n%iº Disciplina: %s \n", i + 1, disciplinas[i]);

		for (j = 0; j < 2; j++) {
			printf("\n%iº Nota: %.2f \n", j + 1, nota[i][j]);
		}	
		
		if (media[i] >= 7) {
			printf("\nAprovado.\n");
		} else if (media[i] >= 5 || media[i] < 7) {
			printf("\nRecuperação.\n");
		} else {
			printf("\nReprovado.\n");
		}
		
		printf("Média: %.2f", media[i]);
	}
		
	return 0;
	
}

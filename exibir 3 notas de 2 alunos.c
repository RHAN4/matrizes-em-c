#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main () {
	setlocale(LC_ALL, "");
	char alunos [2][200];
	float notas [2][3];
	int i, j;
	
	for(i = 0; i < 2; i++) {
		printf("Digite o nome do %i� aluno: ", i + 1);
		scanf("%s",&alunos[i]);
		
		for (j = 0; j < 3; j++) {
			printf("Digite a %i� nota: ", j + 1);
			scanf("%f",&notas[i][j]);
		}
		printf("\n");
	}
	
	printf("\n== EXIBINDO RESULTADOS ==");
	for(i = 0; i < 2; i++) {
		printf("%i� aluno: %s \n", i + 1, alunos [i]);
		
		for(j = 0; j < 3; j++) {
			printf("%i� nota: %.1f \n", j + 1, notas[i][j]);
		}
		printf("\n");
	}
	return 0;
}

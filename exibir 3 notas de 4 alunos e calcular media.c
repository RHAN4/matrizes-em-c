#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main () {
	setlocale(LC_ALL, "");
	char alunos [4][200];
	float notas [4][3], soma = 0, media [4];
	int i, j;
	
	for(i = 0; i < 4; i++) {
		printf("Digite o nome do %i� aluno: ", i + 1);
		scanf("%s",&alunos[i]);
		
		for (j = 0; j < 3; j++) {
			printf("Digite a %i� nota: ", j + 1);
			scanf("%f",&notas[i][j]);
			
			soma += notas[i][j];
		}
		media[i] = soma / j;
		soma = 0;
		
		printf("\n");
	}
	
	printf("\n== EXIBINDO RESULTADOS ==\n");
	for(i = 0; i < 4; i++) {
		printf("%i� aluno: %s \n", i + 1, alunos [i]);
		
		for(j = 0; j < 3; j++) {
			printf("%i� nota: %.1f \n", j + 1, notas[i][j]);
		}
		printf("\nM�dia do i� aluno: %.1f", i + 1, media[i]);
		printf("\n");
	}
	return 0;
}

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main () {
	setlocale(LC_ALL, "");
	int numeros[2][2];
	int i, j;
	
	printf("Digite os elementos para a matriz: \n");
	for(i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("Elemento da linha %d coluna %d: ", i + 1, j + 1);
			scanf("%d",&numeros[i][j]);	 
		}
	}
	for(i = 0; i < 2; i++) {
		for(j = 0; j < 2; j++) {
			printf("\nElemento da linha %d coluna %d: %d", i + 1, j + 1, numeros[i][j]);
		}
	}
	return 0;
}

#include <stdio.h>

int main() {
	int C[20];
	
	for (int i = 0; i < 20; i++) scanf("%d", &C[i]);
	printf("\nNumeros digitados:\n");
	for (int j = 0; j < 20; j++) printf("%d\t", C[j]);
	printf("\nCompactacao:\n");
	for (int k = 0; k < 20; k++) {
		if (C[k] == 0 || C[k] < 0) continue;
		printf("%d\t", C[k]);
	}
}

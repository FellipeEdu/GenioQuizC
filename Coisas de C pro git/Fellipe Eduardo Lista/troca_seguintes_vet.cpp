#include <stdio.h>

int main() {
	int B[20];
	
	for (int i = 0; i < 20; i++) scanf("%d", &B[i]);
	printf("\nNumeros digitados:\n");
	for(int j = 0; j < 20; j++) printf("%d\t", B[j]);
	printf("\nTroca:\n");
	for (int k = 0; k < 20; k++) {
		if (B[k] % 2 != 0 && B[k+1] % 2 == 0 && B[k+1] != 0) {
			int aux = B[k];
			B[k] = B[k+1];
			B[k+1] = aux;
		}
		printf("%d\t", B[k]); 
	}
}

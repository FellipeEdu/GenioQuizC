#include <stdio.h>

int main() {
	int A[20];
	
	for (int i = 0; i < 20; i++) scanf("%d", &A[i]);
	printf("\nNumeros digitados:\n");
	for (int j = 0; j < 20; j++) printf("%d\t", A[j]);
	printf("\nTroca:\n");
	for (int k = 19; k >= 0; k--) printf("%d\t", A[k]);
}

#include <stdio.h>

int main() {
	int C[30], A[5], B[5], contA = 0, contB = 0;
	
	for(int i = 0; i < 30; i++) scanf("%d", &C[i]);
	putchar('\n');
	for(int j = 0; j < 30; j++) {
		if (C[j] % 2 == 0) {
			A[contA] = C[j];
			contA++;
		}
		else {
			B[contB] = C[j];
			contB++;
		} 
		if(contA == 4) {
			printf("A: ");
			for (int printA = 0; printA < 5; printA++) {
				printf("%d\t", A[printA]);
				A[printA] = NULL;
			}
			contA = 0; 
			putchar('\n');
		} else 
		if (contB == 4) {
			printf("B: ");
			for (int printB = 0; printB < 5; printB++) {
				printf("%d\t", B[printB]);
				B[printB] = NULL;
			}
			contB = 0; 
			putchar('\n');
		}
	}
}

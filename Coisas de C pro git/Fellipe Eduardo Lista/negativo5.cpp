#include <stdio.h>

int main() {
	int neg[5], qNeg;
	
	for (int i = 0; i < 5; i++) {
		scanf("%d", &neg[i]);
		if (neg[i] < 0) qNeg++;
	}
	printf("Quantidade: %d", qNeg);
}

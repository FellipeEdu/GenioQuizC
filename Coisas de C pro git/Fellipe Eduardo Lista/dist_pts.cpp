#include <stdio.h>
#include <math.h>

int main() {
	int pX1, pY1, pX2, pY2;
	float distE;
	
	printf("Insira X e Y de P1: ");
	scanf("%d %d", &pX1, &pY1);
	
	printf("Insira X e Y de P2: ");
	scanf("%d %d", &pX2, &pY2);
	
	distE = sqrt(pow(pX2-pX1, 2) + pow(pY2-pY1, 2));
	
	printf("A Distancia Euclidiana eh: %.1f", distE);
}

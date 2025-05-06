#include <stdio.h>

int main() {
	int Vet[20], menor = 0, pos;
	
	for (int i = 0; i < 20; i++) {
		scanf("%d", &Vet[i]);
		
		if (menor == 0) {
			menor = Vet[i];
			pos = i+1;
		} else 
		if (Vet[i] < menor) {
			menor = Vet[i];
			pos = i+1;
		}
	}
	printf("\nNumeros digitados:\n");
	for (int j = 0; j < 20; j++) printf("%d\t", Vet[j]);
	printf("\nMenor elemento: %d; Posicao: %d", menor, pos);
}

#include <iostream>
using namespace std;

void manipulaVetor(float *vet);

int main() {
	
	float vetor[5] = {6, 3, 6, 2, 9};
	
	for (int i = 0; i < 5; i++) {
		cout << vetor[i] << "\n";
	}	
	cout << "\n\n";
	cout << vetor[0] << "\n";
	
	manipulaVetor(vetor);
	
	cout << vetor[0];
	cout << "\n\n";
	
	for (int i = 0; i < 5; i++) {
		cout << vetor[i] << "\n";
	}
}

 void manipulaVetor(float *vet) {
 	for (int i = 0; i < 4; i++) {
 		if (vet[i] > vet[i+1]) {
 			int aux = vet[i];
 			vet[i] = vet[i+1];
 			vet[i+1] = aux;
 			i = -1;
		}
	}
 }

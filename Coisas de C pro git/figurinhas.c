#include <stdio.h>

int main() {
	int N, F1, F2, resto;
	
	scanf("%d", &N);
	
	if (N >= 1 || N <= 3000 || F1 >= 1 || F1 <= 1000 || F2 >= 1 || F2 <= 1000) {
		for (int i = 0; i < N; i++) {
			scanf("%d %d", &F1, &F2);
			
			resto = F1 % F2;
			
			while (resto != 0) {
                  F1 = F2;
                  F2 = resto;
                  resto = F1 % F2;         
            }
            
            printf("%d\n", F2);
		}
	}
}

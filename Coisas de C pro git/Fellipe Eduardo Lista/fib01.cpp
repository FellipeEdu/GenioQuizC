#include <stdio.h>

int main() {
	int a = 0, b = 1, aux, L;

    scanf("%d", &L);
    printf("%d\t", b);
 
    while (aux < L) {
    	aux = a + b;
    	a = b;		
    	b = aux;	
    	
    	if (aux > L) break;
    	else printf("%d\t", aux);
    }
}

#include <stdio.h>

int main() {
	int x;
	x = 10;
	
	int *ponteiro; 
	ponteiro = &x;
	
	printf("%d, %d\n", ponteiro, *ponteiro);
}

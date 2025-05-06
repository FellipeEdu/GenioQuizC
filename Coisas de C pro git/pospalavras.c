#include <stdio.h>
#include <string.h>

int main() {
	char palavra[31];
	int i, cont, tamp;
	
	fgets(palavra, 31, stdin);
	tamp = strlen(palavra);
//	cont = 0;
	
	for(i = 0; i < tamp-1; i++) {
		for(int j = (tamp-1); j != -1; j--) {
			palavra[i] = j;
		}
		printf("%s\n", palavra[i]);
	}
}

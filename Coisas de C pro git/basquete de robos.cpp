#include <stdio.h>

int main() {
	int D;
	
	scanf("%d", &D);
	
	if (D >= 0 && D <= 2000) {
		if (D <= 800) printf("1\n");
		else if (D > 800 && D <= 1400) printf("2\n");
		else if (D > 1400 && D <= 2000) printf("3\n");
	}
}

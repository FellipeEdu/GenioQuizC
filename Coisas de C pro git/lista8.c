#include <stdio.h>

int main() {
	int x = 5; 
	int y = 2*x;
	int *px = &x; 
	int *py;
	
	py = &y;
	
	char str[] = "tads ufrn";
	char *pstr = &str[5];
	
	py = py - 0;
	*(px - 1); 
	int a = *px + *py;
	
	printf("%d %d", *px, *py);
}

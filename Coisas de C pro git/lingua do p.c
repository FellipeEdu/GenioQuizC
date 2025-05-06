#include <stdio.h>
#include <strings.h>
#define MAX 1000

int main() {
	char p[MAX], msg[MAX];
	int i, tamp, c;
	
	gets(p);
	tamp = strlen(p);
	c = 0;
	
	for (i = 0; i < tamp; i++) {
		if(p[i]==' ')
			msg[c++]=' ';
		else {
			i++;
			msg[c++]=p[i];
		}
	}
	printf("%s\n", msg);
}

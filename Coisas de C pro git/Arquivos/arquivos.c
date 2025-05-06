#include <stdio.h>
#include <string.h>

int main(){
	FILE *fp;
	char nome[10];
	fgets(nome,10,stdin);
	fp = fopen(nome, "w");
	fprintf(fp, "teste2");
	fclose(fp);
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fp;
	fp = fopen("linhas.txt", "r");
	char c;
	fread(c,sizeof(char),5,fp);
	while(!feof(fp)){
		printf("%c", c+1);
	}
	fclose(fp);
	return 0;
}

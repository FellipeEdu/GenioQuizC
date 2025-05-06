#include <stdio.h>

int main(){
	
	FILE *fp;
	fp = fopen("numero.txt", "r");
	
	int x, y, z;
	
	fscanf(fp, "%i %i %i", &x, &y, &z);
	
	printf("%i %i %i\n", x, y, z);
	
	fclose(fp);
	
	return 0;
}

#include <stdio.h>
#define MAX 24
#define MIN 0
//int main() {
//	int k = 0;
//	while(k < 1400){
//		printf("guimaraes dormio'\n");
//		k++;	
//	}
//}
int main() {
	int k[25][25];
	int i, j;
	
//	k[0][0] = 0;
	
	for(i = 0; i < 8; i++) {
		for(j = 0; j < 5; j++) {
			k[i][j] = 1 + 1;
			printf(" %d", k[i][j]);
		}
		printf("\n");
	}
}

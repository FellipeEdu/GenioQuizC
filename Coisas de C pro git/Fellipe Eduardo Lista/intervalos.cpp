#include <stdio.h>

int main() {
    int x, cont1=0, cont2=0, cont3=0, cont4=0;
    float total;
    
    while (scanf("%d", &x)) {
        if (x>=0 && x<25) cont1++;
        else if (x>=25 && x<50) cont2++;
    	else if (x>=50 && x<75) cont3++;
    	else if (x>=75 && x<=100) cont4++;
    }

    total = cont1 + cont2 + cont3 + cont4;
    
	printf("Entre [0,25]: %d\nEntre [25,50]: %d\nEntre [50,75]: %d\nEntre [75,100]: %d\n", cont1, cont2, cont3, cont4);
    putchar('\n');
    printf("Porcentagem 1: %.1f\nPorcentagem 2: %.1f\nPorcentagem 3: %.1f\nPorcentagem 4: %.1f\n", (cont1*100)/total, (cont2*100)/total, (cont3*100)/total, (cont4*100)/total);
}

#include <stdio.h>
#include <math.h>

int raizes(float a, float b, float c, float *x1, float *x2) {
	
}

int main() {
	float a, b, c, raizX1, raizX2; 
	float *x1, *x2;
	
	printf("Digite os termos A, B e C da equacao: ");
	scanf("%f %f %f", &a, &b, &c);
	
	raizX1 = (-b - sqrt(pow(b,2) - 4*a*c)) / 2*a;
	raizX2 = (-b + sqrt(pow(b,2) - 4*a*c)) / 2*a;
	
	x1 = &raizX1;
	x2 = &raizX2;
	
	raizes(a, b, c, x1, x2);
}

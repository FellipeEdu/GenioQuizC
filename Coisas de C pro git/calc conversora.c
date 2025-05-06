#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float c, r; // c = capacidade, r = resultado
	int uo, ud; //  uo = unidade original, ud = unidade destino
	
	printf("\nCONVERSOR DE UNIDADES DE ARMAZENAMENTO..................................\n");
	printf("\nDigite a capacidade: ");
	scanf("%f", &c);
	
	printf("\nDigite a unidade original\n1 - bytes\n2 - KB\n3 - MB\n4 - GB\n");
	scanf("%d", &uo);
	
	printf("\nDigite a unidade de destino\n1 - bytes\n2 - KB\n3 - MB\n4 - GB\n");
	scanf("%d", &ud);
	switch(ud){
		case 1:
			if(uo>4){
      		printf("%d não é um dos valores de unidade original!", uo);}
      		else
      if(uo == 1){ //bytes
			r = c;
			printf("\nResultado: %.2fB\n\nFeito e testado por Fellipão top B-)", r);}
			else if(uo == 2){  //KB
				r=c*1024;
				printf("\nResultado: %.2fB\n\nFeito e testado por Fellipão top B-)", r);}
			else if(uo == 3){  //MB
				r=c*pow(1024,2);
				printf("\nResultado: %.2fB\n\nFeito e testado por Fellipão top B-)", r);}
			else if(uo == 4){  //GB
				r=c*pow(1024,3);
				printf("\nResultado: %.2fB\n\nFeito e testado por Fellipão top B-)", r);}
			break;
		case 2:
      		if(uo>4){
      		printf("%d não é um dos valores de unidade original!", uo);}
      		else
			if(uo == 1){ //bytes
			r=c/1024;
			printf("\nResultado: %.2fKB\n\nFeito e testado por Fellipão top B-)", r);}
			else if(uo == 2){  //KB
				r=c;
				printf("\nResultado: %.2fKB\n\nFeito e testado por Fellipão top B-)", r);}
			else if(uo == 3){  //MB
				r=c*1024;
				printf("\nResultado: %.2fKB\n\nFeito e testado por Fellipão top B-)", r);}
			else if(uo == 4){  //GB
				r=c*pow(1024,2);
				printf("\nResultado: %.2fKB\n\nFeito e testado por Fellipão top B-)", r);}
			break;
		case 3:
			if(uo>4){
      		printf("%d não é um dos valores de unidade original!", uo);}
      		else
      		if(uo == 1){ //bytes
			r=c/pow(1024,2);
			printf("\nResultado: %.2fMB\n\nFeito e testado por Fellipão top B-)", r);}
			else if(uo == 2){  //KB
				r=c/1024;
				printf("\nResultado: %.2fMB\n\nFeito e testado por Fellipão top B-)", r);}
			else if(uo == 3){  //MB
				r=c;
				printf("\nResultado: %.2fMB\n\nFeito e testado por Fellipão top B-)", r);}
			else if(uo == 4){  //GB
				r=c*1024;
				printf("\nResultado: %.2fMB\n\nFeito e testado por Fellipão top B-)", r);}
			break;
		case 4:
			if(uo>4){
      		printf("%d não é um dos valores de unidade original!", uo);}
      		else
      		if(uo == 1){ //bytes
			r=c/pow(1024,3);
			printf("\nResultado: %.4fGB\n\nFeito e testado por Fellipão top B-)", r);}
			else if(uo == 2){  //KB
				r=c/pow(1024,2);
				printf("\nResultado: %.4fGB\n\nFeito e testado por Fellipão top B-)", r);}
			else if(uo == 3){  //MB
				r=c/1024;
				printf("\nResultado: %.4fGB\n\nFeito e testado por Fellipão top B-)", r);}
			else if(uo == 4){  //GB
				r=c;
				printf("\nResultado: %.4fGB\n\nFeito e testado por Fellipão top B-)", r);}
			break;
		default: printf("%d não é um dos valores de unidade destino!", ud);
		}
	}      	

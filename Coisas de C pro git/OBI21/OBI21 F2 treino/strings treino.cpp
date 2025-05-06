#include <iostream>
#include <cstring>
using namespace std;

// PARTE 1 AULA 1 STRCPY ou MEMCPY
//
//struct {
//	char nome[40];
//} pessoa1, pessoa2;
//
//int main() {
//	
//	char meunome[] = "Fellipe";
//	
//	memcpy(pessoa1.nome, meunome, strlen(meunome) + 1);
//	memcpy(pessoa2.nome, pessoa1.nome, sizeof(pessoa1.nome) + 1);
//		
//	cout << pessoa2.nome << endl;
//	
//	return 0;
//}

// PARTE 2 AULA 1 STRCAT e STRNCAT
//
//int main() {
//	
//	char txt1[80] = "Curso de programacao";
//	char txt2[80] = " - CFB Cursos";
//	
//	strncat(txt1, txt2, 6);
//	
//	cout << txt1 << endl;
//	
//	return 0;
//}

// PARTE 3 AULA 1 STRCMP e STRNCMP ou MEMCMP
//
int main() {
	
	int res;
	
	char txt1[80] = "Curso de programacao - C++";
	char txt2[80] = "Curso de programacao - C++";
	
	res = memcmp(txt1, txt2, sizeof(txt1));
	
	if (res == 0) {
		cout << "iguais\n";
	} else {
		cout << "diferentes\n";
	}
	
	/*
	0 = iguais
	>0 = 1 > 2
	<0 = 1 < 2
	*/
	
	return 0;
}

// PARTE 1 AULA 2  MEMCHR
//
//int main() {
//	
//	char *txt1;
//	char txt2[] = "CFB Cursos";
//	char pesquisa = 'a';
//	
//	txt1 = (char*)memchr(txt2, pesquisa, strlen(txt2));
//	
//	if (txt1 != NULL) {
//		cout << "Letra: " << pesquisa << " encontrada na posicao " << txt1 - txt2 + 1 << endl;
//	} else {
//		cout << "Letra: " << pesquisa << " nao encontrada na posicao " << endl;
//	}
//	
//	return 0;
//}

// PARTE 2 AULA 2 STRCHR
//
//int main() {
//	
//	char txt[] = "CFB Cursos";
//	char *c;
//	char pesquisa = 'C';
//	
//	c = strchr(txt, pesquisa);
//	
//	cout << "Pos: " << c - txt + 1 << endl;
//	
//	return 0;
//}

// PARTE 3 AULA 2 STRCSPN

//int main() {
//	
//	
//	
//	return 0;
//}

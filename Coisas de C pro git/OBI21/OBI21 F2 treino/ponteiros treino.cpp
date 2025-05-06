#include <iostream>
using namespace std;

//	AULA 1

//int main() {
	
//	int n = 4;
//	int *num;
//	
//	num = &n;
//	cout << num << '\n';
	
//	string veiculo = "Carro";
//	string *pv;
//	
//	pv = &veiculo;
//	
//	cout << pv << '\n' << &veiculo << "\n\n"; // exibindo endereço de veiculo
//	
//	*pv = "Moto";
//	
//	 cout << veiculo << '\n' << *pv; // exibindo conteudo de veiculo
//
//	return 0;
//}

//	AULA 2
//
//int main() {
//	
//	int *p;
//	int vetor[10];
//	
//	p = &vetor[0]; // p = vetor	
//	*p = 10; // vetor[0] = 10
//	cout << '\n' << vetor[0] << '\n';
//	
//	*(p += 1);
//	*p = 20;
//	cout << '\n' << vetor[1] << '\n';
//	
//	*(p += 1);
//	*p = 30;
//	cout << '\n' << vetor[2] << '\n';
//	
//	
//	return 0;
//}

//	AULA 3

void somar(float *var, float valor);
void iniVetor(float *v);

int main() {
	
	float num = 0;
	float vetor[5];
	
	somar(&num, 15);
	iniVetor(vetor);
	
	cout << num << "\n\n";
	for (int i = 0; i < 5; i++) {
		cout << vetor[i] << '\n';
	}
	
	return 0;
}

void somar(float *var, float valor) {
	*var += valor;
}

void iniVetor(float *v) {
	v[0] = 0;
	v[1] = 0;
	v[2] = 0;
	v[3] = 0;
	v[4] = 0;
}

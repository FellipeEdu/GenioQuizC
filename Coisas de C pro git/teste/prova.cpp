// Yago Evangelista de Souza
#include <iostream>
using namespace std;

struct Aluno {
    string nome;
    int idade;
    float notas[3];
    float media = 0;
    string situacao = "nao definida";
  };

float fMedia(float notas1, float notas2, float notas3, int cod);
void fSituacao(Aluno alunos[3]);
int fMaior(Aluno turma[3]);
void fMediaGeral(float media[3], float &mediageral);

int main() {
  Aluno turma[10];
  int maisVelho;
  float medias[10], mediageral = 0;

  cout<<"Insira os dados dos alunos...\n";
  for(int i=0; i<10; i++) {
    cout<<"nome aluno "<< i+1 << ":\n";
    cin>> turma[i].nome;
    cout<<"idade aluno "<< i+1 << ":\n";
    cin>> turma[i].idade; 
    cout<<"notas aluno "<< i+1 << ":\n";
    cin>> turma[i].notas[0];
    cin>> turma[i].notas[1];
    cin>> turma[i].notas[2];
  }

  cout<<"Calculo de media dos alunos, digite 1 para media aritmetica ou 2 para media ponderada...\n";
  for(int i=0; i<10; i++) {
    int cod;
    float media;

    cout<<"aluno " << i+1 <<":\n";
    cin>> cod;
    if(cod == 1) {
      media = fMedia(turma[i].notas[0], turma[i].notas[1], turma[i].notas[2], cod);
      turma[i].media = media;
      cout<<"Media aluno " << i+1 << " atualizada: " << turma[i].media <<"\n";
      medias[i] = turma[i].media;
    } else if(cod == 2) {
      media = fMedia(turma[i].notas[0], turma[i].notas[1], turma[i].notas[2], cod);
      turma[i].media = media;
      cout<<"Media aluno " << i+1 << " atualizada: " << turma[i].media <<"\n";
      medias[i] = turma[i].media;
    } else if(cod != 1 && cod != 2) {
      while(cod != 1 && cod != 2) {
      cout<<"codigo invalido, digite de novo:\n";
      cin>> cod;
      }
      media = fMedia(turma[i].notas[0], turma[i].notas[1], turma[i].notas[2], cod);
      turma[i].media = media;
      cout <<"Media aluno " << i+1 << " atualizada: " << turma[i].media <<"\n";
      medias[i] = turma[i].media;
    }
  }

  for(int i=0; i<10; i++) {
    fSituacao(turma);
    cout << "Situacao aluno " << i+1<< " : " << turma[i].situacao<< "\n\n";
  }

  maisVelho = fMaior(turma);
  cout<< "O aluno mais velho tem " << maisVelho << " anos\n\n";

  fMediaGeral(medias, mediageral);
  cout << "media geral da sala: " << mediageral <<"\n\n";
}
float fMedia(float notas1, float notas2, float notas3, int cod) {
  float media;
  switch (cod) {
    case 1: {
      media = (notas1 + notas2 + notas3) / 3;
      break;
    }
    case 2: {
      media = ((notas1 * 2) + (notas2 * 3) + (notas3 * 4)) / (2 + 3 + 4);
      break;
    }
  }
  return media;
}

void fSituacao(Aluno alunos[10]) {
  for(int i=0; i<10; i++) {
    if(alunos[i].media < 3) alunos[i].situacao = "Reprovado";
    else if(alunos[i].media >= 3 && alunos[i].media < 7) alunos[i].situacao = "Recuperacao";
    else if(alunos[i].media > 7) alunos[i].situacao = "Aprovado";
  }
}

int fMaior(Aluno turma[10]) {
  int maior = 0;
  for(int i=0; i<10; i++) {
    if (turma[i].idade > maior) {
      maior = turma[i].idade;
    }
  } 
  return maior;
}

void fMediaGeral(float media[10], float &mediageral) {
  float medias;
  for(int i=0; i<10; i++) {
    medias = medias + media[i];
  }
  mediageral = medias / 10;
}

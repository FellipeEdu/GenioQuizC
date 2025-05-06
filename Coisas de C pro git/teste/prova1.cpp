//A loja de consertos de celulares esta precisando de um sistema simples pra registrar 
//os celulares que os clientes levem pra loja e que exiba o preço do conserto que é 
//R$250,50 pra cada defeito
//Aluno: Yago Evangelista de Souza
#include <iostream>
using namespace std;

int main(){
  typedef int inteiro;
  typedef float decimal;
  typedef string nome; 
  typedef struct {
  inteiro registro;
  nome modelo;
  nome problemas[5] = {"","","","",""};
  decimal precoconserto = 0;
} celular;
  
  celular celular1,celular2, celular3;
  inteiro menu;
  do{
    cout<<"....LOJA DE CONSERTOS DE CELULARES....\n";
    cout<<"1-inserir celulares\n";
    cout<<"2-consultar precos do conserto dos celulares\n";
    cout<<"3-sair\n";
    cin>>menu;
    switch(menu){
    case 1:{
      cout<<"foram recebidos 3 celulares na loja, insira primeiro um numero de registro que deve ter ate 5 digitos:\n";
      cin>> celular1.registro;
      if(celular1.registro < 9999 || celular1.registro > 99999){
        while(celular1.registro < 9999 || celular1.registro > 99999){
        cout<<"valor invalido digite novamente\n";
        cin>> celular1.registro;
        }
      }
      cin>> celular2.registro;
      if(celular2.registro < 9999 || celular2.registro > 99999){
        while(celular2.registro < 9999 || celular2.registro > 99999){
        cout<<"valor invalido digite novamente\n";
        cin>> celular2.registro;
        }
      }
      cin>> celular3.registro;
      if(celular3.registro < 9999 || celular3.registro > 99999){
        while(celular3.registro < 9999 || celular3.registro > 99999){
        cout<<"valor invalido digite novamente\n";
        cin>> celular3.registro;
        }
      }
      cout<<"...registros dos celulares inseridos...\n";
      cout<<"Celular 1:"<<celular1.registro<<"\n";
      cout<<"Celular 2:"<<celular2.registro<<"\n"; 
      cout<<"Celular 3:"<<celular3.registro<<"\n";

      cout<<"insira o modelo dos celulares:\n";
      cin>> celular1.modelo;
      cin>> celular2.modelo;       
      cin>> celular3.modelo;
      cout<<"...modelos dos celulares inseridos...\n";
      cout<<"Celular 1:"<<celular1.modelo<<"\n";
      cout<<"Celular 2:"<<celular2.modelo<<"\n"; 
      cout<<"Celular 3:"<<celular3.modelo<<"\n";

      cout<<"insira os problemas que o cliente falou(ate 5), se for menos digite 0 ate aparecer o outro celular:\n";

      cout<<"Celular 1:\n";
      for(int i=0;i<5;i++){
        cin>>celular1.problemas[i];
      }
      cout<<"Celular 2:\n";
      for(int i=0;i<5;i++){
        cin>>celular2.problemas[i];
      }
      cout<<"Celular 3:\n";
      for(int i=0;i<5;i++){
        cin>>celular3.problemas[i];
      }
      cout<<"...problemas dos celulares inseridos...\n";

      cout<<"Celular 1:\n";
      for(int i=0;i<5;i++){
        cout<<celular1.problemas[i]<<"\n";
      }
      cout<<"Celular 2:\n";
      for(int i=0;i<5;i++){
        cout<<celular2.problemas[i]<<"\n";
      }
      cout<<"Celular 3:\n";
      for(int i=0;i<5;i++){
        cout<<celular3.problemas[i]<<"\n";
      }

      for(int i=0;i<5;i++){
        if(celular1.problemas[i]!="0"){
          celular1.precoconserto += 250.50; //preço do conserto
        }
      }
      for(int i=0;i<5;i++){
        if(celular2.problemas[i]!="0"){
          celular2.precoconserto += 250.50; //preço do conserto
        }
      }
      for(int i=0;i<5;i++){
        if(celular3.problemas[i]!="0"){
          celular3.precoconserto += 250.50; //preço do conserto
        }
      }
      break;
    }
    case 2:{
      cout<<"Preco celular 1: R$"<<celular1.precoconserto<<"\n";      
      cout<<"Preco celular 2: R$"<<celular2.precoconserto<<"\n";     
      cout<<"Preco celular 3: R$"<<celular3.precoconserto<<"\n";
      break;
    }
    case 3:{
      break;
    }
    default:{
      cout<<"opcao invalida\n\n";
      break;
    }
    }

  }while(menu!=3); 
}

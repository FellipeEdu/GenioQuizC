/*Um sistema foi desenvolvido pra Padaria Dio Brando mas o
 desenvolvedor esqueceu de implementar uma das funções basicas,
 que era o sistema pagamento, incluindo uma promoção tradicional
 da padaria. Cada pão custa R$0.40, de qualquer tipo, que são 4, e a
promoção dá 20% de desconto na compra de no minimo 15 pães do tipo 2
e 20 pães do tipo 3.
Algoritmo feito pelo aluno Ryan Kauê de Carvalho Rodrigues*/
#include <iostream>
using namespace std;

int main(){
  typedef int quant;
  typedef string palavra;
  typedef double preco;
   
  typedef struct{
  palavra nomecliente;
  quant tipopao[4];
  quant quantpao = 0;
  preco precocompra = 0;
  quant promo = 0;
  }Cliente;

  Cliente c1, c2, c3, c4;
  c1.nomecliente = "Joao";
  c2.nomecliente = "Ryan";
  c3.nomecliente = "Jose";
  c4.nomecliente = "Giovanna";


  quant cont;
  do{
    cout << "### SISTEMA PADARIA DIO BRANDO ###" << "\n";
    cout << "1 - Realizar pagamento de cliente" << "\n";
    cout << "2 - Finalizar pagamento" << "\n";
    cin >> cont;

    switch (cont){
      case 1:{
        cout << "Digite quantos paes de cada tipo cada cliente comprou (o limite eh 30 paes):" << "\n";
        for (int i = 0;i < 4;i++){
          cout << "Tipo " << i + 1 << ":\n";
          cin >> c1.tipopao[i];
          if (c1.tipopao[i] > 30) {
            while (c1.tipopao[i] > 30) {
              cout << "Quer falir a padaria mesmo?" << "\n";
              cin >> c1.tipopao[i];
            }
          }
          c1.quantpao += c1.tipopao[i];
          cin >> c2.tipopao[i];
          if (c2.tipopao[i] > 30) {
            while (c2.tipopao[i] > 30) {
              cout << "Quer falir a padaria mesmo?" << "\n";
              cin >> c2.tipopao[i];
            }
          }
          c2.quantpao += c2.tipopao[i];
          cin >> c3.tipopao[i];
          if (c3.tipopao[i] > 30) {
            while (c3.tipopao[i] > 30) {
              cout << "Quer falir a padaria mesmo?" << "\n";
              cin >> c3.tipopao[i];
            }
          }
          c3.quantpao += c3.tipopao[i];
          cin >> c4.tipopao[i];
          if (c4.tipopao[i] > 30) {
            while (c4.tipopao[i] > 30) {
              cout << "Quer falir a padaria mesmo?" << "\n";
              cin >> c4.tipopao[i];
            }
          }
          c4.quantpao += c4.tipopao[i];
          cout << "\n";
        }

        c1.precocompra = c1.quantpao * 0.4;
        c2.precocompra = c2.quantpao * 0.4;
        c3.precocompra = c3.quantpao * 0.4;
        c4.precocompra = c4.quantpao * 0.4;

        cout << "Clientes que cumpriram os requisitos da promocao:" << "\n";
        if (c1.tipopao[1] >= 15 || c1.tipopao[2] >= 20) {
          c1.precocompra = (c1.quantpao * 0.4) * 0.2;
          c1.promo++; 
        }
        if (c2.tipopao[1] >= 15 || c2.tipopao[2] >= 20) {
          c2.precocompra = (c2.quantpao * 0.4) * 0.2;
          c2.promo++; 
        }
        if (c3.tipopao[1] >= 15 || c3.tipopao[2] >= 20) {
          c3.precocompra = (c3.quantpao * 0.4) * 0.2; 
          c3.promo++;
        }
        if (c4.tipopao[1] >= 15 || c4.tipopao[2] >= 20) {
          c4.precocompra = (c4.quantpao * 0.4) * 0.2;
          c4.promo++; 
        }

        if (c1.promo == 1) {cout << c1.nomecliente << " cumpriu a promocao" << "\n\n";}
        if (c2.promo == 1) {cout << c2.nomecliente << " cumpriu a promocao" << "\n\n";}
        if (c3.promo == 1) {cout << c3.nomecliente << " cumpriu a promocao" << "\n\n";}
        if (c4.promo == 1) {cout << c3.nomecliente << " cumpriu a promocao" << "\n\n";}

        cout << "Total a pagar por cliente: " << "\n\n";

        cout << c1.nomecliente << " comprou:\n";
        for (int i = 0;i < 4;i++){
          cout << c1.tipopao[i] << " paes do tipo " << i + 1 << "\n";   
        }
        cout << "Total de paes: " << c1.quantpao << "  ";
        cout << "Total a pagar: " << c1.precocompra << "\n";

        cout << c2.nomecliente << " comprou:\n";
        for (int i = 0;i < 4;i++){
          cout << c2.tipopao[i] << " paes do tipo " << i + 1 << "\n";   
        }
        cout << "Total de paes: " << c2.quantpao << "  ";
        cout << "Total a pagar: " << c2.precocompra << "\n";

        cout << c3.nomecliente << " comprou:\n";
        for (int i = 0;i < 4;i++){
          cout << c3.tipopao[i] << " paes do tipo " << i + 1 << "\n";   
        }
        cout << "Total de paes: " << c3.quantpao << "  ";
        cout << "Total a pagar: " << c3.precocompra << "\n";

        cout << c4.nomecliente << " comprou:\n";
        for (int i = 0;i < 4;i++){
          cout << c4.tipopao[i] << " paes do tipo " << i + 1 << "\n";   
        }
        cout << "Total de paes: " << c4.quantpao << "  ";
        cout << "Total a pagar: " << c4.precocompra << "\n";
      break;
      }
      case 2:{
      break;
      }
      default:{
        cout<<"nao existe essa opcao\n";
      break;
      }
    }
  }while (cont!=2);
}

#include <playAPC/playapc.h>
#include <math.h>

int main () {
  Ponto p1, p2, p3;
  int orbitalua, terra, lua, sol;
  double ang;

  AbreJanela (400,400, "Sistema Solar");
  PintarFundo (255, 255, 255);

  p1.x =  0;    p1.y = 0;
  CriaCircunferencia(50, p1); //Órbita da Terra
  Pintar (255,0,0);  Grafite(3);

  orbitalua = CriaGrupo();
  CriaCircunferencia(10, p1); //Órbita da Lua
  Pintar (0,255,255);  Grafite(2);

  terra = CriaGrupo();
  CriaCirculo(5, p1); Pintar (0,0,255); //Terra

  lua = CriaGrupo();
  CriaCirculo(2, p1); Pintar (100, 100, 100);//Lua

  sol = CriaGrupo();
  CriaCirculo(10, p1); Pintar (255,255,0); //Sol

  for (ang = 0;  ; ang +=.01) {
    p2.x = 50*cos(ang);
    p2.y = 50*sin(ang);
    Move(p2,terra);//translada Terra para sua órbita

    p3.x = 10*cos(ang*15)+p2.x;
    p3.y = 10*sin(ang*15)+p2.y;
    Move(p3,lua);//translada Lua para sua órbita
    Move(p2,orbitalua);//em torno da Terra

    Desenha1Frame();
  }
  Desenha ();//(desnecessário) mantém janela aberta
  return 0;
}

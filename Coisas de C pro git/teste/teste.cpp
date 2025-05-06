#include <playAPC/playapc.h>

int main(){

    Ponto p;

    AbreJanela(600, 600, "Elipse");
    MostraPlanoCartesiano(5);
    PintarFundo(255, 240, 255);

    p.x = -30;
    p.y = 33;

    CriaElipse(50, 30, p);
    Pintar(255, 174, 201);

    Desenha();

    return 0;
}

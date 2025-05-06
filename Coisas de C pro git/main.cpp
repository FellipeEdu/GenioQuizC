#include <playAPC/playapc.h>
#include <stdio.h>

void meuSleep(){
    int i;
    for(i = 0; i < 50; i++)
        printf("Eu nao sei o que estou fazendo\n");
}

int main(){
    int cor, fechada;

    AbreJanela(400, 400, "Janela que muda de cor");

    for(cor = 0; cor <= 255; cor++){
        PintarFundo(0, 0, cor);
        fechada = Desenha1Frame();
        meuSleep();

        if(fechada == 0){
            return 0;
        }
    }
    for(cor = 0; cor <= 255; cor++){
        PintarFundo(0, cor, 255);
        fechada = Desenha1Frame();
        meuSleep();

        if(fechada == 0){
            return 0;
        }

    }
    for(cor = 0; cor <= 255; cor++){
        PintarFundo(cor, 255, 255);
        fechada = Desenha1Frame();
        meuSleep();

        if(fechada == 0){
            return 0;
        }

    }

    Desenha();

    return 0;
}

#include <stdio.h>

void recursividadeTorre(int torre){
   
    if(torre > 0) {
        printf("Direita \n");

        recursividadeTorre(torre - 1);
    }
}

void recursividadeBispo(int bispo){

   if(bispo > 5){
        return;
    }

    for(int i = 0; i < 1; i++){ 
        if(bispo <= 3){
            printf("Cima\n");
        }
        else{
            printf("Direita\n");
        }
    }

    recursividadeBispo(bispo + 1);
}

void recursividadeRainha(int rainha){

    if(rainha > 0 && rainha <= 8){
        printf("Esquerda\n");

        recursividadeRainha(rainha + 1);
    }
}

void movimentacaoCavalo(){

    int cavalo, c;

    for(cavalo = 1; cavalo == 1 && cavalo > 0; cavalo--){
        for (c = 0; c < 2; c++) {
                printf("Cima\n");
            }
                printf("Direita");
}
}
int main(){
    int moveT = 5, moveB = 1, moveR = 1, moveC = 1;

    printf("Movimentacao Torre\n");
    recursividadeTorre(moveT);

    printf(" \n");

    printf("Movimentacao Bispo\n");
    recursividadeBispo(moveB);

    printf(" \n");

    printf("Movimentacao Rainha\n");
    recursividadeRainha(moveR);

    printf(" \n");

    printf("Movimentacao Cavalo\n");
    movimentacaoCavalo();

    

    return 0;
}

#include <stdio.h>

// Usando procedimento para modularizar o codigo
// Uso de recursividade, funcao chamando funcao

void recursividadeTorre(int torre){

// Se torre for maior que zero printar, recursividade no lugar de loop
// torre - 1 porque e recomendado o decremento em recursividade
   
    if(torre > 0) {
        printf("Direita \n");

        recursividadeTorre(torre - 1);
    }
}

void recursividadeBispo(int bispo){

// Caso o bispo seja maior que 5 o return encerra a funcao inteira

   if(bispo > 5){
        return;
    }

//  loop for com condicionais if else, usando tambem a recursividade
   
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

// Se rainha for maior que zero e menor que 8 ele executa o printf
// Recursividade no final

    if(rainha > 0 && rainha <= 8){
        printf("Esquerda\n");

        recursividadeRainha(rainha + 1);
    }
}

void movimentacaoCavalo(){

// Uso de multiplas condicoes dentro de um loop aninhado
// Direita so e impresso 1 vez enquanto cima duas vezes

    int cavalo, c;

    for(cavalo = 1; cavalo == 1 && cavalo > 0; cavalo--){
        for (c = 0; c < 2; c++) {
                printf("Cima\n");
            }
                printf("Direita");
}
}
int main(){

// Aqui na main chamei as funcoes moduladas
// Criei as variaveis para definir o ponto de partida das funcoes 
   
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

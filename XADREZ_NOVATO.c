#include <stdio.h>

    int main (){

    // Declarando variaveis usadas

        int torre, bispo = 1, rainha = 1;

        printf("Torre\n"); // Usando fora do FOR para nao ser repetido

    // Usei Torre = 1 para n repetir 6x, poderia usar <= 4 tbm se fosse Torre = 0

        for (torre = 1; torre <= 5; torre++) {
            if (torre <= 5) {
                printf("Direita\n");

            }
        }
        printf(" \n"); // Fora da estrutura de repeticao pq n quero que seja repetido
        printf("Bispo\n");

    // While para bispo

        while (bispo <=5) {
            printf("Cima, Direita\n");
            bispo++;
        }

        printf(" \n");
    
    // Do While para rainha
    // Usei o If para que o nome Rainha nao fosse repetido
    // Poderia colocar fora da estrutura de repeticao mas quis exercitar as estruturas

        do {
            if (rainha == 1 && rainha < 2) {
            printf("Rainha\n");
        }
            printf("Esquerda\n");
            rainha++;
        }
        while (rainha <= 8);

    return 0;
    }

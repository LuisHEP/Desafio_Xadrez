#include <stdio.h>

int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Movimento da torre 5 casas usando for
    printf("Movimento da Torre 5 casas para a direita:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // Movimento do bispo 5 casas (cima direita) usando while
    printf("\nMovimento do Bispo 5 casas na diagonal cima direita:\n");
    int contadorBispo = 0;
    while (contadorBispo < casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // Movimento da rainha 8 casas para esquerda usando do while
    printf("\nMovimento da Rainha 8 casas para a esquerda:\n");
    int contadorRainha = 0;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);

    return 0;
}

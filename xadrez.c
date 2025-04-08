#include <stdio.h>

int main() {
    // Simulação do movimento da Torre para a direita (usando for)
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n"); // Movimento horizontal
    }

    // Simulação do movimento do Bispo na diagonal (usando while)
    int casasBispo = 5;
    int j = 0;
    printf("\nMovimento do Bispo:\n");
    while (j < casasBispo) {
        printf("Cima Direita \n"); // Movimento diagonal
        j++;
    }

    // Simulação do movimento da Rainha para a esquerda (usando do-while)
    int casasRainha = 8;
    int k = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n"); // Movimento horizontal
        k++;
    } while (k < casasRainha);

    return 0;
}

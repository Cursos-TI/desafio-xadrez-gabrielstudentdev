#include <stdio.h>

// Função recursiva para movimento da Torre (para a direita)
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1); // chamada recursiva
}

// Função recursiva para o Bispo (diagonal: cima direita)
void moverBispoRecursivo(int casas) {
    if (casas <= 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}

// Função recursiva para movimento da Rainha (para a esquerda)
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função com loops aninhados para o movimento do Bispo
void moverBispoComLoops(int casas) {
    printf("Movimento do Bispo (com loops aninhados):\n");
    for (int v = 0; v < casas; v++) { // vertical
        for (int h = 0; h < 1; h++) { // horizontal (1 casa por linha diagonal)
            printf("Cima Direita\n");
        }
    }
}

// Função com loops complexos para o movimento do Cavalo
void moverCavalo() {
    printf("Movimento do Cavalo:\n");
    for (int v = 2; v >= 1; v--) {        // duas casas para cima
        for (int h = 1; h <= 1; h++) {    // uma casa para a direita
            if (v == 1 && h == 1) {
                printf("Cima\n");
                printf("Cima\n");
                printf("Direita\n");
                break; // movimento completo
            }
        }
    }
}

int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\nMovimento do Bispo (recursivo):\n");
    moverBispoRecursivo(casasBispo);

    moverBispoComLoops(casasBispo);

    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    printf("\n");
    moverCavalo();

    return 0;
}

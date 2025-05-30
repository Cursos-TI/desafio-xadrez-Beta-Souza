#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // **Nível Novato - Movimentação das Peças**
    // *Implementação de Movimentação do Bispo*
    // Utiliza estrutura WHILE
    int movimentosBispo = 5;
    int i = 0;
    printf("Movimento do Bispo (5 casas na diagonal para cima e à direita):\n");
    while (i < movimentosBispo) {
        printf("Cima e Direita\n");
        i++;
    }

    printf("\n");
    
    // *Implementação de Movimentação da Torre*
    // Utiliza estrutura FOR
    int movimentosTorre = 5;
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 0; i < movimentosTorre; i++) {
        printf("Direita\n");
    }
    
    printf("\n");

    // *Implementação de Movimentação da Rainha*
    // Utiliza estrutura DO-WHILE
    int movimentosRainha = 8;
    int j = 0;
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    do {
        printf("Esquerda\n");
        j++;
    } while (j < movimentosRainha);

    printf("\n");

    // **Nível Aventureiro - Movimentação do Cavalo**
    // Definindo as quantidades de casas como variáveis
    int casasBaixo = 2;
    int casasEsquerda = 1;

    printf("Movimento do Cavalo (em L: 2 vezes para Baixo, 1 vez para Esquerda):\n");

    // FOR externo controla o movimento para baixo
    for (int i = 0; i < casasBaixo; i++) {
        printf("Baixo\n");

        // WHILE aninhado executa apenas ao final do movimento para baixo
        if (i == casasBaixo - 1) {
            int j = 0;
            while (j < casasEsquerda) {
                printf("Esquerda\n");
                j++;
            }
        }
    }
    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}

#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Função recursiva para movimentar a Torre
    void moverTorre(int casas) {
        
        if (casas > 0) {
            printf("Direita\n");
            moverTorre(casas - 1);
        } 
        
    }

// Função recursiva para movimentar a Bispo
    void moverBispo(int casas) {
        
        if (casas > 0) {
            printf("Cima e Direita\n");
            moverBispo(casas - 1);
        } 
        
    }

// Função recursiva para movimentar da Rainha
    void moverRainha(int casas) {
        
        if (casas > 0) {
            printf("Esquerda\n");
            moverRainha(casas - 1);
        } 
        
    }

    

int main() {
    printf("**Nível Novato - Movimentação das Peças**\n");
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

    printf("**Nível Aventureiro - Movimentação do Cavalo**\n");
    // Definindo as quantidades de casas como variáveis
    int casasBaixo = 2;
    int casasEsquerda = 1;

    printf("Movimento do Cavalo (em L: 2 vezes para Baixo, 1 vez para Esquerda):\n");
    
    // WHILE controla o movimento para esquerda
    while (casasEsquerda--)
    {   
        for (int i = 0; i < casasBaixo; i++) // FOR controla o movimento para baixo
        {
            printf("Baixo\n");
        }
        
        printf("Esquerda\n");
    }
  
    printf("\n");

    printf("**Nível Mestre - Funções Recursivas e Loops Aninhados**\n");
    printf("Movimento da Torre (5 casas para a direita):\n");    
    moverTorre(5);
    
    printf("\n");  

    printf("Movimento do Bispo (5 casas na diagonal para cima e à direita):\n");  
    moverBispo(5);

    printf("\n");  

    printf("Movimento da Rainha (8 casas para a esquerda):\n");  
    moverRainha(8);
    
    printf("\n");  

    printf("Movimento da Rainha (8 casas para a esquerda):\n");  
    moverRainha(8);
    
    return 0;
}

/*
 * Desafio: Movimentando as Peças do Xadrez
 * Nível: Novato
 * 
 * Este programa simula o movimento de três peças de xadrez:
 * 1. Torre: usa estrutura FOR para mover 5 casas à direita
 * 2. Bispo: usa estrutura WHILE para mover 5 casas na diagonal superior direita
 * 3. Rainha: usa estrutura DO-WHILE para mover 8 casas à esquerda
 * 
 * Cada peça utiliza uma estrutura de repetição diferente conforme solicitado.
 * 
 * Autor: [Camila Carvalho Pozzolini]
 * Data: [19/12/2025]
 */

#include <stdio.h>

int main() {
    printf("========================================\n");
    printf("      SIMULADOR DE MOVIMENTOS DE XADREZ\n");
    printf("               NÍVEL NOVATO\n");
    printf("========================================\n\n");
    
    /* ====================================================
       SIMULAÇÃO DA TORRE - ESTRUTURA FOR
       ==================================================== */
    printf("1. MOVIMENTO DA TORRE\n");
    printf("   Movendo 5 casas para a direita:\n");
    printf("   -------------------------------\n");
    
    // Definição da variável para o número de movimentos da Torre
    int casas_torre = 5;
    
    // A Torre se move usando estrutura FOR
    // O FOR é ideal quando sabemos antecipadamente quantas iterações precisamos
    for(int i = 1; i <= casas_torre; i++) {
        printf("   Casa %d: Direita\n", i);
    }
    
    printf("\n");
    
    /* ====================================================
       SIMULAÇÃO DO BISPO - ESTRUTURA WHILE
       ==================================================== */
    printf("2. MOVIMENTO DO BISPO\n");
    printf("   Movendo 5 casas na diagonal (cima e direita):\n");
    printf("   ---------------------------------------------\n");
    
    // Definição da variável para o número de movimentos do Bispo
    int casas_bispo = 5;
    int contador_bispo = 1;  // Inicializamos o contador
    
    // O Bispo se move usando estrutura WHILE
    // O WHILE é útil quando não necessariamente sabemos quantas iterações serão necessárias
    // (embora neste caso saibamos, escolhemos WHILE para demonstrar seu uso)
    while(contador_bispo <= casas_bispo) {
        printf("   Casa %d: Cima, Direita\n", contador_bispo);
        contador_bispo++;  // Incrementamos o contador
    }
    
    printf("\n");
    
    /* ====================================================
       SIMULAÇÃO DA RAINHA - ESTRUTURA DO-WHILE
       ==================================================== */
    printf("3. MOVIMENTO DA RAINHA\n");
    printf("   Movendo 8 casas para a esquerda:\n");
    printf("   ---------------------------------\n");
    
    // Definição da variável para o número de movimentos da Rainha
    int casas_rainha = 8;
    int contador_rainha = 1;  // Inicializamos o contador
    
    // A Rainha se move usando estrutura DO-WHILE
    // O DO-WHILE garante que o bloco de código será executado pelo menos uma vez
    do {
        printf("   Casa %d: Esquerda\n", contador_rainha);
        contador_rainha++;  // Incrementamos o contador
    } while(contador_rainha <= casas_rainha);
    
    printf("\n");
    printf("========================================\n");
    printf("         SIMULAÇÃO CONCLUÍDA!\n");
    printf("========================================\n");
    
    return 0;
}
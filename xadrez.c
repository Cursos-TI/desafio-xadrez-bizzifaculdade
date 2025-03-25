#include <stdio.h>
 
 // Desafio de Xadrez - MateCheck
 // Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
 // O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
 // Definição de constantes para os movimentos
 #define MOV_BISPO 5
 #define MOV_TORRE 5
 #define MOV_RAINHA 8
 #define MOV_CAVALO 1  // O cavalo se move em L (2 casas numa direção, 1 em outra)
 
 int main() {
     // Nível Novato - Movimentação das Peças
     // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
 // Função recursiva para movimentação do Bispo
 void moverBispo(int casas) {
     if (casas == 0) return;
     printf("Cima Direita\n");
     moverBispo(casas - 1);
 }
 
 // Função recursiva para movimentação da Rainha
 void moverRainha(int casas) {
     if (casas == 0) return;
     printf("Esquerda\n");
     moverRainha(casas - 1);
 }
 
 // Função recursiva para movimentação da Torre
 void moverTorre(int casas) {
     if (casas == 0) return;
     printf("Direita\n");
     moverTorre(casas - 1);
 }
 
     // Implementação de Movimentação do Bispo
     // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
 // Função para movimentação do Cavalo usando loops aninhados
 void moverCavalo() {
     printf("Movimento do Cavalo:\n");
 
     // Implementação de Movimentação da Torre
     // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
     int direcoes[8][2] = {
         {2, 1}, {2, -1}, {-2, 1}, {-2, -1},  // Movimentos verticais
         {1, 2}, {1, -2}, {-1, 2}, {-1, -2}   // Movimentos horizontais
     };
 
     // Implementação de Movimentação da Rainha
     // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
     for (int i = 0; i < 8; i++) {
         // Verifica se o movimento é válido antes de imprimir
         if (direcoes[i][0] == 0 || direcoes[i][1] == 0) continue;
         printf("L para (%d, %d)\n", direcoes[i][0], direcoes[i][1]);
     }
     printf("\n");
 }
 
     // Nível Aventureiro - Movimentação do Cavalo
     // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
     // Um loop pode representar a movimentação horizontal e outro vertical.
 int main() {
     // Movimento da Torre (Recursão)
     printf("Movimento da Torre:\n");
     moverTorre(MOV_TORRE);
     printf("\n");
 
     // Nível Mestre - Funções Recursivas e Loops Aninhados
     // Sugestão: Substitua as movimentações das peças por funções recursivas.
     // Exemplo: Crie uma função recursiva para o movimento do Bispo.
     // Movimento do Bispo (Recursão)
     printf("Movimento do Bispo:\n");
     moverBispo(MOV_BISPO);
     printf("\n");
 
     // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
     // Inclua o uso de continue e break dentro dos loops.
     // Movimento da Rainha (Recursão)
     printf("Movimento da Rainha:\n");
     moverRainha(MOV_RAINHA);
     printf("\n");
 
     // Movimento do Cavalo (Loops Aninhados)
     moverCavalo();
 
     return 0;
 }
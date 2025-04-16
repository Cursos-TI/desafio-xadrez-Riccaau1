#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

    int main() {
        // Nível Novato - Movimentação das Peças
        // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

        int opcao;
        int cavalo = 1;

        // Implementação de Movimentação do Bispo
        // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
            printf("***Jogo de Xadrez***\n");
            do {
                printf("Qual das peças abaixo você irá movimentar?\n");
                printf("1. Bispo.\n");
                printf("2. Torre.\n");
                printf("3. Rainha.\n");
                printf("4. Cavalo.\n");
                printf("5. Sair!\n");
                printf("Escolha sua opção: \n");
                scanf("%d", &opcao);

                switch (opcao){
                    case 1:
                        printf("\n");
                        printf("Você escolheu o Bispo!\n");
                        printf("Movendo 5 casas para Cima Direita!\n");                       
                            for (int i = 0; i < 5; i++) {
                                printf("Cima Direita!\n");
                            }
                        printf("\n");                                                       
                        break;
                    case 2:
                        printf("\n");
                        printf("Você escolheu a Torre!\n");
                        printf("Movendo 5 casas a direita!\n");
                            int t = 1;
                            while (t <= 5) {
                                printf("Direita!\n");
                                t++;
                            }
                        printf("\n");
                        break;
                    case 3:
                        printf("\n");
                        printf("Você escolheu a Rainha!\n");
                        printf("Movendo 8 casas à esquerda!\n");
                            int r = 1;
                            do {
                                printf("Esquerda!\n");
                                r++;
                            } while (r <= 8);
                        printf("\n");   
                        break;
                    case 4:
                        printf("\n");
                        printf("Movendo o Cavalo!\n");
                        while (cavalo--)
                        {
                            for (int i = 0; i < 2; i++)
                            {
                                printf("Cima\n");
                            }
                        printf("Direita\n");                            
                        }
                        printf("\n");
                        break;
                    case 5:
                        printf("\n");
                        printf("Saindo do jogo!\n");
                        printf("\n");
                        break;
                    default:
                        printf("Opção inválida!\n");             
                        break;
                } 

                                
            } while (opcao != 5);
        return 0;
        }
        
            
    
        

        // Implementação de Movimentação da Torre
        // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

        // Implementação de Movimentação da Rainha
        // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

        // Nível Aventureiro - Movimentação do Cavalo
        // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
        // Um loop pode representar a movimentação horizontal e outro vertical.

        // Nível Mestre - Funções Recursivas e Loops Aninhados
        // Sugestão: Substitua as movimentações das peças por funções recursivas.
        // Exemplo: Crie uma função recursiva para o movimento do Bispo.

        // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
        // Inclua o uso de continue e break dentro dos loops.

        
#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

    int main() {
        // Nível Novato - Movimentação das Peças
        // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

        int casasrainha, casasbispo, casastorre;   
        int sentidorainha, sentidobispo, sentidotorre;
        int opcao;

        // Implementação de Movimentação do Bispo
        // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
            printf("***Jogo de Xadrez***\n");
            do {
                printf("Qual das peças abaixo você irá movimentar?\n");
                printf("1. Bispo.\n");
                printf("2. Torre.\n");
                printf("3. Rainha.\n");
                printf("4. Sair!\n");
                printf("Escolha sua opção: \n");
                scanf("%d", &opcao);

                switch (opcao){
                    case 1:
                        printf("Você escolheu o Bispo!\n");
                        printf("Quantas casas você quer mover o Bispo? (Máximo 5 casas)\n");
                        scanf("%d", &casasbispo);
                            
                            if (casasbispo < 1 || casasbispo > 5) {
                                printf("Número de casas inválido! O número deve ser entre 1 e 5.\n");
                                break;
                            }
                            
                            printf("Qual sentido você quer mover o Bispo?\n");
                            printf("1. Cima Direita.\n");
                            printf("2. Cima Esquerda.\n");
                            scanf("%d", &sentidobispo);
                            
                                switch (sentidobispo) {
                                    case 1:
                                        for (int i = 0; i < casasbispo; i++) {
                                            printf("Movendo Cima Direita.\n");
                                        }
                                        break;
                                    case 2:
                                        for (int i = 0; i < casasbispo; i++) {
                                            printf("Movendo Cima Esquerda.\n");
                                        }
                                        break;
                                    default:
                                        printf("Opção inválida!\n");
                                        break;
                                }
                            break;
                    case 2:
                        printf("Você escolheu a Torre!\n");
                        break;
                    case 3:
                        printf("Você escolheu a Rainha!\n");
                        break;
                    case 4:
                        printf("Saindo do jogo!\n");
                        break;
                    default:
                        printf("Opção inválida!\n");             
                        break;
                } 

                                
            } while (opcao != 4);
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

        
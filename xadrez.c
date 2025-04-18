#include <stdio.h>

    void moverTorre(int casas){
        if (casas > 0)
        {
            printf("Direita.\n");
            moverTorre(casas - 1);
        }
    }

    void moverBispo(int casas){
        for (int i = 0; i < 5; i++) {
            printf("Cima "); 
            for (int j = 0; j < 1; j++) {
                printf("Direita.\n");
            }            
        }                                 
    }

    void moverRainha(int casas){
        if (casas > 0)
        {
            printf("Esquerda.\n");
            moverRainha(casas - 1);
        }        
    }

    int main() {
        
        int opcao;
        int cavalo;
      
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
                        moverBispo(5);
                        printf("\n");                                                       
                        break;
                    case 2:
                        printf("\n");
                        printf("Você escolheu a Torre!\n");
                        moverTorre(5);
                        printf("\n");
                        break;
                    case 3:
                        printf("\n");
                        printf("Você escolheu a Rainha!\n");
                        moverRainha(8);
                        printf("\n");   
                        break;
                    case 4:
                        printf("\n");
                        printf("Movendo o Cavalo!\n");
                            do {
                                for (int i = 0; i <= 1; i++) {
                                    printf("Cima.\n");
                                }
                                printf("Direita!\n");
                            } while (cavalo == 1);                                                     
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
        
            
    
        

    

        
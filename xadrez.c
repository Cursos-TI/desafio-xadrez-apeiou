#include <stdio.h>

int main() {
    
    int menuMovimento;
    int movimentoTorre, movimentoBispo, movimentoRainha;
    int moveCasas;

    //menu de movimentacao
        printf("Escolha qual peça mover:\n");
        printf("1. Torre.\n");
        printf("2. Bispo.\n");
        printf("3. Rainha.\n");
        printf("Digite o número da peça que deseja mover: ");
        scanf("%d", &menuMovimento);
        
        switch (menuMovimento)
        {
            case 1:
                moveCasas = 0;
                printf("Digite quantas casas a torre vai se mover à direita: ");
                scanf("%d", &movimentoTorre);
                for(moveCasas; moveCasas < movimentoTorre; moveCasas++)
                {
                    printf("%d. Direita\n", moveCasas + 1);
                }
                break;

            case 2:
                moveCasas = 0;
                printf("Digite quantas casas o bispo irá se mover para a diagonal superior direita: ");
                scanf("%d", &movimentoBispo);
                while (moveCasas < movimentoBispo)
                {
                    printf("%d. Direita Cima\n", moveCasas + 1);
                    moveCasas++;
                }
                
                break;

            case 3:
                /* code */
                break;
            
            default:
                break;
        }
    
    return 0;
}

    //torre horizontal direita 5x
    //bispo diagonal direita cima 5x
    //rainha esquerda 8x

    //menu de escolha qual mover
    //switch 1 torre, 2 bispo, 3 rainha

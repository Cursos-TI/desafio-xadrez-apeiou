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
        //movimentacao torre
            case 1:
                moveCasas = 0;
                printf("Digite quantas casas a Torre vai se mover à direita: ");
                scanf("%d", &movimentoTorre);
                for(moveCasas; moveCasas < movimentoTorre; moveCasas++)
                {
                    printf("%d. Direita\n", moveCasas + 1);
                }
                break;

        //movimentacao bispo
            case 2:
                moveCasas = 0;
                printf("Digite quantas casas o Bispo irá se mover para a diagonal superior direita: ");
                scanf("%d", &movimentoBispo);
                while (moveCasas < movimentoBispo)
                {
                    printf("%d. Direita Cima\n", moveCasas + 1);
                    moveCasas++;
                }
                
                break;

        //movimentacao rainha
            case 3:
                moveCasas = 0;
                printf("Digite quantas casas a Rainha irá se mover para a esquerda: ");
                scanf("%d", &movimentoRainha);
                do
                {
                    printf("%d. Esquerda\n", moveCasas + 1);
                    moveCasas++;
                } while (moveCasas < movimentoRainha);
                
                break;

        //opcao invalida
            default:
                printf("Opção inválida\n");
                break;
        }
    
    return 0;
}
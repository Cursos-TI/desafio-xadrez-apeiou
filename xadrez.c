#include <stdio.h>

int main() {
    
    int menuMovimento;
    int movimentoTorre, movimentoBispo, movimentoRainha, movimentoCavalo;
    int i, j, k; //variaveis de controle

    //menu de movimentacao
        printf("Escolha qual peça mover:\n");
        printf("1. Torre.\n");
        printf("2. Bispo.\n");
        printf("3. Rainha.\n");
        printf("4. Cavalo.\n");
        printf("Digite o número da peça que deseja mover: ");
        scanf("%d", &menuMovimento);
        
        switch (menuMovimento)
        {
        //movimentacao torre
            case 1:
                printf("Digite quantas casas a Torre vai se mover à direita: ");
                scanf("%d", &movimentoTorre);
                for(i = 0; i < movimentoTorre; i++)
                {
                    printf("%d. Direita\n", i + 1);
                }
                break;

        //movimentacao bispo
            case 2:
                i = 0;
                printf("Digite quantas casas o Bispo irá se mover para a diagonal superior direita: ");
                scanf("%d", &movimentoBispo);
                while (i < movimentoBispo)
                {
                    printf("%d. Direita Cima\n", i + 1);
                    i++;
                }
                
                break;

        //movimentacao rainha
            case 3:
                i = 0;
                printf("Digite quantas casas a Rainha irá se mover para a esquerda: ");
                scanf("%d", &movimentoRainha);
                do
                {
                    printf("%d. Esquerda\n", i + 1);
                    i++;
                } while (i < movimentoRainha);
                
                break;

        //opcao invalida
            default:
                printf("Opção inválida\n");
                break;
        }
    
    return 0;
}
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
                printf("Digite quantas vezes a Torre vai se mover à direita: ");
                scanf("%d", &movimentoTorre);
                for(i = 0; i < movimentoTorre; i++)
                {
                    printf("%d. Direita\n", i + 1);
                }
                break;

        //movimentacao bispo
            case 2:
                i = 0;
                printf("Digite quantas vezes o Bispo irá se mover para a diagonal cima direita: ");
                scanf("%d", &movimentoBispo);
                while (i < movimentoBispo)
                {
                    printf("%d. Cima Direita\n", i + 1);
                    i++;
                }
                
                break;

        //movimentacao rainha
            case 3:
                i = 0;
                printf("Digite quantas vezes a Rainha irá se mover para a esquerda: ");
                scanf("%d", &movimentoRainha);
                do
                {
                    printf("%d. Esquerda\n", i + 1);
                    i++;
                } while (i < movimentoRainha);
                
                break;

        //movimentacao cavalo
            case 4:
                i = 0;
                printf("Digite quantas vezes o Cavalo irá se mover em L para baixo esquerda: ");
                scanf("%d", &movimentoCavalo);
                while (i < movimentoCavalo)
                {
                    printf("%d.", i + 1);
                    for (j = 0; j < 2; j++)
                    {
                        printf("Baixo\n");
                    
                    }
                    printf("Esquerda\n");
                    printf("\n");
                    i++;
                }
                
                
                
                break;

        //opcao invalida
            default:
                printf("Opção inválida\n");
                break;
        }
    
    return 0;
}
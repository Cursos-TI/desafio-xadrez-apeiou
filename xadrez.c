#include <stdio.h>

void movimentoTorre(int casas){
    if (casas > 0)
    {
        movimentoTorre(casas - 1);
        printf("%d. Direita.\n", casas);
    }
}

void movimentoBispo(int casas){
    int contador = 1; //contador de número de movimentacao da peca
    for (casas; casas > 0; casas--)
    {
        printf("%d. ", contador);
        for (int i = 0; i < 1; i++)
        {
            printf("Cima\n");
        }
        printf("Direita\n");
        contador++;
    }
}

void movimentoRainha(int casas){
    if (casas > 0)
    {
        movimentoRainha(casas - 1);
        printf("%d. Esquerda.\n", casas);
    }
}

int main() {
    
    int menuXadrez, movimentos;

    //menu de movimentacao
        printf("Escolha qual peça mover:\n");
        printf("1. Torre.\n");
        printf("2. Bispo.\n");
        printf("3. Rainha.\n");
        printf("4. Cavalo.\n");
        printf("Digite o número da peça que deseja mover: ");
        scanf("%d", &menuXadrez);
        
        switch (menuXadrez)
        {
        //movimentacao torre - recursivo
            case 1:
                printf("Digite quantas vezes a Torre vai se mover à direita: ");
                scanf("%d", &movimentos);
                movimentoTorre(movimentos);
            break;

        //movimentacao bispo - recursivo, aninhado
            case 2:
                printf("Digite quantas vezes o Bispo irá se mover para a diagonal cima direita: ");
                scanf("%d", &movimentos);
                movimentoBispo(movimentos);
            break;
        
        //movimentacao rainha - recursivo
            case 3:
                printf("Digite quantas vezes a Rainha irá se mover para a esquerda: ");
                scanf("%d", &movimentos);
                movimentoRainha(movimentos);
            break;

        /*        
        //movimentacao cavalo - estrutura de repeticao avancada
            case 4:
                i = 0;
                printf("Digite quantas vezes o Cavalo irá se mover em L para baixo esquerda: ");
                scanf("%d", &moves);
                while (i < moves)
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
        */

        //opcao invalida
            default:
                printf("Opção inválida\n");
            break;
        }
    
    return 0;
}
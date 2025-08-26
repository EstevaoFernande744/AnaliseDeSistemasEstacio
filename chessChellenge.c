#include <stdio.h>

// função para descrever o movimento do Cavalo

void moveKnight(int direction) {
    switch (direction) {
        case 1: printf("Para Esquerda\nPara Esquerda\nPara Baixo\n"); break;
        case 2: printf("Para Esquerda\nPara Esquerda\nPara Cima\n"); break;
        case 3: printf("Para Cima\nPara Cima\nPara Esquerda\n"); break;
        case 4: printf("Para Cima\nPara Cima\nPara Direita\n"); break;
        case 5: printf("Para Direita\nPara Direita\nPara Cima\n"); break;
        case 6: printf("Para Direita\nPara Direita\nPara Baixo\n"); break;
        case 7: printf("Para Baixo\nPara Baixo\nPara Direita\n"); break;
        case 8: printf("Para Baixo\nPara Baixo\nPara Esquerda\n"); break;
        default: printf("Opção Inválida, lembre-se de 1 a 8\n"); break;
    }
}

// função para descrever o movimento da Torre 

void moveRook(int direction, int squares){
    switch (direction){
        case 1: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Esquerda;\n", i);} break;
        case 2: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Cima;\n", i);} break;
        case 3: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Direita;\n", i);} break;
        case 4: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Baixo;\n", i);} break;
        default: printf("Opção selecionada Invalida!\n"); break;
    }
}

// função para descrever o movimento do Bispo

void moveBishop(int direction, int squares){
    switch (direction){
        case 1: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Diagonal Esquerda Superior;\n", i);} break;
        case 2: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Diagonal Direita Superior;\n", i);} break;
        case 3: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Diagonal Esquerda Inferior;\n", i);} break;
        case 4: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Diagonal Direita Superior;\n", i);} break;
        default: printf("Opção selecionada Invalida!\n"); break;
    }
}

// função para descrever o movimento da Rainha

void moveQueen(int direction, int squares){
    switch (direction){
        case 1: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Esquerda;\n", i);} break;
        case 2: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Diagonal Esquerda Superior;\n", i);} break;
        case 3: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Cima;\n", i);} break;
        case 4: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Diagonal Direita Superior;\n", i);} break;
        case 5: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Direita;\n", i);} break;
        case 6: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Diagonal Esquerda Inferior;\n", i);} break;
        case 7: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Baixo;\n", i);} break;
        case 8: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Diagonal Direita Superior;\n", i);} break;
        default: printf("Opção selecionada Invalida!\n"); break;}
}

// função geral do programa 

int main(void){
    int option, squares, direction;
    
    do{
            printf("\n");
            printf("╔════════════════════════════════════╗\n");
            printf("║    Menu to the Pieces Move: 🎮     ║\n");
            printf("╠════════════════════════════════════╣\n");
            printf("║  1 ▸ Move the Horse;               ║\n");
            printf("║  2 ▸ Move the Bishop;              ║\n");
            printf("║  3 ▸ Move the Tower;               ║\n");
            printf("║  4 ▸ Move the Queen;               ║\n");
            printf("║  5 ▸ Leave game.                   ║\n");
            printf("╚════════════════════════════════════╝\n");
            printf("\nDigite a opção desejada: ");
            scanf("%d", &option);

            switch (option){
                case 1: 
                        printf("\n");
                        printf("╔═══════════════════════════════════════════════╗\n");
                        printf("║  Informe o movimento quer fazer com o cavalo  ║\n");
                        printf("╠═══════════════════════════════════════════════╣\n");
                        printf("║  1 ▸ L - Esquerda-Baixo;                      ║\n");
                        printf("║  2 ▸ L - Esquerda-Cima;                       ║\n");
                        printf("║  3 ▸ L - Cima-Esquerda;                       ║\n");
                        printf("║  4 ▸ L - Cima-Direita;                        ║\n");
                        printf("║  5 ▸ L - Direita-Cima;                        ║\n");
                        printf("║  6 ▸ L - Direita-Baixo;                       ║\n");
                        printf("║  7 ▸ L - Baixo-Direita;                       ║\n");
                        printf("║  8 ▸ L - Baixo-Esquerda;                      ║\n");
                        printf("╚═══════════════════════════════════════════════╝\n");
                        printf("Informe o movimento desejado");
                        scanf("%d", &direction);
                        printf("");
                        moveKnight(direction); 
                        break;
                case 2: 
                        printf("\n");
                        printf("╔═════════════════════════════════════════╗\n");
                        printf("║  direção desejada para mover o Bispo:   ║\n");
                        printf("╠═════════════════════════════════════════╣\n");
                        printf("║  1 ▸ Para Diagonal Esquerda Superior;   ║\n");
                        printf("║  2 ▸ Para Diagonal Direita Superior;    ║\n");
                        printf("║  3 ▸ Para Diagonal Esquerda Inferior;   ║\n");
                        printf("║  4 ▸ Para Diagonal Direita Inferior;    ║\n");
                        printf("╚═════════════════════════════════════════╝\n");
                        printf("Informe a direção desejada: ");
                        scanf("%d", &direction);
                        printf("Select the number of squares: ");
                        scanf("%d", &squares);
                        printf("");
                        moveBishop(direction, squares); 
                        break;
                case 3: 
                        printf("\n");
                        printf("╔══════════════════════════════════════╗\n");
                        printf("║ direção desejada para mover a Torre: ║\n");
                        printf("╠══════════════════════════════════════╣\n");
                        printf("║  1 ▸ Para a Esquerda;                ║\n");
                        printf("║  2 ▸ Para Cima;                      ║\n");
                        printf("║  3 ▸ Para a Direita;                 ║\n");
                        printf("║  4 ▸ Para Baixo;                     ║\n");
                        printf("╚══════════════════════════════════════╝\n");
                        printf("Informe a direção desejada: ");
                        scanf("%d", &direction);
                        printf("Select the number of squares: ");
                        scanf("%d", &squares);
                        printf("");
                        moveRook(direction, squares); 
                        break;
                case 4: 
                        printf("\n");
                        printf("╔══════════════════════════════════════╗\n");
                        printf("║ Direção desejada para mover a Rainha ║\n");
                        printf("╠══════════════════════════════════════╣\n");
                        printf("║  1 ▸ Esquerda                        ║\n");
                        printf("║  2 ▸ Diagonal Esquerda Superior      ║\n");
                        printf("║  3 ▸ Cima                            ║\n");
                        printf("║  4 ▸ Diagonal Direita Superior       ║\n");
                        printf("║  5 ▸ Direita                         ║\n");
                        printf("║  6 ▸ Diagonal Esquerda Inferior      ║\n");
                        printf("║  7 ▸ Baixo                           ║\n");
                        printf("║  8 ▸ Diagonal Direita Inferior       ║\n");
                        printf("╚══════════════════════════════════════╝\n");
                        printf("Informe a direção desejada: ");
                        scanf("%d", &direction);
                        printf("Número de casas: ");
                        scanf("%d", &squares);
                        printf("");
                        moveQueen(direction, squares);
                        break;
                case 5:
                        printf("Saindo do jogo...\n"); break;
                default: printf("Peça selecionada invalida!"); break;
            }

    } while(option != 5);

    return 0;
}
#include <stdio.h>

void selecionarPecas(int option, int squares, int direction, char edge[5], int edgeDirection){ 
    switch (option){
        case 1: moveHorse(option); break;
        case 2: moveBishop(squares, direction, edge[5], edgeDirection); break;
        case 3: moveTower(squares, direction, edge[5], edgeDirection); break;
        case 4: moveQueen(squares, direction); break;
        default: printf("Peça selecionada invalida!"); break;
    }
}

void indentificarBordas(int edgeDirection){

}

void moveHorse(int config){
    switch (config){
        case 1:
            printf("Para Esquerda\n");
            printf("Para Esquerda\n");
            printf("Para Baixo\n");
            break;
        case 2:
            printf("Para Esquerda\n");
            printf("Para Esquerda\n");
            printf("Para Cima\n");
            break;
        case 3:
            printf("Para Cima\n");
            printf("Para Cima\n");
            printf("Para Esquerda\n");
            break;
        case 4:
            printf("Para Cima\n");
            printf("Para Cima\n");
            printf("Para Direita\n");
            break;
        case 5:
            printf("Para Direita\n");
            printf("Para Direita\n");
            printf("Para Cima\n");
            break;
        case 6:
            printf("Para Direita\n");
            printf("Para Direita\n");
            printf("Para Baixo\n");
            break;
        case 7:
            printf("Para Baixo\n");
            printf("Para Baixo\n");
            printf("Para Direita\n");
            break;
        case 8:
            printf("Para Baixo\n");
            printf("Para Baixo\n");
            printf("Para Esquerda\n");
            break;
        default:
            printf("Opção Invalida, lembre-se de 1 a 8");
            break;
    }
}

void moveBishop(int squares, int direction, char edge[5], int edgeDirection){

    if(strcmp(edge, "nao") == 0 || strcmp(edge, "n") == 0 || strcmp(edge, "no") == 0){
        switch (direction){
            case 1: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Diagonal Esquerda Superior;\n", i);} break;
            case 2: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Diagonal Direita Superior;\n", i);} break;
            case 3: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Diagonal Esquerda Inferior;\n", i);} break;
            case 4: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Diagonal Direita Superior;\n", i);} break;
            default: printf("Opção selecionada Invalida!\n"); break;}
    } else if (strcmp(edge, "sim") == 0 || strcmp(edge, "s") == 0 || strcmp(edge, "yes") == 0){
            indentificarBordas(edgeDirection);
    } 
    
}

void moveTower(int squares, int direction, char edge[5],  int edgeDirection){
        if(strcmp(edge, "nao") == 0 || strcmp(edge, "n")== 0 || strcmp(edge, "no") == 0){
            switch (direction){
                case 1: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Esquerda;\n", i);} break;
                case 2: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Cima;\n", i);} break;
                case 3: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Direita;\n", i);} break;
                case 4: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Baixo;\n", i);} break;
                default: printf("Opção selecionada Invalida!\n"); break;}
        } else if (strcmp(edge, "sim") == 0 || strcmp(edge, "s") == 0 || strcmp(edge, "yes") == 0){
            indentificarBordas(edgeDirection);
        }
        
}

void moveQueen(int squares, int direction){

}

int main(int option, int squares, int direction, char edge[5], int edgeDirection){

    do{
    int option;

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

        selecionarPecas(option, squares, direction, edge[5], edgeDirection);
        
    


    } while(option != 5);

    return 0;
}
#include <stdio.h>
#include <string.h>

const int N = 8; // tamanho do tabuleiro

// ---- Protótipos (assinaturas corretas) ----
void selecionarPecas(int option, int squares, int direction, char edge[5], int edgeDirection);
void indentificarBordas(int edgeDirection, int matrixBorda[N][N]);
void moveHorse(int config);
void moveBishop(int squares, int direction, char edge, int edgeDirection);
void moveTower(int squares, int direction, char edge, int edgeDirection);
void moveQueen(int squares, int direction);

void selecionarPecas(int option, int squares, int direction, char edge[5], int edgeDirection){ 
    int edge[5];
    int matrixBorda[8][8];
    switch (option){
        case 1: moveHorse(direction); break;
        case 2: moveBishop(squares, direction, edge, edgeDirection); break;
        case 3: moveTower(squares, direction, edge, edgeDirection); break;
        case 4: moveQueen(squares, direction); break;
        default: printf("Peça selecionada invalida!"); break;
    }
}

void indentificarBordas(int edgeDirection, int matrixBorda[N][N]){

    for (int i=0;i<N;i++)
        for (int j=0;j<N;j++)
            matrixBorda[i][j] = 0;

    // 1=esq, 2=cima, 3=dir, 4=baixo
    if (edgeDirection == 1) {
        for (int i=0;i<N;i++) matrixBorda[i][0] = 1;
    } else if (edgeDirection == 2) {
        for (int j=0;j<N;j++) matrixBorda[0][j] = 1;
    } else if (edgeDirection == 3) {
        for (int i=0;i<N;i++) matrixBorda[i][N-1] = 1;
    } else if (edgeDirection == 4) {
        for (int j=0;j<N;j++) matrixBorda[N-1][j] = 1;
    }
}

void moveHorse(int direction){
    switch (direction){
        case 1: printf("Para Esquerda\nPara Esquerda\nPara Baixo\n");break;
        case 2: printf("Para Esquerda\nPara Esquerda\nPara Cima\n"); break;
        case 3: printf("Para Cima\nPara Cima\nPara Esquerda\n"); break;
        case 4: printf("Para Cima\nPara Cima\nPara Direita\n"); break;
        case 5: printf("Para Direita\nPara Direita\nPara Cima\n"); break;
        case 6: printf("Para Direita\nPara Direita\nPara Baixo\n"); break;
        case 7: printf("Para Baixo\nPara Baixo\nPara Direita\n"); break;
        case 8: printf("Para Baixo\nPara Baixo\nPara Esquerda\n"); break;
        default: printf("Opção Invalida, lembre-se de 1 a 8\n"); break;
    }
}

void moveBishop(int squares, int direction, char edge, int edgeDirection){
    int edge[5];
    if(strcmp(edge, "nao") == 0 || strcmp(edge, "n") == 0 || strcmp(edge, "no") == 0){
        switch (direction){
            case 1: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Diagonal Esquerda Superior;\n", i);} break;
            case 2: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Diagonal Direita Superior;\n", i);} break;
            case 3: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Diagonal Esquerda Inferior;\n", i);} break;
            case 4: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Diagonal Direita Superior;\n", i);} break;
            default: printf("Opção selecionada Invalida!\n"); break;}
    } else if (strcmp(edge, "sim") == 0 || strcmp(edge, "s") == 0 || strcmp(edge, "yes") == 0){
        int matrixBorda[8][8];
        indentificarBordas(edgeDirection, matrixBorda);
    } 
    
}

void moveTower(int squares, int direction, char edge,  int edgeDirection){
    int edge[5];
    if(strcmp(edge, "nao") == 0 || strcmp(edge, "n")== 0 || strcmp(edge, "no") == 0){
        switch (direction){
            case 1: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Esquerda;\n", i);} break;
            case 2: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Cima;\n", i);} break;
            case 3: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Direita;\n", i);} break;
            case 4: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Baixo;\n", i);} break;
            default: printf("Opção selecionada Invalida!\n"); break;}
    } else if (strcmp(edge, "sim") == 0 || strcmp(edge, "s") == 0 || strcmp(edge, "yes") == 0){
        int matrixBorda[8][8];
        indentificarBordas(edgeDirection, matrixBorda);
    }
        
}

void moveQueen(int squares, int direction){

}

int main(int option, int squares, int direction, char edge, int edgeDirection){

    do{
    int option;
    char edge[5];
    

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

        selecionarPecas(option, squares, direction, edge, edgeDirection);
        
        
    


    } while(option != 5);

    return 0;
}
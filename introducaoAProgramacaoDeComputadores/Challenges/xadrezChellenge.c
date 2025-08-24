#include <stdio.h>
#include <string.h>

void moveTower(int squares, int direction, char edge[5], int edgeDirection){
        if(strcmp(edge, "nao") == 0 || strcmp(edge, "n")== 0 || strcmp(edge, "no") == 0){
            switch (direction){
                case 1: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Esquerda;\n", i);} break;
                case 2: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Cima;\n", i);} break;
                case 3: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Direita;\n", i);} break;
                case 4: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Baixo;\n", i);} break;
                default: printf("Opção selecionada Invalida!\n"); break;

        }} else if (strcmp(edge, "sim") == 0 || strcmp(edge, "s")== 0 || strcmp(edge, "yes") == 0) {

                switch (edgeDirection){
                    case 1: printf("A borda esta a esqueda;\n");
                        switch (direction){
                            case 1: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Cima;\n", i);} break;
                            case 2: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Direita;\n", i);} break;
                            case 3: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Baixo;\n", i);} break;
                            default: printf("Opção selecionada Invalida!\n"); break;}
                    break;

                    case 2: printf("A borda esta para cima;\n");
                        switch (direction){
                            case 1: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Esquerda;\n", i);} break;
                            case 2: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Direita;\n", i);} break;
                            case 3: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Baixo;\n", i);} break;
                            default: printf("Opção selecionada Invalida!\n"); break;}
                    break;

                    case 3: printf("A borda esta para direita;\n");
                        switch (direction){
                            case 1: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Esquerda;\n", i);} break;
                            case 2: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Cima;\n", i); } break;
                            case 3: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Baixo;\n", i);} break;
                            default: printf("Opção selecionada Invalida!\n"); break;}
                    break;

                    case 4: printf("A borda esta para baixo;");
                        switch (direction){
                            case 1: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Esquerda;\n", i);} break;
                            case 2: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Cima;\n", i);} break;
                            case 3: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Direita;\n", i);} break;
                            default: printf("Opção selecionada Invalida!\n"); break;}
                    break;

                    default: printf("Opção invalida;\n"); break;
                }
        } else{
            printf("Resposta diferente de sim ou não");
        }

}

void moveBishop(int squares, int direction, char edge[5], int edgeDirection){

        if(strcmp(edge, "nao") == 0 || strcmp(edge, "n") == 0 || strcmp(edge, "no") == 0){
        switch (direction){
            case 1: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Diagonal Esquerda Superior;\n", i);} break;
            case 2: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Diagonal Direita Superior;\n", i);} break;
            case 3: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Diagonal Esquerda Inferior;\n", i);} break;
            case 4: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Diagonal Direita Superior;\n", i);} break;
            default: printf("Opção selecionada Invalida!\n"); break;

        }} else if (strcmp(edge, "sim") == 0 || strcmp(edge, "s") == 0 || strcmp(edge, "yes") == 0) {

            switch (edgeDirection){
                case 1:
                        printf("A borda esta a esquerda;\n");
                        printf("Informe a direção desejada para mover o Bispo, sendo: \n");
                        printf("1. Para Diagonal Direita Superior;\n");
                        printf("2. Para Diagonal Direita Inferior;\n");
                        printf("Select the option: ");
                        scanf("%d", &direction);
                    switch (direction){
                        case 1: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Diagonal Direita Superior;\n", i);} break;
                        case 2: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Diagonal Direita Inferior;\n", i);} break;
                        default: printf("Opção selecionada Invalida!\n"); break;}
                break;

                case 2: 
                        printf("A borda esta a Cima;\n");
                        printf("Informe a direção desejada para mover o Bispo, sendo: \n");
                        printf("1. Para Diagonal Esquerda Inferior;\n");
                        printf("2. Para Diagonal Direita Inferior;\n");
                        printf("Select the option: ");
                        scanf("%d", &direction);
                    switch (direction){
                        case 1:for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Diagonal Esquerda Inferior;\n", i);} break;
                        case 2:for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Diagonal Direita Inferior;\n", i);} break;
                        default: printf("Opção selecionada Invalida!\n"); break;}
                break;

                case 3: 
                        printf("A borda esta a Direita;\n");
                        printf("Informe a direção desejada para mover o Bispo, sendo: \n");
                        printf("1. Para Diagonal Esquerda Superior;\n");
                        printf("2. Para Diagonal Esquerda Inferior;\n");
                        printf("Select the option: ");
                        scanf("%d", &direction);
                    switch (direction){
                        case 1: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Diagonal Esquerda Superior;\n", i);} break;
                        case 2: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Diagonal Esquerda Inferior;\n", i);} break;
                        default: printf("Opção selecionada Invalida!\n"); break;}
                break;

                case 4: 
                        printf("A borda esta a Baixo;\n");
                        printf("Informe a direção desejada para mover o Bispo, sendo: \n");
                        printf("1. Para Diagonal Esquerda Superior;\n");
                        printf("2. Para Diagonal Direita Superior;\n");
                        printf("Select the option: ");
                        scanf("%d", &direction);
                    switch (direction){
                        case 1: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Diagonal Esquerda Superior;\n", i);} break;
                        case 2: for(int i = 1;i <= squares;i++){ printf("%d Movimento(s) para Diagonal Direita Superior;\n", i);} break;
                        default: printf("Opção selecionada Invalida!\n"); break;}
                break;

                default: printf("Opção invalida;\n"); break;
            }

        } else{
            printf("Resposta diferente de sim ou não");
        }

}

void moveQueen(int squares){
    
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

int main(){
    int option, direction, squares, edgeDirection;
    char edge[5];

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

            printf("\nInforme se tem uma borda ou não: ");
            scanf("%3s", edge);
            if (strcmp(edge, "sim") == 0 || strcmp(edge, "s") == 0 || strcmp(edge, "yes") == 0){
                printf("╔════════════════════════════════════╗\n");
                printf("║ Informe a direção da borda, sendo: ║\n");
                printf("╠════════════════════════════════════╣\n");
                printf("║  1 ▸ Borda a Esquerda;             ║\n");
                printf("║  2 ▸ Borda a Cima;                 ║\n");
                printf("║  3 ▸ Borda a Direita;              ║\n");
                printf("║  4 ▸ Borda a Baixo;                ║\n");
                printf("╚════════════════════════════════════╝\n");
                printf("\nDigite a opção desejada: ");
                scanf("%d", &edgeDirection);           
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
                printf("\nInforme o número de casas desejadas: ");
                scanf("%d", &squares);
            } else {
                edgeDirection = 0;
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
                printf("\nInforme o número de casas desejadas: ");
                scanf("%d", &squares);
            }

            moveTower(squares, direction, edge, edgeDirection);

        break;

        case 2:

            printf("Informe se tem uma borda ou não: ");
            scanf("%3s", edge);
            if (strcmp(edge, "sim") == 0 || strcmp(edge, "s") == 0 || strcmp(edge, "yes") == 0){
                printf("Informe a direção da borda, sendo: \n");
                
                scanf("%d", &edgeDirection);
                printf("Informe a , sendo: \n");
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
                printf("\nInforme o número de casas desejadas: ");
                scanf("%d", &squares);            
            } else {
                edgeDirection = 0;
                printf("Informe a direção desejada para mover o Bispo, sendo: \n");
                printf("1. Para Diagonal Esquerda Superior;\n");
                printf("2. Para Diagonal Direita Superior;\n");
                printf("3. Para Diagonal Esquerda Inferior;\n");
                printf("4. Para Diagonal Direita Inferior;\n");
                printf("Informe a direção desejada: ");
                scanf("%d", &direction);
                printf("\nInforme o número de casas desejadas: ");
                scanf("%d", &squares);            
            }

            moveBishop(squares, direction, edge, edgeDirection);

        break;

        case 3:
            moveQueen(squares);

        break;
    
        case 4:

            
            printf("Informe qual movimento quer fazer com o cavalo, sendo:\n");
            printf("1. L - Esquerda-Baixo;\n");
            printf("2. L - Esquerda-Cima;\n");
            printf("3. L - Cima-Esquerda;\n");
            printf("4. L - Cima-Direita;\n");
            printf("5. L - Direita-Cima;\n");
            printf("6. L - Direita-Baixo;\n");
            printf("1. L - Baixo-Direita;\n");
            printf("1. L - Baixo-Esquerda;\n");
            scanf("%d", &direction);

            moveHorse(direction);
        
        break;

        default:
            printf("Sair do jogo.");
        break;
    }

    } while (option != 5);
    
    return 0;
}
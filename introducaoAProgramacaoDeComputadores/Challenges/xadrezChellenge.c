#include <stdio.h>

void moveTower(int squares, int direction, char edge[3], int edgeDirection){
    int  i, option;


        if(edge[3] == "não" || edge[3] == "n" || edge[3] == "no"){
        switch (direction){
        case 1:
            for(int i = 1;i <= squares;i++){
                printf("%d Movimento(s) para Esquerda;\n", i);
            }
            break;
        case 2: 
            for(int i = 1;i <= squares;i++){
                printf("%d Movimento(s) para Cima;\n", i);
            }
            break;
        case 3:
            for(int i = 1;i <= squares;i++){
                printf("%d Movimento(s) para Direita;\n", i);
            }
            break;
        case 4: 
            for(int i = 1;i <= squares;i++){
                printf("%d Movimento(s) para Baixo;\n", i);
            }
            break;
        default:
            printf("Opção selecionada Invalida!\n");
            break;
        }} else if (edge[3] == "sim" || edge[3] == "s" || edge[3] == "yes") {

        
                switch (edgeDirection){
                    case 1:
                        printf("A borda esta a esqueda;\n");
                        switch (direction){
                            case 1: 
                                for(int i = 1;i <= squares;i++){
                                    printf("%d Movimento(s) para Cima;\n", i);
                                }
                                break;
                            case 2:
                                for(int i = 1;i <= squares;i++){
                                    printf("%d Movimento(s) para Direita;\n", i);
                                }
                                break;
                            case 3: 
                                for(int i = 1;i <= squares;i++){
                                    printf("%d Movimento(s) para Baixo;\n", i);
                                }
                                break;
                            default:
                                printf("Opção selecionada Invalida!\n");
                                break;
                            break;
                        }
                    case 2:
                        printf("A borda esta para cima;\n");
                        switch (direction){
                            case 1: 
                                for(int i = 1;i <= squares;i++){
                                    printf("%d Movimento(s) para Esquerda;\n", i);
                                }
                                break;
                            case 2:
                                for(int i = 1;i <= squares;i++){
                                    printf("%d Movimento(s) para Direita;\n", i);
                                }
                                break;
                            case 3: 
                                for(int i = 1;i <= squares;i++){
                                    printf("%d Movimento(s) para Baixo;\n", i);
                                }
                                break;
                            default:
                                printf("Opção selecionada Invalida!\n");
                                break;
                            break;
                        }
                        break;
                    case 3:
                        printf("A borda esta para direita;\n");
                        switch (direction){
                            case 1: 
                                for(int i = 1;i <= squares;i++){
                                    printf("%d Movimento(s) para Esquerda;\n", i);
                                }
                                break;
                            case 2:
                                for(int i = 1;i <= squares;i++){
                                    printf("%d Movimento(s) para Cima;\n", i);
                                }
                                break;
                            case 3: 
                                for(int i = 1;i <= squares;i++){
                                    printf("%d Movimento(s) para Baixo;\n", i);
                                }
                                break;
                            default:
                                printf("Opção selecionada Invalida!\n");
                                break;
                            break;
                        }
                        break;
                    case 4:
                        printf("A borda esta para baixo;");
                        switch (direction){
                            case 1: 
                                for(int i = 1;i <= squares;i++){
                                    printf("%d Movimento(s) para Esquerda;\n", i);
                                }
                                break;
                            case 2:
                                for(int i = 1;i <= squares;i++){
                                    printf("%d Movimento(s) para Cima;\n", i);
                                }
                                break;
                            case 3: 
                                for(int i = 1;i <= squares;i++){
                                    printf("%d Movimento(s) para Direita;\n", i);
                                }
                                break;
                            default:
                                printf("Opção selecionada Invalida!\n");
                                break;
                            break;
                        }
                        break;
                    default:
                        printf("Opção invalida;\n");
                        break;  
                }
        } else{
            printf("Resposta diferente de sim ou não");
        }

}

void moveBishop(int squares, int direction, char edge[3], int edgeDirection){

    int  i, option;


        if(edge[3] == "não" || edge[3] == "n" || edge[3] == "no"){
        switch (direction){
        case 1:
            for(int i = 1;i <= squares;i++){
                printf("%d Movimento(s) para Diagonal Esquerda Superior;\n", i);
            }
            break;
        case 2: 
            for(int i = 1;i <= squares;i++){
                printf("%d Movimento(s) para Diagonal Direita Superior;\n", i);
            }
            break;
        case 3:
            for(int i = 1;i <= squares;i++){
                printf("%d Movimento(s) para Diagonal Esquerda Inferior;\n", i);
            }
            break;
        case 4: 
            for(int i = 1;i <= squares;i++){
                printf("%d Movimento(s) para Diagonal Direita Superior;\n", i);
            }
            break;
        default:
            printf("Opção selecionada Invalida!\n");
            break;
        }} else if (edge[3] == "sim" || edge[3] == "s" || edge[3] == "yes") {
            switch (edgeDirection)
            {
            case 1:
                printf("A borda esta a esqueda;\n");
                switch (direction){
                    case 1: 
                        for(int i = 1;i <= squares;i++){
                            printf("%d Movimento(s) para Diagonal Direita Superior;\n", i);
                        }
                        break;
                    case 2:
                        for(int i = 1;i <= squares;i++){
                            printf("%d Movimento(s) para Diagonal Direita Inferior;\n", i);
                        }
                        break;
                    default:
                        printf("Opção selecionada Invalida!\n");
                        break;
                    break;
                }
            case 2:
                printf("A borda esta para cima;\n");
                switch (direction){
                    case 1: 
                        for(int i = 1;i <= squares;i++){
                            printf("%d Movimento(s) para Diagonal Esquerda Inferior;\n", i);
                        }
                        break;
                    case 2:
                        for(int i = 1;i <= squares;i++){
                            printf("%d Movimento(s) para Diagonal Direita Inferior;\n", i);
                        }
                        break;
                    default:
                        printf("Opção selecionada Invalida!\n");
                        break;
                    break;
                }
                break;
            case 3:
                printf("A borda esta para direita;\n");
                switch (direction){
                    case 1: 
                        for(int i = 1;i <= squares;i++){
                            printf("%d Movimento(s) para Diagonal Esquerda Superior;\n", i);
                        }
                        break;
                    case 2:
                        for(int i = 1;i <= squares;i++){
                            printf("%d Movimento(s) para Diagonal Esquerda Inferior;\n", i);
                        }
                        break;
                    default:
                        printf("Opção selecionada Invalida!\n");
                        break;
                    break;
                }
                break;
            case 4:
                printf("A borda esta para baixo;");
                switch (direction){
                    case 1: 
                        for(int i = 1;i <= squares;i++){
                            printf("%d Movimento(s) para Diagonal Esquerda Superior;\n", i);
                        }
                        break;
                    case 2:
                        for(int i = 1;i <= squares;i++){
                            printf("%d Movimento(s) para Diagonal Direita Superior;\n", i);
                        }
                        break;
                    default:
                        printf("Opção selecionada Invalida!\n");
                        break;
                    break;
                }
                break;
            default:
                printf("Opção invalida;\n");
                break;
            }
        } else{
            printf("Resposta diferente de sim ou não");
        }


}

void moveQueen(squares){

}

void moveHorse(config){
    int config;

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
    default:
        print("Opção Invalida, lembre-se de 1 a 8");
        break;
    }
}

int main(){
    int option;
    int direction;
    int squares;

    do{
    printf("Menu to the Pieces Move: \n");
    printf("1. Move the Tower;\n");
    printf("2. Move the Bishop;\n");
    printf("3. Move the Queen;\n");
    printf("4. Move the Horse;\n");
    printf("Select one option: ");
    scanf("%d", &option);

    switch (option){
    case 1:
        char edge[3];
        int edgeDirection;
        printf("Informe a direção desejada para mover a Torre, sendo: \n");
        printf("1. Para Esquerda;\n");
        printf("2. Para Cima;\n");
        printf("3. Para Direita;\n");
        printf("4. Para Baixo;\n");
        printf("Informe a direção desejada: ");
        scanf("%d", &direction);
        printf("\nInforme o número de casas desejadas: ");
        scanf("%d", &squares);
        printf("Informe se tem uma borda ou não: ");
        scanf("%3s", &edge);
        printf("Informe a direção da borda, sendo: ");
        printf("1. Borda a Esquerda;\n");
        printf("2. Borda a Cima;\n");
        printf("3. Borda a Direita;\n");
        printf("4. Borda a Baixo;\n");
        scanf("%d", &edgeDirection);

        moveTower(squares, direction, edge[3], edgeDirection);

        break;

    case 2:
        char edge[3];
        int edgeDirection;
        printf("Informe a direção desejada para mover o Bispo, sendo: \n");
        printf("1. Para Diagonal Esquerda Superior;\n");
        printf("2. Para Diagonal Direita Superior;\n");
        printf("3. Para Diagonal Esquerda Inferior;\n");
        printf("4. Para Diagonal Direita Inferior;\n");
        printf("Informe a direção desejada: ");
        scanf("%d", &direction);
        printf("\nInforme o número de casas desejadas: ");
        scanf("%d", &squares);
        printf("Informe se tem uma borda ou não: ");
        scanf("%3s", &edge);
        printf("Informe a direção da borda, sendo: ");
        printf("1. Borda a Esquerda;\n");
        printf("2. Borda a Cima;\n");
        printf("3. Borda a Direita;\n");
        printf("4. Borda a Baixo;\n");
        scanf("%d", &edgeDirection);

        moveBishop(squares, direction, edge[3], edgeDirection);

        break;

    case 3:

        moveQueen();

        break;
    
    case 4:
        int direction;
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

    
        
        break;
    }

        
    }while (option != 10);
    

    return 0;
}
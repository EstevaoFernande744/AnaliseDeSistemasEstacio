#include <stdio.h>

void moveTower(int squares, int direction){
    int  i, option;


    
        switch (direction){
        case 1:
            for(int i = 1;i <= squares;i++){
                printf("%d Movimento(s) para %8s", i );
            }
            break;
        case 2: 
            for(int i = 1;i <= squares;i++){
                printf("%d Movimento(s) para %8s", i );
            }
            break;
        case 3:
            for(int i = 1;i <= squares;i++){
                printf("%d Movimento(s) para %8s", i );
            }
            break;
        default:
            break;
        }

        for(int i = 0;i < squares;i++){
            printf("%d Movimento(s) para %8s", i );
        }
        
}

void moveBishop(casas){

}

void moveQueen(casas){

}

void moveHorse(config){
    int config;

    switch (config){
    case 1:
        printf("Para Cima\n");
        printf("Para Cima\n");
        printf("Para Direita\n");
        break;
    case 2:
        printf("Para Cima\n");
        printf("Para Cima\n");
        printf("Para Esquerda\n");
        break;
    case 3:
        printf("Para Esquerda\n");
        printf("Para Esquerda\n");
        printf("Para Cima\n");
        break;
    case 4:
        printf("Para Direita\n");
        printf("Para Direita\n");
        printf("Para Cima\n");
    case 5:
        printf("Para Esquerda\n");
        printf("Para Esquerda\n");
        printf("Para Baixo\n");
        break;
    case 6:
        printf("Para Direita\n");
        printf("Para Direita\n");
        printf("Para Baixo\n");
        break;
    case 7:
        printf("Para Baixo\n");
        printf("Para Baixo\n");
        printf("Para Esquerda\n");
        break;
    case 8:
        printf("Para Baixo\n");
        printf("Para Baixo\n");
        printf("Para Direita\n");
    default:
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
        printf("Informe a direção desejada para mover a torre sendo: \n");
        printf("1. Para Esquerda;\n");
        printf("2. Para Cima;\n");
        printf("3. Para Direita;\n");
        printf("4. Para Baixo;\n");
        printf("Informe a direção desejada: ");
        scanf("%d", &direction);
        printf("\nInforme o número de casas desejadas: ");
        scanf("%d", &squares);

        moveTower(squares, direction);

        break;

    case 2:

        moveBishop();

        break;

    case 3:

        moveQueen();

        break;
    
    case 4:
        
        moveHorse();

        break;

    default:

    
        
        break;
    }

    
        
    }while (option != 10);
    

    return 0;
}
#include <stdio.h>

void moveTower(squares, direction){
    int direction, i;

        switch (direction){
        case 1:
            for(int i = 0;i < squares;i++){
                printf("%d Movimento(s) para %8s", i );
            }
            break;
        case 2:
            for(int i = 0;i < squares;i++){
                printf("%d Movimento(s) para %8s", i );
            }
            break;
        case 3:
            for(int i = 0;i < squares;i++){
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


    do{
    scanf("%d", &option);
        
    }while (option != 10);
    

    return 0;
}
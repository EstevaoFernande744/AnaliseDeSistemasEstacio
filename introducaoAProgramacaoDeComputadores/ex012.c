#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    int playerS, computerS, option;
    
    
        do{
        printf("Game Menu - JonKenPo:\n");
        printf("1. Start Game;\n");
        printf("2. More Info;\n");
        printf("3. Exit Game;\n");
        printf("Press the number selected: ");

        switch (option){
        case 1:
            
            scanf("%d", &playerS);

            srand(time(0));
            computerS = rand() % (3 + 1) == 0;
            switch (playerS){
            case 1:
                printf("Player Select: Rock - ");
                break;
            case 2:
                printf("Player Select: Paper - ");
                break;
            case 3:
                printf("Player Select: Scissors - ");
                break;
            default:
                printf("Invalid Option\n");
                break;
            }

            switch (computerS){
            case 1:
                printf("Computer Select: Rock -\n");
                break;
            case 2:
                printf("Computer Select: Paper\n");
                break;
            case 3:
                printf("Computer Select: Scissors\n");
                break;
            }


            if (playerS == computerS){
                printf("Draw! try again!\n");
            } else if (playerS == 1 && computerS == 3){
                printf("You win! The Rock breaks the Scissors!\n");
            } else if (playerS == 2 && computerS == 1){
                printf("You win! The Paper wraps the Rock!\n");
            } else if (playerS == 3 && computerS == 2){
                printf("You win! The Scissors cut the Paper!\n");
            } else if (playerS == 1 && computerS == 2){
                printf("You lose! The Paper wraps the Rock!\n");
            } else if (playerS == 2 && computerS == 3){
                printf("You lose! The Scissors cut the Paper!\n");
            } else if (playerS == 3 && computerS == 1){
                printf("You lose! The Rock breaks the Scissors!\n");
            } else {
                printf("Select a valid option!\n");
            }
        
            break;
        
        case 2:
            printf("You need select a number between 1-3, the númber 1 = Rock, 2 = Paper and the number 3 = Scissor, the Rock breaks the Scissors, Scissor cut the Paper and Paper wraps the Rock!\n");
            printf("You lose if you don't select any these options!\n");
            break;
        
        default:
            break;
        }
        
        
    } while (option != 3);
    


    return 0;
}
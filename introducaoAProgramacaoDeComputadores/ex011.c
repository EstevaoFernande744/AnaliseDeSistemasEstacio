#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    int opcao, numeroSecreto, palpite;

    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

        /*função srand que vai iniciar o gerador de números aleatorios 
        time(0) vai pegar o horario de inicialização */

    while (opcao != 3){

        switch (opcao){
        case 1:

            numeroSecreto = rand() % 10;
            printf("Digite um número de 0 a 9: \n");
            scanf("%d", &palpite);

            while (numeroSecreto != palpite){
                printf("Você errou! tente novamente: ");
                scanf("%d", &palpite);
            }
            printf("Você acertou!\n");
            printf("número secreto era %d\n", numeroSecreto);
            break;

        case 2: {
            printf("Informe qual regra você deseja saber: \n");
            printf("1. Regra do jogo\n");
            printf("2. Dica para acertar o número\n");
            printf("3. Regra de saida\n");
            int regras;
            scanf("%d", &regras);

            switch (regras){
            case 1:
                printf("Você vai informar um número e o computador também, se o seu número coincidir com o do computador, você ganha!");
                break;
            case 2:
                printf("Repita o mesmo número todas as vezes e vai achar o resultado mais rapido!");
                break;
            case 3:
                printf("Você saiu das regras \n");
                break;
            default:
                printf("A opção informada é invalida\n");
                break;
            }
            break;
        }

        case 3:
            printf("Você saiu do jogo \n");
            break;
        default:
            printf("A opção informada é invalidaz\n");
            break;
        
        }
    }
    return 0;
}

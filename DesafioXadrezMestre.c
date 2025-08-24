#include <stdio.h>
// movimento da torre : anda cinco casas para a direita usando recursividade
void moverTorre(int casas){
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

//movimento da rainha : anda oito casas para esquerda , usando recursividade
void moverRainha(int casas){
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

//movimento do bispo : anda cinco casas na diagonal direita, usando recursividade + loops aninhados
void moverBispo(int casas){
    if (casas > 0) {  
        // loop externo = movimento vertical (Cima)
        for (int i = 0; i < 1; i++) {  
            // loop interno = movimento horizontal (Direita)
            for (int j = 0; j < 1; j++) {
                printf("Cima Direita\n");
            }
        }
        // chamada recursiva para a próxima casa
        moverBispo(casas - 1);
    }
}
    
//movimento do cavalo : anda duas casas para baixo  e uma para esquerda, usando loops complexos
void moverCavalo(int casas){
    for (int i = 0; i < casas; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
    }

}

int main() {
    // variaveis para o menu interativo
    int opcao = 0;
    int escolhaPeca;

    while (opcao != 3) { // enquanto não escolher sair volta para o menu de seleção
        printf("--- ESCOLHA UMA OPÇÃO ---\n");
        printf("+---+------------------+\n");
        printf("| 1 | Exibir as Regras |\n");
        printf("| 2 | Iniciar o Jogo   |\n");
        printf("| 3 | Sair             |\n");
        printf("+---+------------------+\n");
        printf("\n");

        printf("Digite a opção desejada: "); 
        scanf("%d", &opcao);

        printf("\n");

        switch (opcao) {
            case 1:
                printf("--- MOVIMENTAÇÃO DAS PEÇAS ---\n\n");
                printf("Torre\t: 5 casas em linha reta.\n");
                printf("Rainha\t: 8 casas em linha reta.\n");
                printf("Bispo\t: 5 casas em diagonal.\n");
                printf("Cavalo\t: Movimento em 'L'.\n");
                printf("\n"); 
                break;

            case 2:
                printf("** JOGO XADREZ **\n");
                printf("-----------------\n");
                printf("\n");
                printf("Escolha uma peça para mover:\n");
                printf("\n");
                printf("1 - Torre\n");
                printf("2 - Rainha\n");
                printf("3 - Bispo\n");
                printf("4 - Cavalo\n");
                printf("\n");

                printf("Digite o número da peça desejada: ");
                scanf("%d", &escolhaPeca);
                printf("\n");

                switch (escolhaPeca) {
                    case 1:
                        printf("Movendo Torre:\n"); 
                            moverTorre(5);  // chama a função moverTorre com 5 casas
                            break;
                    case 2: 
                        printf("Movendo Rainha:\n");
                            moverRainha(8);  // chama a função moverRainha com 8 casas
                            break;
                    case 3: 
                        printf("Movendo Bispo:\n");    
                            moverBispo(5);  // chama a função moverBispo com 5 casas
                            break;
                    case 4: 
                        printf("Movendo Cavalo:\n");    
                            moverCavalo(1); // chama a função moverCavalo com 1 movimento
                            break;
                    default: 
                        printf("Peça inválida. Escolha uma peça válida.\n"); 
                            break;
                }
                printf("\n");
                break;

            case 3:
                printf("Saindo do jogo. Até a próxima!\n");
                break;

            default:
                printf("Opção inválida. Escolha uma opção válida.\n\n");
                break;
        }
    }

    return 0;
}

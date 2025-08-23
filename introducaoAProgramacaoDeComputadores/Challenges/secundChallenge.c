#include <stdio.h>

int main(void){

    // Variaveis de entrada declaradas inicialmente

    char estado1, estado2;
    char cod1[4], cod2[4]; 
    char nameCity1[20], nameCity2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int beutPoints1, beutPoints2;
    int option;
    float density1, density2;
    float pibPer1, pibPer2;
    float carta1, carta2;
    int select1, select2;

    // Do para interligar e fazer um loop para o programa não parar

    do{

        // Menu de entrada do game 

        printf("Game Menu - SuperTrunfo:\n");
        printf("1. Primeira Carta;\n");
        printf("2. Segunda Carta;\n");
        printf("3. Visualizar Cartas;\n");
        printf("4. Compare as Cartas;\n");
        printf("5. Sair do jogo;\n");

        printf("Selecione a opção desejada: ");
        scanf("%d", &option);

        // Switch para ligar itens do menu
    
        switch (option){
        case 1: 

        // Declarando a primeira carta

            printf("Informe a identificação da carta 1: ");
            scanf(" %c", &estado1);

            printf("Informe o codigo do País 1: ");
            scanf("%3s", cod1);

            printf("Informe o nome da cidade 1: ");
            scanf("%19s", nameCity1);

            printf("Informe a quantidade de pessoas 1: ");
            scanf("%i", &populacao1);

            printf("informe a area do País 1: ");
            scanf("%f", &area1);

            printf("Informe o PIB do País 1: ");
            scanf("%f", &pib1);

            printf("Informe o número de pontos turisticos 1: ");
            scanf("%i", &beutPoints1);
        
            break;

        // Declarando a segunda carta

        case 2: 
            printf("Informe a identificação da carta 2: ");
            scanf(" %c", &estado2);
            
            printf("Informe o codigo do País 2: ");
            scanf("%3s", cod2);

            printf("Informe o nome da cidade 2: ");
            scanf("%19s", nameCity2);

            printf("Informe a quantidade de pessoas 2: ");
            scanf("%i", &populacao2);

            printf("informe a area do País 2: ");
            scanf("%f", &area2);

            printf("Informe o PIB do País 2: ");
            scanf("%f", &pib2);

            printf("Informe o número de pontos turisticos 2: ");
            scanf("%i", &beutPoints2);
        
            break;

        case 3:

        // Calcular atributos derivados evitando divisão por 0

            density1 = (area1 > 0) ? populacao1 / area1 : 0;
            density2 = (area2 > 0) ? populacao2 / area2 : 0;
            pibPer1  = (populacao1 > 0) ? pib1 / populacao1 : 0;
            pibPer2  = (populacao2 > 0) ? pib2 / populacao2 : 0;

        // Mostrando todos os atributos das cartas

            printf("Carta 1:\n");
            printf("Estado: %c\n", estado1);
            printf("Código: %s\n", cod1);
            printf("Nome da Cidade: %s\n", nameCity1);
            printf("População : %i\n", populacao1);
            printf("Área: %.2f km²\n", area1);
            printf("PIB: %.2f bilhões de reais\n", pib1);
            printf("Número de Pontos Turístico: %i\n", beutPoints1);
            printf("Densidade Populacional: %f\n", density1);
            printf("PIB percapto: %f\n", pibPer1);

            printf("Carta 2:\n");
            printf("Estado: %c\n", estado2);
            printf("Código: %s\n", cod2);
            printf("Nome da Cidade: %s\n", nameCity2);
            printf("População: %i\n", populacao2);
            printf("Área: %.2f km²\n", area2);
            printf("PIB: %.2f bilhões de reais\n", pib2);
            printf("Número de Pontos Turístico: %i\n", beutPoints2);
            printf("Densidade Populacional: %f\n", density2);
            printf("PIB percapto: %f\n", pibPer2);

            break;

        case 4: 

        // Iniciar aqui para os valores não serem alterados 

            float soma1 = 0, soma2 = 0;

        // Mostrando um menu de itens a selecionar

            printf("\nComparando %s x %s\n", nameCity1, nameCity2);
            printf("Atributos disponíveis:\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. PIB per capita\n");
            printf("5. Densidade Populacional\n");
            printf("6. Pontos Turísticos\n");

            printf("Escolha o 1º atributo (1-6): ");
            scanf("%d", &select1);
            printf("Escolha o 2º atributo (1-6): ");
            scanf("%d", &select2);

            // Selecionando o primeiro atributo

            switch (select1) {
                case 1: soma1 += populacao1; soma2 += populacao2; break;
                case 2: soma1 += area1;      soma2 += area2;      break;
                case 3: soma1 += pib1;       soma2 += pib2;       break;
                case 4: soma1 += pibPer1;    soma2 += pibPer2;    break;
                case 5: soma1 += density1;   soma2 += density2;   break;
                case 6: soma1 += beutPoints1;soma2 += beutPoints2;break;
                default: printf("Atributo 1 inválido!\n"); break;
            }

            // Selecionando o segundo atributo

            switch (select2) {
                case 1: soma1 += populacao1; soma2 += populacao2; break;
                case 2: soma1 += area1;      soma2 += area2;      break;
                case 3: soma1 += pib1;       soma2 += pib2;       break;
                case 4: soma1 += pibPer1;    soma2 += pibPer2;    break;
                case 5: soma1 += density1;   soma2 += density2;   break;
                case 6: soma1 += beutPoints1;soma2 += beutPoints2;break;
                default: printf("Atributo 2 inválido!\n"); break;
            }

            // mostrando a soma de atributos e fazendo a comparação das somas 

            printf("\nSoma dos atributos:\n");
            printf("%s: %.2f\n", nameCity1, soma1);
            printf("%s: %.2f\n", nameCity2, soma2);

        if (soma1 > soma2) {
            printf("Resultado: %s venceu!\n", nameCity1);
        } else if (soma2 > soma1) {
            printf("Resultado: %s venceu!\n", nameCity2);
        } else {
            printf("Resultado: Empate!\n");
        }
            break;

        // Opção de saida

        case 5:
            printf("Saindo do jogo...\n");
            break;

        // Para evitar opções invalidas

        default:
            puts("Opção inválida!");
            break;
    }
            
    } while (option != 5);

    return 0;
}
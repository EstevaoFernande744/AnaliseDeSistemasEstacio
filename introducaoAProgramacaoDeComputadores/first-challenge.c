#include <stdio.h>

int main(){

    char estado1, estado2;
    char cod1[3], cod2[3]; 
    char nameCity1[20], nameCity2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int beutPoints1, beutPoints2;

    printf("Informe a identificação da carta 1: ");
    scanf("%c", &estado1);
    
    printf("Informe o codigo do País 1: ");
    scanf("%s", cod1);

    printf("Informe o nome da cidade 1: ");
    scanf("%s", nameCity1);

    printf("Informe a quantidade de pessoas 1: ");
    scanf("%i", &populacao1);

    printf("informe a area do País 1: ");
    scanf("%f", &area1);

    printf("Informe o PIB do País 1: ");
    scanf("%f", &pib1);

    printf("Informe o número de ponto turisticos 1: ");
    scanf("%i", &beutPoints1);

    // segunda carta


    printf("Informe a identificação da carta 2: ");
    scanf(" %c", &estado2);
    
    printf("Informe o codigo do País 2: ");
    scanf("%s", cod2);

    printf("Informe o nome da cidade 2: ");
    scanf("%s", nameCity2);

    printf("Informe a quantidade de pessoas 2: ");
    scanf("%i", &populacao1);

    printf("informe a area do País 2: ");
    scanf("%f", &area2);

    printf("Informe o PIB do País 2: ");
    scanf("%f", &pib2);

    printf("Informe o número de ponto turisticos 2: ");
    scanf("%i", &beutPoints2);


    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", cod1);
    printf("Nome da Cidade: %s\n", nameCity1);
    printf("População : %i\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turístico: %i\n", beutPoints1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", cod2);
    printf("Nome da Cidade: %s\n", nameCity2);
    printf("População: %i\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turístico: %i\n", beutPoints2);


}
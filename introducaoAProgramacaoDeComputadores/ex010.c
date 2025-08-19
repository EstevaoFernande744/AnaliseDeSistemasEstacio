#include <stdio.h>

int main(){

    int dia;

    printf("Informe o número do dia: ");
    scanf("%i", &dia);

    switch (dia){
    case 1:
        printf("Domingo");
        break;
    case 2:
        printf("Segunda-feira");
        break;
    case 3:
        printf("Terça-feira");
        break;
    case 4:
        printf("Quarta-feira");
        break;
    case 5:
        printf("Quinta-feira");
        break;
    case 6:
        printf("Sexta-feira");
        break;
    case 7:
        printf("Sabado");
        break;
    default:
        printf("Opção de dia invalido!");
        break;
    }

    /*
    if (dia == 0){
        printf("Domingo");
    } else if (dia == 1){
        printf("Segunda-feira");
    } else if (dia == 2){
        printf("Terça-feira");
    } else if (dia == 3){
        printf("Quarta-feira");
    } else if (dia == 4){
        printf("Quinta-feira");
    } else if (dia == 5){
        printf("Sexta-feira");
    } else if (dia == 6){
        printf("Sabado");
    } else {
        printf("Opção de dia invalido!");
    }
    */
}
#include <stdio.h> 

int main(){

    int idade = 25;
    double altura = 1.75;
    char opcao = 'S';
    char nome[20] = "estevão";

    printf("A idade de %s é: %d\n", nome, idade);
    printf("A altura é: %f\n", altura);
    printf("A opção é: %c\n", opcao);


    /*
    %i ou %d representa um decimal inteiro;
    %f representa um número com ponto flutuante; (.n° de casas funciona)
    %e representa um número com ponto flutuante em notação cientifica; 
    %s representa String(cadeia de caracter no C);
    %c representa caractere;
    \n representa pular a linha;
    */

    return 0;
}
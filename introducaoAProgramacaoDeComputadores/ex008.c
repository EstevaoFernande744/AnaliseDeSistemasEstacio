#include <stdio.h>

int main(){
    
    int var;

    printf("Informe o valor da variavel: ");
    scanf("%i", &var);

    switch (var){

    case 1:
        printf("O valor da variavel informado foi 1");
        break;
    case 2:
        printf("O valor da variavel informado foi 2");
        break;
    default:
        printf("O valor da variavel informado foi invalido");
        break;
    }

}
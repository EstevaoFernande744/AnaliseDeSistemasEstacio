#include <stdio.h>

int main(){

    int idade;
    float altura;
    char name[5];

    printf("Digite a sua idade: ");
    scanf("%d", &idade);  
    printf("A idade é: %d\n", idade);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("A altura é: %.2f\n", altura);

    printf("Digite o nome desejado: ");
    scanf("%s", name);
    printf("O nome informado é: %s", name);


}
#include <stdio.h>

int main(){

    int idade;
    float altura;
    char name[10];


    printf("Informe a idade do Aluno: ");
    scanf("%i", &idade);

    printf("Informe a altura do Aluno: ");
    scanf("%f", &altura);

    printf("Informe o nome do Aluno: ");
    scanf("%s", name);
    

    printf("O Aluno %s, que tem %i anos de idade e %.2f metros de altura", name, idade, altura);

    return 0;
}

#include <stdio.h>

int main(){

    int a = 10, b = 2;

    // 0 no C é falso.

    if (a > 0 && b > 0){
        printf("Os valores informados são positivos\n");
    } else if(a > 0 || b > 0){
        if (a > b){
            printf("O primeiro valor é positivo\n");
        } else if (a == b){
            printf("Os dois valores são iguais\n");
        } else {
            printf("O segundo valor é maior que o primeiro\n");
        }
    }

    if (a > b){
        printf("O maior valor é %d\n", a);
    } else {
        printf("O maior valor é %d\n", b);
    }

    if (!a < !b){
        printf("O valor do inverso de a é maior do que b");
    } else {
        printf("O valor do inverso de b é maior do que a");
    }
    
}  
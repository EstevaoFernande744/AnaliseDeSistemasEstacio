#include <stdio.h>

void imprimirMensagem(){
    printf("Olá mundo!\n");
}

int main(void){
    int i = 1;

    while (i <= 10){
        printf("%d° - ", i);
        imprimirMensagem();
        i++;
    }
    
    return 0;
}
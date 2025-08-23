#include <stdio.h>

void recusiveLoop(int n){

    if (n > 0){ // Condiciona ao loop de carateres 
        printf("%d ", n); // Imprime o valor n na tela
        recusiveLoop(n - 1); // Chama a si mesmo por isso recursivo
    }
}

int main(void){
    int numero; // Número que vai ser aplicado no recursive loop

    printf("Informe o número inicial: ");
    scanf("%d", &numero);

    printf("Contagem regressiva: \n"); 
    recusiveLoop(numero); // chama a função com a variavel numero como parametro 

    return 0;
}


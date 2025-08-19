#include <stdio.h>

int main(){

    int idade, meses;
    
    printf("Informe quantos anos você tem: \n");
    scanf("%i", &idade);
    printf("Informe em que mês você faz aniversario: \n");
    scanf("%i", &meses);

    if(idade > 18){
        printf("Já pode votar!\n");
    } else if (idade < 18){
        printf("Infelizmente ainda não pode votar\n");
    } else{
        if (meses < 4){
            printf("Ainda pode votar!\n");
        } else { 
            printf("Infelizmente só procimo ano!\n");
        }
        
    }
    
    
    return 0;
}
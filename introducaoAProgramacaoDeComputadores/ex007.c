#include <stdio.h>

int main(){

    int idade, meses;
    
    printf("Informe quantos anos você tem: ");
    scanf("Informe a idade: %i\n", &idade);
    printf("Informe em que mês você faz aniversario: ");
    scanf("Informe a idade: %i\n", &meses);

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
    
    
    




}
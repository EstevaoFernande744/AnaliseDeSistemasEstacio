#include <stdio.h>

int main(){

    int opcao,agencia, conta;
    float valorSaque, valorDeposito, valorEmConta = 150000;
    char nomeBanco[20];

    printf("Informe qual opção o senhor(ita) deseja acessar: \n");
    printf("1. Verificar o saldo da conta\n");
    printf("2. Fazer depósito\n");
    printf("Sair da plataforma\n");
    scanf("%i", &opcao);

    switch (opcao){
    case 1:
        printf("Para depositar o saldo da conta: \n");
        printf("Informe o nome do Banco: ");
        scanf("%s", nomeBanco);
        printf("Informe o número da agencia ex xxxx-x: ");
        scanf("%i", &agencia);
        printf("Informe o número da conta ex xxxxxxx-x: ");
        scanf("%i", &conta);
        printf("O valor presente em conta é: %.2f", valorEmConta);
        break;
    case 2:
        printf("Informe o valor que deseja depositar: ");
        scanf("%f", &valorDeposito);
        printf("O valor depositado foi R$ %.2f\n", valorDeposito);
        break;
    case 3:
        printf("Informe o valor que deseja sacar: ");
        scanf("%f", &valorSaque);
        printf("O valor sacado foi R$ %.2f\n", valorSaque);
        break;
    default:
        printf("Saiu da plataforma");
        break;
    }
}
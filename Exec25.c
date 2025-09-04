#include <stdio.h>

int main(){

    //declara�ao de variaveis
    int prod,cond;


    //entrada de dados
    printf("Escreva o valor do produto: \n");
    scanf("%d",&prod);

    printf("Escreva a forma de pagamento\n");
    printf("1:A vista em dinheiro ou cheque, recebe 10%% de desconto\n");
    printf("2:A vista no cartao de credito, recebe 5%% de desconto\n");
    printf("3:Em 2 vezes, preco normal de etiqueta sem juros\n");
    printf("4:Em 3 vezes, preco normal de etiqueta mais juros de 10%%\n");
    scanf("%d",&cond);

    //processamento de dados
    switch(cond){
        case 1:
            prod = prod * 0.9;
            printf("A vista em dinheiro ou cheque, recebe 10%% de desconto %d\n",prod);
            break;
        case 2:
            prod = prod * 0.95;
            printf("A vista no cartao de credito, recebe 5%% de desconto %d\n",prod);
            break;
        case 3:
            printf("Em 2 vezes, preco normal de etiqueta sem juros %d\n",prod);
            break;
        case 4:
            prod = prod * 1.1;
            printf("Em 3 vezes, preco normal de etiqueta mais juros de 10%% %d\n",prod);
            break;
        default:
            break;
    }

    return 0;
}

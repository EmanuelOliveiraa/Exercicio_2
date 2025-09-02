#include <stdio.h>

int main(){

    //declara�ao de variaveis

    int numero;


    //entrada de dados
    printf("Escreva um numero: \n");
    scanf("%d",&numero);

    //processamento de dados


    if(numero % 2 == 0){
        printf("Numero par\n");
    }else{
        printf("Numero impar\n");
    }
    return 0;
}

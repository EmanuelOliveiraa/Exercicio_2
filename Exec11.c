#include <stdio.h>

int main(){

    //declara�ao de variaveis

    int num1,num2;


    //entrada de dados
    printf("Escreva dois numeros: \n");
    scanf("%d %d",&num1, &num2);

    //processamento de dados


    if(num1 < num2)){
        printf("Numero 1: %d",num1);
    }else{
        printf("Numero 2: %d", num2);
    }
    return 0;
}

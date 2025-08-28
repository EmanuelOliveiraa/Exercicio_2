#include <stdio.h>

int main(){

    //declaraçao de variaveis
    int idade;


    //entrada de dados
    printf("entre com sua idade: ");
    scanf("%d",&idade);

    //processamento de dados
    if(idade >= 18){
        printf("Voce e maior de idade");
    }else{
        printf("Voce e menor de idade");
    }

    return 0;
}
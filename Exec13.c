#include <stdio.h>

int main(){

    //declara�ao de variaveis

    int idade;


    //entrada de dados
    printf("Escreva a idade: \n");
    scanf("%d",&idade);

    //processamento de dados

    if(idade >= 0 && idade <= 2) printf("Recem-nascido");
    if(idade >= 3 && idade <= 11) printf("Criança");
    if(idade >= 12 && idade <= 19) printf("Adolescente");
    if(idade >= 20 && idade <= 55) printf("Aduto");
    if(idade > 55) printf("Idoso");
    return 0;
}

#include <stdio.h>

int main(){

    //declara�ao de variaveis

    int nota1,nota2,nota3;
    float media;


    //entrada de dados
    printf("Escreva as tres notas do aluno: \n");
    scanf("%d %d %d",&nota1, &nota2, &nota3);

    //processamento de dados
    media = (nota1 + nota2 + nota3)/ 3;

    if(media >= 0.0 && media < 5.0) printf("Reprovado : %f",media);
    if(media >= 5.0 && media < 7.0) printf("Exame final: %f", media);
    if(media >= 7.0 && media <= 10.0) printf("Aprovado : %f",media);
    return 0;
}

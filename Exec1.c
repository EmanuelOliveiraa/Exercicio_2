#include <stdio.h>

int main(){
    //declaraçao de variaveis
    float n1,n2,n3,n4,media;
    //entrada de dados
    printf("Escreva a 1 nota do aluno: \n");
    scanf("%f",&n1);
    printf("Escreva a 2 nota do aluno: \n");
    scanf("%f",&n2);
    printf("Escreva a 3 nota do aluno: \n");
    scanf("%f",&n3);
    printf("Escreva a 4 nota do aluno: \n");
    scanf("%f",&n4);
    //processamento de dados
    media  = (n1+n2+n3+n4)/4;

    if(media >= 7){
        printf("Aluno aprovado.\n");
    }else{
        printf("Aluno reprovado.\n");
    }



    return 0;
}

#include <stdio.h>

int main(){

    //declaraçao de variaveis

    float n1,n2,n3,media;


    //entrada de dados
    printf("Informe a nota do Laboratorio, Av. Semestral, Nota do Exame Final: \n");
    scanf("%f %f %f",&n1,&n2,&n3);

    //processamento de dados
    media = ((n1*2)+(n2*3)+(n3*5))/10;

    if(media >= 8 && media <= 10){
        printf("Media do aluno e: %f, e seu conceito: A\n",media);
    }
    if(media >= 7.0 && media <= 7.9){
        printf("Media do aluno e: %f, w seu conceito: B\n", media);
    }
    if(media >= 6.0 && media <= 6.9){
        printf("Media do aluno e: %f, w seu conceito: C\n", media);
    }
    if(media >= 5.0 && media <= 5.9){
        printf("Media do aluno e: %f, w seu conceito: D\n", media);
    }
    if(media < 5){
        printf("Media do aluno e: %f, w seu conceito: E\n", media);
    }

    return 0;
}

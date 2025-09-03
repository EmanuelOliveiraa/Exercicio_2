#include <stdio.h>
#include <math.h>

int main(){

    //declara�ao de variaveis
    int ope,n1,n2,soma;
    float raiz,resuntado;


    //entrada de dados
    printf("Escolha uma opçao \n");
    printf("1: Soma \n");
    printf("2: Raiz quadrada \n");
    printf("3: Finalizar \n");
    scanf("%d",&ope);

    //processamento de dados
    switch(ope){
        case 1:
            printf("Escreva dois numeros para soma:\n");
            scanf("%d %d",&n1, &n2);
            soma = n1 + n2;
            printf("resuntado da soma: %d",soma);
            break;
        case 2:
            printf("Escreva o numero para raiz:\n");
            scanf("%f",&raiz);
            resuntado = sqrt(raiz);
            printf("resuntado da raiz: %f",resuntado);
            break;
        default:
            break;
    }

    return 0;
}

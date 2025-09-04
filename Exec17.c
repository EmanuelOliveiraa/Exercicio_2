#include <stdio.h>

int main(){

    //declara�ao de variaveis
    int angulo;


    //entrada de dados
    printf("Informe o angulo: \n");
    scanf("%d",&angulo);

    //processamento de dados

    if(angulo > 360) angulo = angulo % 360;
    if(angulo < -360) angulo = angulo % -360;

    if(angulo >= 0 && angulo <90) printf("1 quadrante %d",angulo);
    if(angulo >= 90 && angulo <180) printf("1 quadrante %d",angulo);
    if(angulo >= 180 && angulo <270) printf("1 quadrante %d",angulo);
    if(angulo >= 270 && angulo <=360) printf("1 quadrante %d",angulo);

    if(angulo <= 0 && angulo > -90) printf("1 quadrante %d",angulo);
    if(angulo <= -90 && angulo > -90) printf("1 quadrante %d",angulo);
    if(angulo <= -180 && angulo > -270) printf("1 quadrante %d",angulo);
    if(angulo <= -270 && angulo >= -360) printf("1 quadrante %d",angulo);
    return 0;
}

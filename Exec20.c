#include <stdio.h>

int main(){

    //declara�ao de variaveis
    int a,b,c,x1,x2,delta;


    //entrada de dados
    printf("Informe os valores de A B C: \n");
    scanf("%d %d %d",&a, &b, &c);

    //processamento de dados
    delta = (b*b) - (4*a*c);
    x1 =(-b + delta)/(2*a);
    x2 =(-b - delta)/(2*a);
    printf("Resuntado de x1 %d e x2 %d",x1,x2);

    return 0;
}

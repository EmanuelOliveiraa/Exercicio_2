#include <stdio.h>

int main(){

    //declara�ao de variaveis
    int min_falta,min_extras,H;
    float hr_faltas,hr_extra;



    //entrada de dados
    printf("Informe as Horas-extras: \n");
    scanf("%d",&min_extras);
    printf("Informe as Horas-faltas: \n");
    scanf("%d",&min_falta);

    //processamento de dados

    H = min_extras - (2/3*min_falta);
    hr_extra = min_extras / 60;
    hr_faltas = min_falta / 60;
    if(H > 240) printf("Premio R$500 \nHoras_Extras %.2f\n Horas_Faltas %.2f",hr_extra,hr_faltas);
    if(H > 1800 && H <= 2400) printf("Premio R$400 \nHoras_Extras %.2f\n Horas_Faltas %.2f",hr_extra,hr_faltas);
    if(H > 1200 && H <= 1800) printf("Premio R$300 \nHoras_Extras %.2f\n Horas_Faltas %.2f",hr_extra,hr_faltas);
    if(H > 600 && H <= 1200) printf("Premio R$200 \nHoras_Extras %.2f\n Horas_Faltas %.2f",hr_extra,hr_faltas);
    if(H <= 600) printf("Premio R$100 \n Horas_Extras %.2f\n Horas_Faltas %.2f",hr_extra,hr_faltas);

}

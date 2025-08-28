#include <stdio.h>

int main(){

    //declaraçao de variaveis

    float peso,altura;
    char sexo;


    //entrada de dados
    printf("Informe sua altura: ");
    scanf("%f",&altura);
    printf("Informe seu sexo: ");
    scanf("%c\n",&sexo);

    //processamento de dados
    switch (sexo)
    {
    case 'M':
        peso = (72.7 * altura) - 58;
        printf("O peso ideal para homens &d\n",peso);
        break;

    case 'F':
        peso = (62.1 * altura) - 44.7;
        printf("O peso ideal para mulheres %d\n",peso);
        break;

    default:
        printf("Sexo invalido");
        break;
    }

    return 0;
}

#include <stdio.h>

int main(){

    //declaraçao de variaveis

    int idade;


    //entrada de dados
    printf("Informe sua idade: ");
    scanf("%d",&idade);

    //processamento de dados
    switch (idade)
    {
    case 5:
    case 6:
    case 7:
        printf("Categoria infatil A\n");
        break;
    case 8:
    case 9:
    case 10:
        printf("Categoria infatil B\n");
        break;
    case 11:
    case 12:
    case 13:
        printf("Categoria juvenil A\n");
        break;
    case 14:
    case 15:
    case 16:
    case 17:
        printf("Categoria juvenil B\n");
        break;
    default:
        printf("Senior");
        break;
    }

    return 0;
}

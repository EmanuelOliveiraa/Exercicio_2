#include <stdio.h>

int main(){

    //declara�ao de variaveis
    int idade,grupo;


    //entrada de dados
    printf("Informe a idade: \n");
    printf("informe o grupo de risco \n");
    printf("1:Baixo\n2:Medio\n3:Alto\n");
    scanf("%d",&idade);
    scanf("%d",&grupo);

    //processamento de dados
    if(idade < 18 && idade > 70) return 0;
    if(idade >= 18 && idade <=24){
        switch(grupo){
            case 1:
                printf("Codigo de seguro e: 7");
                break;
            case 2:
                printf("Codigo de seguro e: 8");
                break;
            case 3:
                printf("Codigo de seguro e: 9");
                break;
        }
    }
    if(idade >= 25 && idade <=40){
        switch(grupo){
            case 1:
                printf("Codigo de seguro e: 4");
                break;
            case 2:
                printf("Codigo de seguro e: 6");
                break;
            case 3:
                printf("Codigo de seguro e: 6");
                break;
        }
    }
    if(idade >= 41 && idade <=70){
        switch(grupo){
            case 1:
                printf("Codigo de seguro e: 1");
                break;
            case 2:
                printf("Codigo de seguro e: 2");
                break;
            case 3:
                printf("Codigo de seguro e: 3");
                break;
        }
    }

    return 0;
}

#include <stdio.h>

int main(){

    //declaraçao de variaveis
    int salario,rejusteSalario;


    //entrada de dados
    printf("Digiti o salario do funcionario: ");
    scanf("%d",&salario);

    //processamento de dados
    if(salario <= 300){
        reajusteSalario = salario * 1.5;
        printf("Voce e maior de idade %d\n",reajusteSalario);
    }else{
        reajusteSalario = salario * 1.3;
        printf("Voce e menor de idade %d\n",reajusteSalario);
    }

    return 0;
}
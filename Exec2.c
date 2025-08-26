#include <stdio.h>

int main(){
    //declaraçao de variaveis
    float salarioFunc,aumento;
    //entradad de dados
    printf("Digite o salario.\n");
    scanf("%f",&salarioFunc);
    //processamento de dados
    if(salarioFunc <= 500){
        aumento = salarioFunc +(salarioFunc * 0.30);
        printf("Reajuste de salario: %.1f\n",aumento);
    }else {
        printf("Funcionario nao tem direito a reajuste de salario\n");

    return 0;
    }
}

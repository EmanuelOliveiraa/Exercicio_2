#include <stdio.h>

int main(){

    //declara�ao de variaveis

    int codigo;


    //entrada de dados
    printf("Escreva o codigo: \n");
    scanf("%d",&codigo);

    //processamento de dados

    switch(codigo){
        case 1: printf("Cargo: Escrituario  Percentual: 50.00%%");
            break;
        case 2: printf("Cargo: Secretario  Percentual: 35.00%%");
            break;
        case 3: printf("Cargo: Caixa  Percentual: 20.00%%");
            break;
        case 4: printf("Cargo: Gerente  Percentual: 10.00%%");
            break;
        default: printf("Cargo: Diretor  Percent6ual: Nao tem aumento");
            break;
    }
    return 0;
}

#include <stdio.h>

int main(){

    //declaraçao de variaveis

    float preco;
    int codigo;


    //entrada de dados
    printf("Escreva o preco do produto e seu codigo: \n");
    scanf("%f",&preco);
    scanf("%d",&codigo);

    //processamento de dados


    if(codigo == 1) printf("Procedencia: Sul\n");
    if(codigo == 2) printf("Procedencia: Norte\n");
    if(codigo == 3) printf("Procedencia: Leste\n");
    if(codigo == 4) printf("Procedencia: Oeste\n");
    if(codigo == 5 || codigo == 6) printf("Procedencia: Nordeste\n");
    if(codigo >=7 && codigo <= 9) printf("Procedencia: Sudeste\n");
    if(codigo >=10 && codigo <= 20) printf("Procedencia: Cetro-Oeste\n");
    if(codigo >=21 && codigo <= 30) printf("Procedencia: Nodeste\n");


    return 0;
}

#include <stdio.h>

int main(){

    //declara�ao de variaveis
    int n1,n2,n3;


    //entrada de dados
    printf("Informe tres numeros: \n");

    scanf("%d %d %d",&n1, &n2, &n3);


    //processamento de dados
    if(n1 > n2 && n2 > n3){
        if(n2 > n3){
            printf("%d %d %d",n3,n2,n1);
        }
    }
    if(n2 > n3){
        if(n3 > n1){
            printf("%d %d %d",n1,n3,n2);
        }
    }
    if(n3 > n1){
        if(n1 > n2){
            printf("%d %d %d",n2,n1,n3);
        }
    }

    return 0;
}

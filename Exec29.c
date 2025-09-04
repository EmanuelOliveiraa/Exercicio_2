#include <stdio.h>

int main(){

    //declara�ao de variaveis
    int n1,n2,n3,n4;



    //entrada de dados
    printf("Informe 4 numeros: \n");
    scanf("%d %d %d %d",&n1, &n2, &n3, &n4);

    //processamento de dados


    if(n1 % 2 == 0) printf("Numero %d divisivel por 2 \n", n1);
    if(n1 % 2 == 1) printf("Numero %d nao e divisivel por 2 \n", n1);
    if(n1 % 3 == 0) printf("Numero %d divisivel por 3 \n", n1);
    if(n1 % 3 == 1) printf("Numero %d nao e divisivel por 3  \n", n1);

    if(n2 % 2 == 0) printf("Numero %d divisivel por 2 \n", n2);
    if(n2 % 2 == 1) printf("Numero %d nao e divisivel por 2 \n", n2);
    if(n2 % 3 == 0) printf("Numero %d divisivel por 3 \n", n2);
    if(n2 % 3 == 1) printf("Numero %d nao e divisivel por 3  \n", n2);

    if(n3 % 2 == 0) printf("Numero %d divisivel por 2 \n", n3);
    if(n3 % 2 == 1) printf("Numero %d nao e divisivel por 2 \n", n3);
    if(n3 % 3 == 0) printf("Numero %d divisivel por 3 \n", n3);
    if(n3 % 3 == 1) printf("Numero %d nao e divisivel por 3  \n", n3);

    if(n4 % 2 == 0) printf("Numero %d divisivel por 2 \n", n4);
    if(n4 % 2 == 1) printf("Numero %d nao e divisivel por 2 \n", n4);
    if(n4 % 3 == 0) printf("Numero %d divisivel por 3 \n", n4);
    if(n4 % 3 == 1) printf("Numero %d nao e divisivel por 3  %n", n4);



    return 0;
}

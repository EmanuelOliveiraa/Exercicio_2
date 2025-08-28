#include <stdio.h>
#include <string.h>

int main(){

    //declaraçao de variaveis
    char senha[20];

    //entrada de dados
    printf("entre com a senha: ");
    scanf("%s", senha);

    //processamento de dados
    if(strcmp(senha, "ASDFG")==0){
        printf("Acesso permitido");
    }else{
        printf("Acesso negado");
    }

    return 0;
}

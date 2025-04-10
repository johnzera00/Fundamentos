#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

int main(){
    int idade;
    float salario;
    char bloco;


    printf("digite sua idade:");
    scanf("%d",&idade);
    
    printf("digite seu salario inicial:");
    scanf("%f",&salario);
    
    setbuf(stdin,NULL);
    fflush(stdin);//windows
    __fpurge(stdin);//linux
    
    printf("digite seu bloco de aula:");
    scanf("%c",&bloco);
    
    
    printf("sua idade é %i\n", idade);
    

    return 0;
}
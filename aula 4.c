#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int a = 8;
    int b = 3;
    int soma;
    int subtração;
    int multiplicação;
    int divisão;
    //int resto;
    float divisãoreal;

    soma = a + b;
    printf(" A soma é %d\n", soma);

    subtração = a - b;
    printf(" A subtração é %d\n", subtração);

    multiplicação = a * b;
    printf("A multiplicação é %d\n", multiplicação);

    divisão = a / b;
    printf("A divisão é %d\n", divisão);

    //resto = a % b;
   // printf("O resto é %d\n", resto);
    
    divisãoreal =(float) a / b; //casting
    printf(" A divisão é %f\n", divisãoreal);






    int contador = 50;

    contador = contador + 1;
    
    printf("Contador: %d\n", contador);
    



    



    return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*
Meu primeiro programa em C
Engenharia de Computação
UTFPR
Apucarana*/

int main(){
    setlocale(LC_ALL,"");
    printf("hello, world!c:\t");//exemplo de caracter de tabulação
    printf("engenharia de \"computação\"");
    printf("Apucarana");
    //finaliza a função main
    return 0;
}//main
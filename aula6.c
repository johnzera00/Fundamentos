#include <stdio.h>
#include <stdlib.h>

int main(){

    int dia;
    int mes;
    int ano;

    printf("Digite a data de hoje(dd/mm/aaaa):");
    scanf("%d/%d/%d",dia&mes&ano);

    printf("Hoje é %02d/%02d/%04d\n",dia,mes,ano);
    
    return 0;
}
/*

Faça um trecho de programa que imprima os números pares num intervalo x a y: 
a) Usando while; 
b) Usando for; 
c) Usando do while.

Autor: Guilherme Oliveira Desidério
Data: 22.07.2022

*/

#include<stdio.h>

int main()
{
    int numero, i;

    scanf("%d", &numero);

    i = 1;
    while (i <= numero)
    {
        if(i % 2 == 0){
           printf("%d ", i); 
        }
        i++;
    }
    printf("\n");
    
    for(i = 1; i <= numero; i++){
        if(i % 2 == 0){
            printf("%d ", i);
        }
    }
    printf("\n");

    i = 1;
    do{
        if(i % 2 == 0){
            printf("%d ", i);
        }
        i++;
    }while(i <= numero);
    printf("\n");

    return 0;
}

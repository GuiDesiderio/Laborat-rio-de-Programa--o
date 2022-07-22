/*

Refaça qualquer um dos programas da questão anterior, mas imprimindo os 
números na ordem inversa (obrigatório uso de vetor). 

Autor: Guilherme Oliveira Desidério
Data: 22.07.2022
*/

#include<stdio.h>

int main()
{
    
    int numero, i;

    scanf("%d", &numero);

    int vetor[numero];

    for(i = 1; i <= numero; i++){
        if(i % 2 == 0){
            printf("%d ", i);
            vetor[i] = i;
        }
    }
    printf("\n");

    for(i = numero; i > 0; i--){
        if(i % 2 == 0){
            printf("%d ", vetor[i]);
        }
    }
    return 0;
}

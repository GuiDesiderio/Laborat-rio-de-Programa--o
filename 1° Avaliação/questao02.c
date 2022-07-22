/*

Complete os condicionais. Faça um programa que leia a idade de uma pessoa e 
informe a sua classe eleitoral: 
- não eleitor (abaixo de 16 anos)
- eleitor obrigatório(entre 18 e 65 anos)
- eleitor facultativo(entre 16 e 18 anos e maior de 65 anos)

Autor: Guilherme Oliveira Desidério
Data: 22.07.2022

*/

#include <stdio.h>
int main()
{
    int Idade = 0;
    printf("Digite idade: ");
    scanf("%d", &Idade);
    if (Idade >= 18 && Idade <= 65) 
    {
        printf("Eleitor obrigatorio\n");
    }
    else if ((Idade >= 16 && Idade < 18) || Idade > 65){
         printf("Eleitor facultativo\n");
    }
    else{
        printf("Nao eleitor\n");
    }
    return 0;
}

/*

Baseado no código fornecido na questão 1, imprima o nome da mulher mais 
leve e o CPF do homem mais alto. 

Autor: Guilherme Oliveira Desidério
Data: 22.07.2022

*/

#include<stdio.h>

typedef struct
{
    char nome[100];
    char sexo;
    float peso;
    float altura;
    long long int cpf;
} Pessoa;

#define QUANTIDADE_DE_PESSOAS 1

int main()
{
    /* ADIÇÃO */

    float menorPeso = 1000, maiorAltura = 0;
    char nomeMulherMenorPeso[200];
    long long int cpfHomemMaiorAltura;

    Pessoa pessoas[QUANTIDADE_DE_PESSOAS]; 
    printf("Campos: nome, altura, peso, cpf, sexo\n");
    int i;
    for (i = 0; (i < QUANTIDADE_DE_PESSOAS); i++)
    {
        printf("\nInforme os dados da pessoa(%i): ", i + 1); 
        scanf("%s %f %f %Lu %c", pessoas[i].nome, &pessoas[i].altura, 
              &pessoas[i].peso, &pessoas[i].cpf, &pessoas[i].sexo);
    }
    printf("\nInforme o CPF da pessoa: ");
    long long int cpf_localizador;
    scanf("%Lu", &cpf_localizador); 
    printf("\nSexo\tNome\tIMC\n");
    i = 0;
    while (i < QUANTIDADE_DE_PESSOAS) 
    {
        if (cpf_localizador == pessoas[i].cpf) 
        {
            float imc = pessoas[i].peso / (pessoas[i].altura * pessoas[i].altura); 
            printf("\n%c\t%s\t%1.2f\n", pessoas[i].sexo, pessoas[i].nome, 
                   imc);
            break; 
        }
        i++;
    }

    /* ADIÇÃO */

    for(i = 0; i < QUANTIDADE_DE_PESSOAS; i++){
        if(pessoas[i].sexo == 'F'){
            if(pessoas[i].peso < menorPeso){
                menorPeso = pessoas[i].peso;
                nomeMulherMenorPeso[200] = pessoas[i].nome;
            }
        }
        if(pessoas[i].sexo == 'M'){
            if(pessoas[i].altura > maiorAltura){
                maiorAltura = pessoas[i].altura;
                cpfHomemMaiorAltura = pessoas[i].cpf;
            }
        }
    }

    printf("%s\n", nomeMulherMenorPeso);
    printf("%Lu\n", cpfHomemMaiorAltura);
    
    return 0;
}
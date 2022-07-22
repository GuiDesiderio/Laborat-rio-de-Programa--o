/*

Comente cada linha, O que o programa faz?

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

#define QUANTIDADE_DE_PESSOAS 1 /* Constante */

int main()
{
    Pessoa pessoas[QUANTIDADE_DE_PESSOAS]; /* Vetor de struct */
    printf("Campos: nome, altura, peso, cpf, sexo\n");
    int i;
    for (i = 0; (i < QUANTIDADE_DE_PESSOAS); i++) /* Pecorre o vetor de struct */
    {
        printf("\nInforme os dados da pessoa(%i): ", i + 1); 
        scanf("%s %f %f %Lu %c", pessoas[i].nome, &pessoas[i].altura, /* Input dos dados pessoais */
              &pessoas[i].peso, &pessoas[i].cpf, &pessoas[i].sexo);
    }
    printf("\nInforme o CPF da pessoa: ");
    long long int cpf_localizador;
    scanf("%Lu", &cpf_localizador); /* Input de um CPF específico */
    printf("\nSexo\tNome\tIMC");
    i = 0;
    while (i < QUANTIDADE_DE_PESSOAS) /* Percorre o vetor de struct */
    {
        if (cpf_localizador == pessoas[i].cpf) /* Localiza o CPF de uma pessoa específica */
        {
            float imc = pessoas[i].peso / (pessoas[i].altura * pessoas[i].altura); /* Fórmula para calcular o IMC */
            printf("\n%c\t%s\t%1.2f\n", pessoas[i].sexo, pessoas[i].nome, /* Output dos dados pessoais da pessoa com o CPF localizado */
                   imc);
            break; /* Interrompe a estrutura de repetição */
        }
        i++;
    }
    return 0;
}

/* O programa registra os dados pessoais de 3 pessoas diferentes, logo após localiza uma pessoa através do seu CPF informado pelo usuário e imprime os seus dados pessois, além do seu IMC. */

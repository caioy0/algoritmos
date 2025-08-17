/*Verificação de CPF - cálculo do dígito verificador*/
#include <stdio.h>
#define MAX 20

int main (){
    int cpf[MAX], n = 11, interno[MAX], digitoverificador;
    int soma = 0, resto = 0, digito = 0;
/* zerar o vetor */
    for(int i = 0; i < 11; i++)
        interno[i]=0;
    for(int i = 0; i < 11; i++)
        cpf[i]=0;
/* entrada de dados */
    printf("Digite o numero do CPF, sem pontos ou tracos: "); 
    for(int i = 0; i < 11; i++)
        scanf("%d", &cpf[i]);
/* calculo do primeiro digito verificador */
    for(int i = 0; i < 9; i++){
        n = n-1;
        interno[i]=n*cpf[i];
    }
    for(int i = 0; i < 9; i++)
        soma+=interno[i];
    resto=soma%11;
    digito=11-resto;
    if(resto<2)
        digitoverificador=0;
    else
        digitoverificador=digito;
    if(digitoverificador!=cpf[9])
        printf("\n * CPF invalido *");
/* calculo do segundo digito verificador */
    n=12;
    for(int i = 0; i < 9; i++){
        n=n-1;
        interno[i]=n*cpf[i];
    }
    for(int i = 0; i < 9; i++)
        soma+=interno[i];
    resto=soma%11;
    digito=11-resto;
    if(resto<2)
        digitoverificador=0;
    else
        digitoverificador=digito;
    if(digitoverificador!=cpf[10])
        printf("\n * CPF invalido **");
    else
        printf("\n * CPF valido *");

    return(0);
}
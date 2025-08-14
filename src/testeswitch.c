#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("System\n\n");
    printf("1- Windows\n");
    printf("2- Linux\n");
    printf("Selecione o S.O: ");
    scanf("%d",&numero);

    switch(numero)
    {
        case 1:
            system("cls");
            printf("iniciando windows\n");
            break;
        case 2:
        system("cls");
            printf("iniciando linux\n");
            break;
        default:
        printf("Opcao Invalita");
    }
    return 0;
}
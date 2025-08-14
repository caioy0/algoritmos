#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char entrada [100];
    printf("Entre com um texto: ");
    fgets(entrada, 100, stdin);
    int tamanho=strlen(entrada) -1; //Tira enter, reset no input.
    
    int inicio=0;
    int fim=tamanho-1;
    while(inicio<fim){
        if(entrada[inicio]!= entrada[fim]) printf("Não é palindromo");
        inicio=inicio+1;
        fim=fim-1;
    }
    return 0;
}
#include <stdio.h> // blibioteca I/O

int main () {
    char txt[100];
    scanf("%s", txt); // comando para inserir oq vou escrever no terminal
    printf("%s\n\n", txt); // vai mostrar
    int i; // numero inteiro
    for(i = 0; i < 100; i = i + 1) //loop
        printf("%c-%d\n", txt[i],txt[i]);
    return 0;
}
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(){ 
    int a;
    printf("Escreva um numero: ");
    scanf("%d", &a);
    
    int c;
    c = a+1;

    if (c>=5) printf("Esse numero é maior que 5:  %d", c);
    else printf("Esse numero é menor que 5: %d", c);

    return 0;
}
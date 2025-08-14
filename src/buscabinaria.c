/*Busca binaria*/
#include <stdio.h>
#define MAX 100

int main (){
    int x=0, n=0, v[MAX], i=0, meio=0, fim=0, inicio=0, resposta=0;
/* zerar o vetor */
    for(i=0; i<100; i++){
        v[i]=0;
    }
/* entrada de dados */
    printf("Diga qtos numero tera sua sequencia: ");
    scanf("%d", &n);
    printf("Digite uma sequencia em ordem crescente: ");
    for(i=0;i<n;i++){
        scanf("%d", &v[i]);
    }
    printf("Digite o numero a ser procurado: ");
    scanf("%d", &x);
/* busca binaria */
    fim=n-1;
    while(inicio<=fim){
        meio=(inicio+fim)/2;
        if(v[meio]==x)
            return meio;
        if(v[meio]<x)             inicio=meio+1; /* elimina termos antes do meio, jah q valor eh maior q o valor do meio */         if(v[meio]>x)
            inicio=meio-1; /* elimina termos depois do meio, jah q valor eh menor q o valor do meio */
    }
    return(-1);
}
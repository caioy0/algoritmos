#include <stdio.h>
int main(){   
    float alturas[]={1.73, 1.75, 1.70, 1.88, 1.73, 1.78,
                    1.82, 1.69, 1.78, 1.97, 1.80, 1.81,
                    1.67, 1.60, 1.76, 1.70, 1.70, 1.75,
                    1.75, 1.75, 1.70, 1.60, 1.71, 1.71, 
                    1.75, 1.75, 1.76, 1.76, 1.76, 1.73,
                    1.70}; //cada float gasta 4 bytes.
    int N = sizeof(alturas) / sizeof(float); //sizeof mostra os bytes utilizados, lembrando que 1 byte = 8 bytes.
    printf("O vetor gasta %ld bytes na memória.\n", sizeof(alturas));
    printf("Um elemento float gasta %ld bytes na memória.\n", sizeof(float));
    printf("Há %d pessoas.\n", N);

    float soma = 0;
    float menor = alturas[0];
    float maior = alturas[0];
    soma = alturas[0];

    for(int i = 1; i < N; i = i + 1){   
        if(alturas[i] > maior)   
            maior = alturas[i];

        if(alturas[i] < menor)
            menor = alturas[i];

        soma = soma + alturas[i];
    }
    float media = soma / N;
    printf("Menor = %.2f  Maior = %.2f  Média = %.2f\n", menor, maior, media);

    int INTERVALOS = 10;
    float tamanhosIntervalo = (maior-menor)/INTERVALOS;
    float inferior = menor, superior= menor+tamanhosIntervalo;

    for (int i = 0; i < INTERVALOS; i = i + 1){
        for(int j = 0; j < N; j = j + 1){
            if(alturas[j] >= inferior && alturas [j] <= superior)
                printf("X");
        }
        printf("\n");
        inferior = superior;
        superior = superior+tamanhosIntervalo;
    }
    
    return 0;
}
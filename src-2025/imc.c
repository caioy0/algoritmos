#include <stdio.h>

int main() {
    float peso, altura;
    printf("Insira seu peso (kG): ");
    scanf("%f", &peso);
    printf("Insira sua altura (metros): ");
    scanf("%f", &altura);

    float imc = peso/(altura*altura);

    printf("Seu imc é de: %.0f\n", imc);
    if (imc < 18.5) printf("Indice: magreza\n");
    else if (imc >= 18.5 && imc <25) printf("Indice: Saúdavel\n");
    else if (imc >=25) printf ("Indice: Procure ajuda\n");

    return 0;
}
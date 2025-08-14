#include <stdio.h>
#include <time.h>

int main() {
    // Obtem a hora atual em segundos desde a meia-noite de 1º de janeiro de 1970
    time_t now = time(NULL);

    // Converte o resultado em um formato de hora e data local
    struct tm *local = localtime(&now);

    // Define uma sequência de formatação para a data completa
    char buffer[80];
    strftime(buffer, 80, "A data atual é %A, %d de %B de %Y", local);

    // Imprime a hora e a data atual formatada
    printf("A hora atual é: %02d:%02d:%02d\n", local->tm_hour, local->tm_min, local->tm_sec);
    printf("%s\n", buffer);

    return 0;
}

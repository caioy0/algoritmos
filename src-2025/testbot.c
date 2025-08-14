#include <time.h>
#include <stdio.h>

void tempo() {
    printf("Horas e data");
    time_t now = time(NULL);
    struct tm *local = localtime(&now);
    char buffer[80];
    strftime(buffer, 80, "A data atual é %A, %d de %B de %Y", local);
    printf("A hora atual é: %02d:%02d:%02d\n", local->tm_hour, local->tm_min, local->tm_sec);
    printf("%s\n", buffer);
}

int main(){
    int d = 1;
    do {
        printf("Insert: ");
        scanf("%d", &d);
        getchar(); // Limpa o buffer do teclado
        
        switch (d) {
            case 1:
                tempo();
                break;
            case 2:
                d = 0;
                break;
            default:
                printf("Repeat");
                break;
        }
        printf("Pressione uma tecla para continuar...");
        getchar();
    }while (d != 0);
    return 0;
}

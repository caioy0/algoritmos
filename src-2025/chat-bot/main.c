#include "bot.h"

int main() {
    int running = 1;
    int language;
    printf("CHATSUPREMe V1.00 loading...\nChoose language:\n1 - Portuguese (Brazil)\n2 - English\nInput: ");
    scanf("%d", &language);
    clear_input();
    printf("\e[1;1H\e[2J");

    if (language == 1) {
        char name[100];
        printf("Para iniciar o chat, insira seu nome: ");
        scanf("%s", name);
        printf("Olá %s! WELCOME TO CHATSUPREMe V1.00 RELOADED!\n", name);
    } 
    else if (language == 2) {
        char name[100];
        printf("To start chatting, enter your name: ");
        scanf("%s", name);
        printf("Hi %s! WELCOME TO CHATSUPREMe V1.00 RELOADED!\n", name);
    } 
    else {
        printf("INPUT NOT RECOGNIZED! TRY AGAIN!\n");
        return 0;
    }

    do {
        int option;
        printf(language == 1 ? "\nOpções para solucionar sua dúvida/problema:\n" : "\nOptions to solve your problem/doubt:\n");
        printf("1 - %s\n2 - %s\n3 - %s\n4 - %s\n5 - Exit\n", language == 1 ? "Horas e data" : "Date and time", language == 1 ? "Calculador de IMC" : "IMC calculator", language == 1 ? "BOT AVANÇADO" : "Advanced BOT", language == 1 ? "Exemplo de vetor" : "Vector example");
        printf("Input: ");
        scanf("%d", &option);
        clear_input();
        printf("\e[1;1H\e[2J");
        
        switch (option) {
            case 1:
                show_time(language);
                printf(language == 1 ? "Pressione uma tecla para continuar..." : "Press a key to continue...");
                clear_input();
                break;
            case 2:
                calculate_imc(language);
                printf(language == 1 ? "Pressione uma tecla para continuar..." : "Press a key to continue...");
                clear_input();
                break;
            case 3:
                if (language == 1) {
                    advanced_bot(language);
                } 
                else {
                    advanced_bot(language);
                }
                printf(language == 1 ? "Pressione uma tecla para continuar..." : "Press a key to continue...");
                clear_input();
                break;
            case 4:
                search_number(language);
                printf(language == 1 ? "Pressione uma tecla para continuar..." : "Press a key to continue...");
                clear_input();
                break;
            case 5:
                running = 0;
                return 0;
            default:
                printf(language == 1 ? "Opção inválida\n" : "Invalid option\n");
                printf(language == 1 ? "Pressione uma tecla para continuar..." : "Press a key to continue...");
                clear_input();
            break;
        }
        getchar();
    } while (running != 0); 
    return 0;
}
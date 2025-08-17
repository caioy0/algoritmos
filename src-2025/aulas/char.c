#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

void data_hora (){
    printf("Horas e data\n");
    time_t now = time(NULL);
    struct tm * local = localtime(&now);
    char buffer[80];
    strftime(buffer, 80, "A data atual é %A, %d de %B de %Y", local);
    printf("A hora atual é: %02d:%02d:%02d\n", local->tm_hour, local->tm_min, local->tm_sec);
    printf("%s\n", buffer);
}

int main() {
    //VARIAVEIS E SAUDAÇÕES
    char a[100] = "Ola ",
    b[100] = "O seu chamado ao SAC é causado por qual problema? ", 
    c [100];
    //NOME
    printf("Para iniciar o atendimento insira seu nome: ");
    scanf("%s", c);
    system ("clear");
    strcat(a,c);
    strcat(b,c);
    printf("%s\n%s\n", a,b);
    
    //LINHA DE SELEÇÃO
    unsigned int run = 1;
    do{
        printf("Opções para solucionar sua duvida/problema\n");
        printf("\n1 - Calculadora (Soma). \n2 - Horas e data. \n3 - Calculador de IMC. \n4- BOT AVANÇADO \n");
        scanf("%d", &run); //escolha do numero
        printf("\e[1;1H\e[2J");
        switch(run) {
            case 1:
                printf("Calculadora\n");
                break;
            case 2:
                data_hora();
                break;
            case 3:
                printf("Entrar em contato por telefone\n");
                break;
            case 4: //colocar o case 4 no scanf
                printf("BOT AVANCADO\n");
                char d[100];
                printf("\nQual é o assunto? ");
                scanf(" %c", d);
                if(strstr(d, "loop")!=NULL) printf("Loop eu uso quando preciso fazer uma coisa várias vezes...\
                    Posso usar os comandos while, for e do-while.\n");
                    else printf("Hmm... não sei.");
                    break;
            default:
                printf("Opção inválida\n");
                continue;
        }
    } while (run != 0);
    return 0;
}
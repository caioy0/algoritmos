#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
void swi() {
    int di = 1;
    do {
        switch(di) {
            case 1:
                printf("Calculadora");
                break;
            case 2:
                printf("Horas e data");
                time_t now = time(NULL);
                struct tm *local = localtime(&now);
                char buffer[80];
                strftime(buffer, 80, "A data atual é %A, %d de %B de %Y", local);
                printf("A hora atual é: %02d:%02d:%02d\n", local->tm_hour, local->tm_min, local->tm_sec);
                printf("%s\n", buffer);
                break;
                case 3:
                    printf("Entrar em contato por telefone");
                    break;
                case 4: //colocar o case 4 no scanf
                    printf("BOT AVANCADO");
                    char d[100];
                    printf("\nQual é o assunto? ");
                    scanf(" %c", d);
                    if(strstr(d, "loop")!=NULL) printf("Loop eu uso quando preciso fazer uma coisa várias vezes...\
                        Posso usar os comandos while, for e do-while.\n");
                        else printf("Hmm... não sei.");
                        break;
                default:
                printf("Opção inválida");
                continue;
        }
    } while(di != 0);
}
int main() 
{
    //VARIAVEIS E SAUDAÇÕES
    int di = 0;
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
    printf("Opções para solucionar sua duvida/problema");
    printf("\n1 - Calculadora (Soma). \n2 - Horas e data. \n3 - Calculador de IMC. \n4- BOT AVANÇADO \n");
    scanf("%d", &di); //escolha do numero
    printf("\e[1;1H\e[2J");
    swi();
    return 0;
}
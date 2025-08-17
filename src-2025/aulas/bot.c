#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>

void clear_input() {
    int g;
    while ((g = getchar()) != '\n' && g != EOF) { }
}

//CASE 2
void imcc() {
    float peso=0, altura=0, imc=0;
    printf("Para calcular seu IMC insira seu peso(KG): ");
    scanf("%f", &peso);
    printf("Para calcular seu IMC insira sua altura(metros): ");
    scanf("%f", &altura);
    imc = peso/(altura*altura);
    printf("Seu IMC é de: %f\n", imc);
    if (imc <18.5)
    {
        printf("Cuidado voce esta abaixo do peso normal, recomendo ir ao medico.\n");
    }
    else if (imc <= 25)
    {
        printf("Esta saudavel em relacao ao peso. Continue saudavel!\n");
    }
    else
    {
        printf("Cuidado voce esta acima do peso normal, recomendo ir ao medico.\n");
    }
}
void imcce() //CASE 2
{
    float peso=0, altura=0, imc=0;
    printf("Insert your weight(KG): ");
    scanf("%f", &peso);
    printf("Insert your weight(meters): ");
    scanf("%f", &altura);
    imc = peso/(altura*altura);
    printf("Your IMC is: %f\n", imc);
    if (imc <18.5)
    {
        printf("BE CAREFUL, your weight is under the requiriments based on your height. To solute the low weight, talk to a doctor.\n");
    }
    else if (imc <= 25)
    {
        printf("VERY GOOD! You are healthy.\n");
    }
    else if (imc >=30)
    {
        printf("Hey your weight is a warning signal, means that you are obease. Go to a doctor, take care of your healthy\n");
    }
    else
    {
        printf("BE CAREFUL YOUR WEIGHT IS OVERKILLING YOU BRUH, YOUR ARE RIGHT NOW EXTREAME OBEASE THATS A BAD SIGN FOR YOUR HEALTHY.\n");
    }
}
void tempo() //CASE 1
{
    printf("Horas e data");
    time_t now = time(NULL);
    struct tm *local = localtime(&now);
    char buffer[80];
    strftime(buffer, 80, "A data atual é %A, %d de %B de %Y", local);
    printf("A hora atual é: %02d:%02d:%02d\n", local->tm_hour, local->tm_min, local->tm_sec);
    printf("%s\n", buffer);
}
void tempoe() //CASE 1
{
    printf("Hours and date");
    time_t now = time(NULL);
    struct tm *local = localtime(&now);
    char buffer[80];
    strftime(buffer, 80, "Today date is %A, %d from %B de %Y", local);
    printf("Hours now: %02d:%02d:%02d\n", local->tm_hour, local->tm_min, local->tm_sec);
    printf("%s\n", buffer);
}

void bota() //CASE 3
{
    printf("BOT AVANCADO");
    char d[100];
    printf("\nQual é o assunto? ");
    scanf(" %[^\n]", d);
    if(strstr(d, "loop")!=NULL)
    {   
        printf("Loop eu uso quando preciso fazer uma coisa várias vezes... Posso usar os comandos while, for e do-while.\n");
    }
    else
    {   
        printf("Hmm... não sei.\n");
    }
}
void botae() //CASE 3 en
{
    printf("SOVIET BOT NATIONAL ANTHEM\n");
    char d[100];
    printf("COMARADE WHATS IS PROBLEM?\n Input: ");
    scanf(" %[^\n]", d);
    if(strstr(d, "soviet")!=NULL)
    {   
        printf("Союз нерушимый республик свободных Сплотила навеки Великая Русь. Да здравствует созданный волей народов Единый, могучий Советский Союз!.\n");
    }
    else
    {   
        printf("\aBRUH GO WATCH SOME PEARL JAM VIDEOCLIP OR LIVE.\n");
    }
}
int flg ()
{   int vetor[] = {3, 7, 4, 1, 9, 2, 5, 8, 3, 6};
    int i, procurado;
    bool achei = false;
    printf("Entre com o número procurado:");
    scanf("%d", &procurado);
    for(i=0; i<10; i++)
    {   if(vetor[i] == procurado)
        {   printf("O número foi encontrado no índice %d\n", i);
            achei = true;
        }
    }
    if (!achei) printf("Este número não existe\n"); // ou if(achei == false) .... 
    return 0;
}
int flge ()
{   int vetor[] = {3, 7, 4, 1, 9, 2, 5, 8, 3, 6};
    int i, procurado;
    bool achei = false;
    printf("Input number that you search rn:");
    scanf("%d", &procurado);
    for(i=0; i<10; i++)
    {   if(vetor[i] == procurado)
        {   printf("Number found in: %d\n", i);
            achei = true;
        }
    }
    if (!achei) printf("Number not exist\n"); // ou if(achei == false) .... 
    return 0;
}
int main() 
{
    // DECLARAÇÃO DE VARIÁVEIS
    int idioma = 0;
    char a[100], b[100], c[100];
    // ENTRADA DE DADOS
    printf("CHATSUPREMe V1.00 lodading...\nChoose language. Escolha o idioma.\n1-Portuguese Brazil.\n2-English\nInput: ");
    scanf("%d", &idioma);
    // PROCESSAMENTO E SAÍDA DE DADOS
        switch (idioma) 
        {
            case 1:
                strcpy(a, "Olá ");
                strcpy(b, "WELCOME TO CHATSUPREMe V1.00 RELOADED! ");
                printf("Para iniciar o chat insira seu nome: ");
                scanf("%s", c);
                system("clear");
                strcat(a, c);
                strcat(b, c);
                printf("%s\n%s\n", a, b);
                break;
            case 2:
                strcpy(a, "Hi ");
                strcpy(b, "WELCOME TO CHATSUPREMe V1.00 RELOADED! ");
                printf("Insert your name to start chatting: ");
                scanf("%s", c);
                system("clear");
                strcat(a, c);
                strcat(b, c);
                printf("%s\n%s\n", a, b);
                break;
            default:
                printf("INPUT NOT REGISTRED BOI TRY AGAIN!");
                break;
        }
    if(idioma==1) // ESCOLHA EM PT
    {
        while(1) //MENU PRINCIPAL PT EM LOOP COM CONTINUEM ARRUMAR!!
        {
            int di=0;
            printf("Opções para solucionar sua duvida/problema");
            printf("\n1 - Horas e data. \n2 - Calculador de IMC. \n3- BOT AVANÇADO. \n4- Ex de vetor. \n5- Exit.\n");
            printf("Input: ");
            scanf("%d", &di); //escolha do numero
            clear_input();
            printf("\e[1;1H\e[2J");
            switch(di)
            {
                case 1: //MOSTRA O TEMPO
                    tempo();
                    printf("Precione uma tecla para continuar...");
                    break;
                case 2: //CALCULO IMC
                    imcc();
                    printf("Precione uma tecla para continuar...");
                    clear_input();
                    break;
                case 3: //SUPER BOT TRABALHAR POR ULTIMO ESSE COMANDO
                    bota();
                    printf("Precione uma tecla para continuar...");
                    clear_input();
                    break;
                case 4:
                    flg();
                    printf("Precione uma tecla para continuar...");
                    clear_input();
                    break;
                case 5:
                    return 0;
                default:
                    printf("Opção inválida");
                    printf("Precione uma tecla para continuar...");
                    clear_input();
                    break;
            }
            getchar();
        }
    }
    else //ENGLISH VERSION HACK
    {
        while(1) //MENU PRINCIPAL PT EM LOOP COM CONTINUEM ARRUMAR!!
        {
            int di=0;
            printf("Select the script that will solve your major problems of life thx later bruh.");
            printf("\n1 - Date and hours. \n2 - IMC calculator. \n3- BOT ADVANCED. \n4- Ex vector \n5- Exit.\n");
            printf("Input: ");
            scanf("%d", &di); //escolha do numero
            clear_input();
            printf("\e[1;1H\e[2J");
            switch(di)
            {
                
                case 1: //MOSTRA O TEMPO
                    tempoe();
                    printf("Press a key to continue...");
                    break;
                case 2: //CALCULO IMC
                    imcce();
                    printf("Press a key to continue...");
                    clear_input();
                    break;
                case 3: //SUPER BOT TRABALHAR POR ULTIMO ESSE COMANDO
                    botae();
                    printf("Press a key to continue...");
                    clear_input();
                    break;
                case 4:
                    flge();
                    printf("Press a key to continue...");
                    clear_input();
                    break;
                case 5:
                    return 0;
                default:
                    printf("CHOOSE A LEGIT OPTION BRUH\n");
                    printf("Press a key to continue...");
                    clear_input();
                    break;
            }
            getchar();
        }
    }
    return 0;
}
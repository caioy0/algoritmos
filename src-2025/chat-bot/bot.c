#include "bot.h"
#include <time.h>
#include <stdbool.h>
#include <string.h>

//Clear para reset do loop.
void clear_input(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

//calculo do imc com mensagem em pt e ingles.
void calculate_imc(int language){
    float weight, height, imc;
    const char* weight_message;
    const char* imc_message;
    
    //Pt
    if (language == 1) {
        printf("Para calcular o IMC, insira seu peso (em kg): ");
        scanf("%f", &weight);
        printf("Agora, insira sua altura (em metros): ");
        scanf("%f", &height);
        weight_message = "Cuidado! Você está abaixo do peso normal. Recomendo consultar um médico.";
        imc_message = "Está saudável em relação ao peso. Continue assim!";
    } 
    //Ingles
    else {
        printf("To calculate your IMC, enter your weight (in kg): ");
        scanf("%f", &weight);
        printf("Now, enter your height (in meters): ");
        scanf("%f", &height);
        weight_message = "BE CAREFUL! Your weight is below the normal range based on your height. Consult a doctor to address the low weight.";
        imc_message = "VERY GOOD! You are healthy.";
    }
    imc = weight / (height * height);
    printf("Seu IMC é: %.2f\n", imc);
    if (imc < 18.5) {
        printf("%s\n", weight_message);
    } 
    else {
        printf("%s\n", imc_message);
    }
}

//Mostra dia data e horas em pt e ingles.
void show_time(int language) {
    time_t now = time(NULL);
    struct tm* local = localtime(&now);
    char buffer[80];

    //Portugues
    if (language == 1) {
        strftime(buffer, 80, "A data atual é %A, %d de %B de %Y", local);
        printf("A hora atual é: %02d:%02d:%02d\n", local->tm_hour, local->tm_min, local->tm_sec);
    } 
    //Ingles
    else {
        strftime(buffer, 80, "Today's date is %A, %d %B %Y", local);
        printf("Current time is: %02d:%02d:%02d\n", local->tm_hour, local->tm_min, local->tm_sec);
    }
    printf("%s\n", buffer);
}

//Bot com getchar esse aqui é next lvl.
void advanced_bot(int language){
    const char* loop_message;
    const char* soviet_message;

    if (language == 1) {
        loop_message = "Loop é usado quando é necessário executar um bloco de código várias vezes. Você pode usar os comandos while, for e do-while para isso.";
        soviet_message = "Hmm... não sei.";
    } 
    else {
        loop_message = "Loop is used when you need to execute a block of code multiple times. You can use while, for, and do-while loops for that.";
        soviet_message = "Hmm... I don't know.";
    }

    char input[100];
    printf(language == 1 ? "\nQual é o assunto? " : "\nWhat's the subject? ");
    scanf(" %[^\n]", input);

    if (strstr(input, "loop") != NULL) {
        printf("%s\n", loop_message);
    } 
    else if (strstr(input, "soviet") != NULL) {
        printf(language == 1 ? "Союз нерушимый республик свободных Сплотила навеки Великая Русь. Да здравствует созданный волей народов Единый, могучий Советский Союз!\n" : "BRUH, GO WATCH SOME PEARL JAM VIDEOCLIP OR LIVE.\n");
    } 
    else {
        printf("%s\n", soviet_message);
    }
}

//Exercicio de vetors (array)
void search_number(int language) {
    int numbers[] = {3, 7, 4, 1, 9, 2, 5, 8, 3, 6};
    int search, i;
    bool found = false;

    printf(language == 1 ? "Entre com o número procurado: " : "Input the number you're searching for: ");
    scanf("%d", &search);

    for (i = 0; i < 10; i++) {
        if (numbers[i] == search) {
            printf(language == 1 ? "O número foi encontrado no índice %d\n" : "The number was found at index %d\n", i);
            found = true;
        }
    }
    if (!found)
        printf(language == 1 ? "Este número não existe\n" : "This number does not exist\n");
}
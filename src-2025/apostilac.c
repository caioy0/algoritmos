#include <stdio.h>
int main(int argc, char *argv[])
{
    printf("Voce passou %d parametros. \n\n", argc);
    printf("O primeiro parametro passado e %s \n\n", argv[1]);
    getchar();
    return 10;
}
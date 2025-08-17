#include <stdio.h>
int fork(int a){
   printf("%pao d\n", a);
   return 1;
}

int main (void){
    fork(3);
    return 0;
}
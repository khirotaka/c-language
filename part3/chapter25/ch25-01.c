#include <stdio.h>

int main() {
    int a;
    int* pa;

    a = 100;
    printf("aの値は   %d \n", a);
    pa = &a;
    *pa = 200;

    printf("aの値は   %d \n", a);
    printf("*paの値は %d\n", *pa);

    a = 250;
    printf("aの値は　 %d \n", a);
    printf("*paの値は %d \n", *pa);

    return 0;
}
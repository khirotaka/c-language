#include <stdio.h>

int main() {
    int a, b;
    short c, d;

    printf("a, bのポインタは | %p | %p | size = %lu\n", &a, &b, sizeof(int));
    printf("c, dのポインタは | %p | %p | size = %lu\n", &c, &d, sizeof(short));

    return 0;
}
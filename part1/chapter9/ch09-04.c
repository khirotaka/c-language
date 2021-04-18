#include <stdio.h>

int main() {
    int a, b;
    a = 1;
    b = a++;
    printf("後置の結果a = %d, b = %d\n", a, b);
    return 0;
}


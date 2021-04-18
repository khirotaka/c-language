#include <stdio.h>

int main() {
    int a = 5, b = 5;
    printf("実行前 a = %d, b = %d \n ", a, b);
    ++a;
    --b;
    printf("実行後 a = %d b = %d\n", a, b);
    return 0;
}


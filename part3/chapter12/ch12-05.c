#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int r;
    int in = 0;
    srand(time(NULL));
    r = rand() % 10;
    printf("数字(1桁)を当てて下さい ");
    scanf("%d", &in);
    if (r == in) {
        printf("当たり！\n");
    }
    return 0;
}


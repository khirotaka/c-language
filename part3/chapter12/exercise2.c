#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int r;
    int value;
    srand(time(NULL));
    r = (rand() % 10) + 1;
    
    printf("数字を当てて下さい ");
    scanf("%d", &value);

    if (r == value) {
        printf("正解\n");
    } else {
        printf("不正解\n");
    }
    return 0;
}



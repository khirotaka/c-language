#include <stdio.h>
#include <stdlib.h>

int main() {
    int vote[10] = {0};
    int age, loop;
    do {
        printf("年齢を入力して下さい ");
        scanf("%d", &age);
        if (100 <= age) {
            age = 99;
        }
    } while (++vote[age / 10] < 10);

    for (loop = 0; loop < 10; ++loop) {
        printf("%d 才台 %d件です \n", loop * 10, vote[loop]);
    }

    return 0;
}
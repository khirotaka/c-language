#include <stdio.h>

#define TSUUJO 0
#define URUUDOSHI 1


int main() {
    int array[2][12] = {
        {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
        {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    };

    printf("閏年2月の日数は %d\n", array[URUUDOSHI][1]);
    return 0;
}


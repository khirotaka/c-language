#include <stdio.h>

#define SINGLE 0
#define MULTI 1


int main() {
    int high_score[2][3];

    high_score[SINGLE][0] = 10;
    high_score[SINGLE][1] = 40;
    high_score[SINGLE][2] = 14;

    high_score[MULTI][0] = 10;
    high_score[MULTI][1] = 40;
    high_score[MULTI][2] = 14;

    printf("ハイスコア一覧\n");
    printf("Single Play %d \t %d \t %d \t\n", 
            high_score[SINGLE][0], high_score[SINGLE][1], high_score[SINGLE][2]);

    printf("Multi Play  %d \t %d \t %d \t\n", 
            high_score[MULTI][0], high_score[MULTI][1], high_score[MULTI][2]);

    return 0;
}

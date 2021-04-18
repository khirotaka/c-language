#include <stdio.h>
#define SINGLE 0
#define MULTI 1

int main() {
    int high_score[2][3] = {
        {5000, 4600, 4200},
        {5500, 5100, 4800},
    };
    
    printf("ハイスコア一覧\n");
    printf("Single Play %d \t %d \t %d \t\n", 
            high_score[SINGLE][0], high_score[SINGLE][1], high_score[SINGLE][2]);

    printf("Multi Play  %d \t %d \t %d \t\n", 
            high_score[MULTI][0], high_score[MULTI][1], high_score[MULTI][2]);
    
    return 0;
}

#include <stdio.h>

int main() {
    int high_score[2][3];

    high_score[0][0] = 5000;
    high_score[0][1] = 4600;
    high_score[0][2] = 4200;
    high_score[1][0] = 5500;
    high_score[1][1] = 5100;
    high_score[1][2] = 4800;

    printf("ハイスコア一覧\n");
    printf("シングルプレイ %d \t %d \t %d \n",
            high_score[0][0],
            high_score[0][1],
            high_score[0][2]);

    printf("マルチプレイ   %d \t %d \t %d \n",
            high_score[1][0],
            high_score[1][1],
            high_score[1][2]);

    return 0;
}

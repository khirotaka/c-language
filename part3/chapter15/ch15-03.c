#include <stdio.h>

int main() {
    int card[4][13];
    int number, suite;
    int in_num, in_suite;
    for (suite = 0; suite < 4; ++suite) {
        for (number = 0; number < 13; ++number ) {
           card[suite][number] = number + 1;
        }
    }

    printf("マーク (ハート1, スペード2, クラブ3, ダイヤ4) ? ");
    scanf("%d", &in_suite);
    printf("番号は？");
    scanf("%d", &in_num);

    printf("数は %d \n", card[in_suite - 1][in_num - 1]);
    return 0;
}
        


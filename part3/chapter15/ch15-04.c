#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define HEART 0
#define SPADE 1
#define DIAMOND 2
#define CLUB 3

int main() {
    int cards[4 * 13];
    int number, suite;
    int card_select;
    int count;
    int r_1, r_2;
    int save;

    count = 0;
    for (suite = 0; suite < 4; ++suite) {
        for (number = 0; number < 13; ++number) {
            cards[count] = number + 1 + 100 * suite;
            ++count;
        }
    }

    srand(time(NULL));
    for (count = 0; count < 500; ++count) {
        r_1 = rand() % (13 * 4);
        r_2 = rand() % (13 * 4);
        save = cards[r_1];
        cards[r_1] = cards[r_2];
        cards[r_2] = save;

    }

    printf("何枚目？");
    scanf("%d", &card_select);
    printf("%d枚数は ", card_select);

    --card_select;

    if (card_select < 0 || 13 * 4 <= card_select) {
        printf("入力値オーバ \n");
        return 0;
    }
    if (cards[card_select] / 100 == HEART) {
        printf("ハート");
    } 
    else if (cards[card_select] / 100 == SPADE) {
        printf("スペード");
    }
    else if (cards[card_select] / 100 == DIAMOND) {
        printf("ダイヤ");
    }
    else if (cards[card_select] / 100 == CLUB) {
        printf("クラブ");
    }
    
    printf("の %d \n", cards[card_select] % 100);
    return 0;
}
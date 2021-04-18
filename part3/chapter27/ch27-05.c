#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    char suite_name[20];
    int value;
} CARD;

#define HEART 0
#define SPADE 1
#define DIAMOND 2
#define CLUB 3
#define JOKER_VALUE -1


int input_number(char* msg);
CARD* create_cards(int jokers);
void shuffle_card(CARD* pcard, int jokers);
void show_top_cards(CARD* pcard);


int main() {
    int jokers = input_number("ジョーカーの枚数"); 
    CARD* pcard = create_cards(jokers);
    if (NULL == pcard) {
        printf("malloc error\n");
        return 0;
    }
    shuffle_card(pcard, jokers);
    show_top_cards(pcard);
    free(pcard);
    return 0;
}

void shuffle_card(CARD* pcard, int jokers) { 
    int count, r1, r2;
    CARD save;
    srand(time(NULL));
    for (count = 0; count < 500; ++count) {
        r1 = rand() % (13 * 4 + jokers);
        r2 = rand() % (13 * 4 + jokers);
        save = *(pcard + r1);   // pcardの先頭ポインタ + r1 した時の値
        *(pcard + r1) = *(pcard + r2);
        *(pcard + r2) = save;
    }
}

int input_number(char* msg) {
    int num = 0;
    printf("%s を数字で入力して下さい。 ", msg);
    scanf("%d", &num);
    return num;
}

void display_card(CARD* pcard) { 
    if (JOKER_VALUE == pcard->value) {
        printf("ジョーカー\n");
    }
    else {
        printf("%s %02d\n", pcard -> suite_name, pcard->value);
    }
}

void show_top_cards(CARD* pcard) {
    int number = input_number("表示枚数");
    int counter;
    for (counter = 0; counter < number; ++counter) {
        display_card(pcard + counter);
    }
}

void set_card(CARD* pcard, int suite, int value) {
    switch (suite) {
        case HEART:
            strcpy(pcard->suite_name, "ハート");
            break;
        case SPADE:
            strcpy(pcard->suite_name, "スペード");
            break;
        case DIAMOND:
            strcpy(pcard->suite_name, "ダイヤ");
            break;
        case CLUB:
            strcpy(pcard->suite_name, "クラブ");
            break;
    }
    pcard->value = value;
}

CARD* create_cards(int jokers) {
    int suite, value;
    CARD* pcard = (CARD*)malloc(sizeof(CARD) * (13 * 3 + jokers));  // 指定したサイズのメモリを確保、先頭のポインタを格納.
    CARD* ptr;
    if (NULL == pcard) { 
        return NULL;
    }
    ptr = pcard;
    for (suite = 0; suite < 4; ++suite) {
        for (value = 0; value < 13; ++value) {
            set_card(ptr, suite, value);
            ++ptr;  // ポインタを加算すれば先頭からポインタが移動する。
        }
    }
    for (suite = 0; suite < jokers; ++suite) {
        ptr->value = JOKER_VALUE;
        ++ptr;
    }

    return pcard;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int count = 0, r, in;
    srand(time(NULL));
    while (count < 10) {
        r = rand() % 10;
        printf("数字(1桁) を当てて下さい ");
        scanf("%d", &in);
        if (in == r) {
            printf("当たりました！終了します \n");
            break;
        }
        else {
            printf("ハズレです \n");
        }
        count = count + 1;
    }
    if (10 == count) {
        printf("GAME OVER!!\n");
    }
    return 0;
}

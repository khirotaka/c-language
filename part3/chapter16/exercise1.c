#include <stdio.h>
#include <stdlib.h>

int main() {
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int month, day;
    do {
        printf("月日を入力して下さい \n");
        scanf("%d", &month);
        scanf("%d", &day);
    } while (((month < 1) || (month > 12)) || ((day < 1) || (day > days[month - 1])));

    printf("%d 月 %d 日 OKです。\n", month, day);
    return 0;
}
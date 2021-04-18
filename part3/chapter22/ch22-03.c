#include <stdio.h>

int get_global();

static int glo_var = 10;

int main() {
    printf("取得 %d ファイル %d \n", get_global(), glo_var);
    glo_var = 20;
    printf("取得 %d ファイル %d \n", get_global(), glo_var);

    return 0;
}
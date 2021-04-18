#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char name [20];
    int r;
    int in;
    srand(time(NULL));
    r = rand() % 10;
    printf("名前は？ 10バイト以下 ");
    scanf("%19s", name);
    printf("数字を当てて下さい (1桁) ");
    scanf("%d", &in);
    if (in == r && strlen(name) <= 10) {
        printf("当たりです %s さん \n", name);
    }
    else if (in != r && strlen(name) <= 10) {
        printf("ハズレです。 %sさん \n", name);
    } 
    else {
        printf("名前が長すぎませんか？");
    }
    return 0;
}




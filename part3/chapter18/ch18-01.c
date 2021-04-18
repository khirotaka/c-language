#include <stdio.h>
#include <string.h>

int main() {
    char in_name[20];
    printf("名前を入力して下さい ");
    scanf("%19s", in_name);
    if (0 == strcmp("taro", in_name)) {
        printf("毎度！\n");
    }
    else {
        printf("%s さん　こんにちは！！\n", in_name);
    }
    return 0;
}
#include <stdio.h>
int main() {
    char ch = '\0';
    printf("y/nを入力し下さい: ");
    scanf("%c", &ch);
    if ('y' == ch) {
        printf("yを入力しました\n");

    }
    return 0;
}

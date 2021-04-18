#include <stdio.h>
int main() {
    char ch = '\0';
    printf("a/b/cを入力して下さい ");
    scanf("%c", &ch);
    switch (ch) {
    case 'a':
        printf("aが入力されました。");
        break;
    case 'b':
        printf("bが入力されました");
        break;
    case 'c':
        printf("cが入力されました ");
        break;
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
    char word[20];
    do {
        printf("5文字以上の英単語を入力して下さい: ");
        scanf("%s", word);
    } while (strlen(word) < 5);

    printf("入力された単語は %s です。\n", word);
    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
    char buff[100];
    char word[31];

    do {
        printf("単語入力 ");
        scanf("%s", word);

        if (strcmp(word, "bye!") == 0) {
            break;
        } 
        if (100 <= strlen(buff) + strlen(word) + 1 + 1){
            break;
        }

        strcat(buff, " ");
        strcat(buff, word);

        printf("現在の文字列 %s %d \n", buff, strlen(buff));

    } while(1);

    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
    char message[20];
    strcpy(message, "Hello ");
    printf("文字列 %s \n", message);
    strcat(message, "Yamada ");
    printf("文字列 %s \n", message);
    strcat(message, "Taro ");
    printf("文字列 %s \n", message);
    return 0;
}
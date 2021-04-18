#include <stdio.h>
#include <string.h>


int main() {
    char message[20];
    int len;
    printf("単語を入力して下さい: ");
    scanf("%19s", message);
    len = strlen(message);
    printf("入力した文字列は %s 長さは %d \n", message, len);
    return 0;
}


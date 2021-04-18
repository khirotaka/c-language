#include <stdio.h>
#include <ctype.h>

int main() {
    char message[20] = "Hello C language";
    char upper[20];
    char lower[20];
    int loop = 0;
    do {
        upper[loop] = toupper(message[loop]);
        lower[loop] = tolower(message[loop]);
    } while (0 != message[loop++]);

    printf("元文字列 %s \n", message);
    printf("Upeer文字列 %s \n", upper);
    printf("lower 文字列 %s \n", lower);

    return 0;
}
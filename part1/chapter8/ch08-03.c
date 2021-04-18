#include <stdio.h>

int main() {
    char name[32];
    printf("Your name?: ");
    scanf("%s", name);
    printf("Hello! %s", name);
    return 0;
}


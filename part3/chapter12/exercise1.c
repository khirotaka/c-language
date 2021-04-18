#include <stdio.h>

int main() {
    float size = 0.0;
    printf("あなたの身長は？ ");
    scanf("%f", &size);

    if (size >= 100.0 && size < 180) {
        printf("OK\n");
    } else {
        printf("ERROR\n");
    }
    return 0;
}


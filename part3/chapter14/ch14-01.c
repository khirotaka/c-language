#include <stdio.h>

int main() {
    int count = 0;
    while (count < 10) {
        printf("  %d 回目のループ\n", count);
        ++count;
    }
    return 0;
}

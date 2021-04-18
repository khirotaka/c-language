#include <stdio.h>

int get_max(int val1, int val2) {
    if (val1 < val2) {
        return val2;
    } 
    else {
        return val1;
    }
}

int main() {
    int a = 40;
    int b = 30;

    int result = get_max(a, b);
    printf("最大値は %d でした。\n", result);

    return 0;
}
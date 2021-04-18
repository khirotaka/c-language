#include <stdio.h>

int main() {
    int values[6] = {7, 15, 4, 31, 6, 25};
    int count = 0;
    int max_value = values[0];

    while (count < 6) {
        if (max_value < values[count]) {
            max_value = values[count];
        }
        ++count;
    }
    printf("最大値は %d \n", max_value);
    return 0;
}


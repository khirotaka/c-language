#include <stdio.h>

int main() {
    int arr[10] = {1, 3, 5, 7, 9, 11, 15, 17, 19};
    int loop;

    for (loop = 9; loop > 0; --loop) {
        arr[loop] = arr[loop - 1];
    }
    arr[0] = 0;
    
    for (loop = 0; loop < 10; ++loop) {
        printf("%d ", arr[loop]);
    }

    return 0;
}

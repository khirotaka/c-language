#include <stdio.h>

int main() {
    int arr[20];
    int count, in;

    for (count = 0; count < 20; ++count) {
       arr[count] = count * 2;
    }

    printf("要素番号は？ ");
    scanf("%d", &in);
    if (in < 20) {
       printf("指定要素 (%d) の数は %d \n", in, arr[in]);
    }
    else {
        printf("入力値が範囲オーバ \n");
    }
    return 0;
}
               


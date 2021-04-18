#include <stdio.h>

int main () {
    int arr[3] = {0, 0, 0};
    int d = 0;
    int loop;
    while (-1 != d)
    {
        printf("コードを入力して下さい(-1で終了) ");
        scanf("%d", &d);
        switch (d) {
            case 1:
            case 4:
            case 7:
                ++arr[0];
                break;
            case 2:
            case 5:
                ++arr[1];
                break;
            case 3:
            case 6:
                ++arr[2];         
                break;
            case -1:
                printf("終了します ^\n");
                break;
            default:
                printf("対象のコードではありません \n");
                break;
        }
    }

    for (loop = 0; loop < 3; ++loop ) {
        printf("%d 番目 %d \n", loop, arr[loop]);
    }
    return 0;

}
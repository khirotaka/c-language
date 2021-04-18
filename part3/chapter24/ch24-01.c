#include <stdio.h>

typedef struct {
    int hour;
    int minute;
    int second;
} MY_TIME;

int input_value(char msg[]);

int main() {
    MY_TIME time[3];
    int loop;
    for (loop = 0; loop < 3; ++loop) {
        printf("%d 番目のアラーム設定\n", loop + 1);
        time[loop].hour = input_value("時間");
        time[loop].minute = input_value("分");
        time[loop].second = input_value("秒");

    }
    for (loop = 0; loop < 3; ++loop) {
        printf("%d 番目のアラーム %d 時間 %d 分 %d 秒\n", loop, time[loop].hour, time[loop].minute, time[loop].second);
    }
    return 0;
}

int input_value(char msg[]) {
    int in;
    printf("%s を入力して下さい: ", msg);
    scanf("%d", &in);
    return in;
}


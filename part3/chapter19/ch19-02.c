#include <stdio.h>

int main() {
    char name[265];
    int age, sum_age = 0;
    double tall, sum_tall = 0.0;
    int count = 0;
    FILE* fp;

    fp = fopen("data.txt", "r");
    if (fp != NULL) {
        while (3  == fscanf(fp, "%s %d %lf", name, &age, &tall)) {
            printf("読み出し 名前=%s 年齢=%d 身長=%f\n", name, age, tall);
            sum_age += age;
            sum_tall += tall;
            ++count;
        }
        if (fclose(fp) != 0) {
            printf("ファイルのクローズに失敗しました。\n");

        }
        printf("データ件数: %d 平均年齢: %f 平均身長: %f\n", count, (double)sum_age / count, (double)sum_tall / count);

    }
    return 0;
}
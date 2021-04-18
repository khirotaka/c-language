#include <stdio.h>

int main() {
    float flt = 0.0;
    printf("身長 (cm) を入力して下さい。 ");
    scanf("%f", &flt);
    if (150 <= flt) {
        printf("%.3f は 150cm以上です。\n", flt);
    }
    return 0;
}


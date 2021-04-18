#include <stdio.h>

int main() {
    char strings[256];
    printf("文字列を入力して下さい: ");
    scanf("%s", strings);

    int i;

    int n_numeric = 0;
    int n_boin = 0;
    int n_others = 0;

    for (i = 0; strings[i] != 0; ++i) {
        switch (strings[i]) {
            case 'a':
            case 'i':
            case 'u':
            case 'e':
            case 'o':
                ++n_boin;
                break;

            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                ++n_numeric;
                break;
            
            default:
                ++n_others;
                break;
        }
    }
    printf("数字: %d\n", n_numeric);
    printf("母音: %d\n", n_boin);
    printf("その他: %d\n", n_others);

    return 0;
}
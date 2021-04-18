#include <stdio.h>

int main(int argc, char* argv[]) {
    int loop;
    if (1 >= argc) {
        printf("簡易ヘルプ \n");
        printf("ch20-03 オプション文字列 [オプション文字列] ... \n");
        printf("オプション文字列は最低1つ指定してください\n");
        return -1;
    }
    
    for (loop = 1; loop < argc; ++loop) {
        printf("メインの処理: %d(%s) \n", loop, argv[loop]);
    }
    return 0;
}

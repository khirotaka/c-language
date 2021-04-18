#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
    int loop = 0;
    while (loop < argc) { 
        printf("%d番目のコマンドライン引数は %s 長さは %d\n", loop + 1, argv[loop], strlen(argv[loop]));
        ++loop;
    }
    return 0;
}
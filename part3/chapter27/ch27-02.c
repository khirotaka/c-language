#include <stdio.h>

int main() {
    int value = 1;
    int* pvalue = &value;
    char* ptr = (char*)pvalue;
    int loop;
    printf("char size = %lu\n", sizeof(char));
    for (loop = 0; loop < sizeof(int); ++loop) {
        printf("%02x ", *(ptr + loop));
    }
    printf("\n");
    return 0;
}
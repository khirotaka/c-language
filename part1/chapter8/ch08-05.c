#include <stdio.h>
#include <stdlib.h>


int main() {
    char num_str[20];
    double val;
    printf("数字を入力して下さい: ");
    scanf("%19s", num_str);
    val = atof(num_str);

    printf("入力文字列は %s で、数値は %f \n",
            num_str, val);
    return 0;
}


#include <stdio.h>
#include <time.h>

int main() {
    time_t t = time(NULL);
    printf("ctime(time()): %s \n", ctime(&t));
    return 0;
}
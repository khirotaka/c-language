#include <stdio.h>
#include <time.h>

int main() {
    time_t start, end;
    int outer, inner;

    start = time(NULL);
    for (outer = 0; outer < 50000; ++outer) {
        for (inner = 0; inner < 50000; ++inner) {
            ;
        }
    }
    end = time(NULL);
    printf("LAP Time: %f\n", difftime(end, start));
    return 0;
}
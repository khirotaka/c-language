#include <stdio.h>
int main() {
    int values[6] = {7, 15, 4, 31, 6, 28};
    int comp_index;
    int max_value, max_index;
    int base_index;
    int save;

    for (base_index = 0; base_index < 6; ++base_index) {
        max_index = base_index;
        max_value = values[base_index];
        for(comp_index = base_index; comp_index < 6; ++comp_index) {
            if(max_value < values[comp_index]) {
                max_value = values[comp_index];
                max_index = comp_index;
            }
        }
        save = values[base_index];
        values[base_index] = max_value;
        values[max_index] = save;
    }

    for (base_index = 0; base_index < 6; ++base_index) {
        printf("%d ", values[base_index]);
    }
    printf("\n");
    for (base_index = 5; 0 <= base_index; --base_index) {
        printf("%d ", values[base_index]);
    }
    printf("\n");
    return 0;
}

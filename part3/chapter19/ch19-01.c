#include <stdio.h>

int main() {
    char name[256];
    int age;
    double tall;
    FILE* fp;

    printf("name: ");
    scanf("%s", name);
    printf("Age: ");
    scanf("%d", &age);
    printf("Tall: ");
    scanf("%lf", &tall);

    fp = fopen("data.txt", "a");
    if (NULL != fp) {
        fprintf(fp, "%s %d %f\n", name, age, tall);
        fflush(fp);
        if (0 != fclose(fp)) {
            printf("Faild to close file. \n");
        }
    }
    return 0;
}
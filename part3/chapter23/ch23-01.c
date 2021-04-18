#include <stdio.h>

struct point {
    int x;
    int y;
};

int calc_area(struct point pt1, struct point pt2) {
    int width = (pt1.x < pt2.x ? pt2.x - pt1.x : pt1.x - pt2.x);
    int height =(pt1.y < pt2.y ? pt2.y - pt1.y : pt1.y - pt2.y); 

    return width * height;
}

int main() {
    struct point left_top, right_bottom;
    left_top.x = 30;
    left_top.y = 20;

    right_bottom.x = 150;
    right_bottom.y = 70;
    printf("Area %d \n", calc_area(left_top, right_bottom));
    return 0;
}
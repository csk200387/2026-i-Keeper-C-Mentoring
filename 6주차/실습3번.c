#include <stdio.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} Point;

int main() {
    Point a = {10.0, 15.0};
    Point b = {20.0, 20.0};

    printf("%.2f %.2f\n", a.x, a.y);
    printf("%.2f %.2f\n", b.x, b.y);

    float res = sqrt(pow(b.x-a.x, 2.0) + pow(b.y-a.y, 2.0));
    printf("%.2f\n", res);
}
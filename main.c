#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    if (a > b && a > c && b > c)
        printf("%d\n", b);

    if (b > c && b > a && a > c)
        printf("%d\n", a);

    if (c > a && c > b && b > a)
        printf("%d\n", b);

    if (a > b) {
        if (a > c) {
            if (b > c)
                printf("%d\n", b);
            else
                printf("%d\n", c);
        }

        if (b > c) {
            if ()
        }
        }
    }
}
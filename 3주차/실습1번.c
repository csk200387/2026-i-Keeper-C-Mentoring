#include <stdio.h>

int main() {
    // n을 입력받고 "*"을 n개 출력하기. for문을 이용할 것
    // "*"은 한 줄로 출력할 것 -> \n 안 넣으면 됨.

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        // for 문 넣기
            printf("*");
        
        printf("\n");
    }

    printf("\n");
}
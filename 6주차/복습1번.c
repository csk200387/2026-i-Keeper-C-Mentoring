// 컴파일 및 실행 명령어 : gcc main.c -o main ; ./main
#include <stdio.h>

int main(void) {
    int A, B;
    scanf("%d %d", &A, &B);
    for (int i = A; i <= B; i++) {
        printf("%d\n", i);
    }
}
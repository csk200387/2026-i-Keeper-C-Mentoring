// 컴파일 및 실행 명령어 : gcc main.c -o main ; ./main
#include <stdio.h>


int fib(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    return fib(n-1) + fib(n-2);
}

int main(void) {
    int n;
    scanf("%d", &n);

    printf("피보나치 %d 번째 항은 %d 입니다.\n", n, fib(n));
}
// 컴파일 및 실행 명령어 : gcc main.c -o main ; ./main
#include <stdio.h>

int main(void) {
    int k, n, m;

    scanf("%d %d %d", &k, &n, &m);
    
    if (k*n > m) {
        printf("%d\n", k*n-m);
    } else {
        printf("0\n");
    }
}


/*
입력 예시
150 4 300
출력 예시
300
*/
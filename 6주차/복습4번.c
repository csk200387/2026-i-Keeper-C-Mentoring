// 컴파일 및 실행 명령어 : gcc main.c -o main ; ./main
#include <stdio.h>

int main(void) {
    int T;
    scanf("%d", &T);

    int A_res = (T/300);
    T -= A_res*300;

    int B_res = (T/60);
    T -= B_res*60;

    int C_res = (T/30);
    T -= C_res*30;

    if (T > 0) {
        printf("-1\n");
    } else {
        printf("%d %d %d\n", A_res, B_res, C_res);
    }
}


/*
입력 예시
180
출력 예시
0 3 0

입력 예시
179 -> 2분 59
출력 예시
-1
*/
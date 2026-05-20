// 컴파일 및 실행 명령어 : gcc main.c -o main ; ./main
#include <stdio.h>

int main(void) {
    int n;
    int A = 0;
    int B = 0;
    char string[1000];

    scanf("%d", &n);
    scanf("%s", string);

    for (int i = 0; i < n; i++) {
        if(string[i] == 'A')
            A++;
        else
            B++;
    }
    if (A > B)
        printf("A\n");
    else if (B > A)
        printf("B\n");
    else
        printf("0");
}
/*
입력 예시
8
ABBABABA

출력 예시
0
*/
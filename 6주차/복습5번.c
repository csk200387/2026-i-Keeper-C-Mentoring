// 컴파일 및 실행 명령어 : gcc main.c -o main ; ./main
#include <stdio.h>

int main(void) {
    int s, n, res;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        char str[1000];
        scanf("%d %s", &s, str);
        
        for (int i = 0; i < s/2; i++) {
            if (str[i] != str[s-i-1]) {
                res = 0;
                break;
            }
        }

        if (res == 0) {
            printf("No\n");
        } else {
            printf("Yes\n");
        }
    }
}


/*
입력
2
5 ABCBA
10 1234567890
출력

Yes
Yes
No
*/

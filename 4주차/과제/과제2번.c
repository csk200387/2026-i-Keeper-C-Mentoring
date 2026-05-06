#include <stdio.h>

int main() {
    // 입력받은 문장의 대소문자를 반전하여 출력하기.

    char string[100];

    scanf("%[^\n]s", string);
    for (int i = 0; i < 100; i++) {
        if (string[i] == '\0') {
            break;
        }

        if ('A' <= string[i] && string[i] <= 'Z') {
            printf("%c", string[i] + 32);
        } else if ('a' <= string[i] && string[i] <= 'z') {
            printf("%c", string[i] - 32);
        } else {
            printf("%c", string[i]);
        }
    }
    printf("\n");
}
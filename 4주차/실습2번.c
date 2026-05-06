#include <stdio.h>

int main() {
    // 문자열을 입력받고 그대로 출력하는 코드 작성하기.

    char string[100];

    scanf("%[^\n]s", string);

    printf("%s\n", string);
}

// enter => \n
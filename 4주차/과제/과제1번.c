#include <stdio.h>

int main()
{
    // 문자열의 모음을 .으로 변환하여 출력하기. (A E I O U)
    // 모음의 아스키코드 값을 알아야 함
    // 대소문자 구분에 주의할 것 (모음의 대문자 소문자의 코드값을 모두 처리해야 함)

    // 1. 문장을 입력받음
    // 2. 문장을 하나씩 읽으며 모음인지 판단
    // 3. 모음이면 .으로 출력하기

    char string[100];

    scanf("%[^\n]s", string);

    for (int i = 0; i < 100; i++)
    {
        if (string[i] == '\0')
        {
            break;
        }
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' || string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U')
        {
            printf(".");
        }
        else
        {
            printf("%c", string[i]);
        }
    }
    printf("\n");
}
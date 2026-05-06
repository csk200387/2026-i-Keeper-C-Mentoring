#include <stdio.h>

int main() {
    // 문자열의 문자 빈도수 알아보기
    
    char string[100];
    int array[10] = {0,}; // 인덱스 0 => 0

    scanf("%s", string);

    for (int i = 0; i < 100; i++) {
        if (string[i] == '\0'){
            break;
        }
    
        array[string[i]-48]++;
    }
    printf("\n");

    for(int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
}
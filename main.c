// 컴파일 및 실행 명령어 : gcc main.c -o main ; ./main
#include <stdio.h>

typedef struct {
    char name[16];
    int hp;
} Player;

int main(void) {
    Player hero = {"CSK", 100};
    hero.hp -= 10;
    printf("%s %d\n", hero.name, hero.hp);
}
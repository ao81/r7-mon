#include <stdio.h>

int main(void) {
        char ch;
        printf("小文字を入力してください: ");
        scanf("%c", &ch);

        if('a' <= ch && ch <= 'z') {
                ch = ch - ('a' - 'A');
                printf("=> %c\n", ch);
        } else {
                printf("ERROR!\n");
        }
        return 0;
}

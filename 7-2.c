#include <stdio.h>

int main(void) {
        int b[10] = {}, i, n;
        printf("０～９の値を１０回入力してください。\n");
        for(i = 0; i < 10; i++) {
                scanf("%d", &n);
                b[n]++;
        }

        for(i = 0; i < 10; i++) {
                printf("b[%d] = %d\n", i, b[i]);
        }
        return 0;
}

#include <stdio.h>

int main(void) {
    int i, n, sum;
    
    for(i = 0, i < 3; i++) {
        printf("Nの値は？ ");
        scanf("%d", &n);
        for(sum = 0; n != 0; n--) {
            sum += n;
        }
        printf("合計 = %d", sum);
    }
    return 0;
}
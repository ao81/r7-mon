#include <stdio.h>

int main(void) {
	int a[10], i, sum = 0;

	for (i = 0; i < 10; i++) {
		printf("[%d] = ", i + 1);
		scanf("%d", &a[i]);
		sum += a[i];
	}
	printf("合計 = %d, 平均 = %d\n", sum, sum / 10);
	
	return 0;
}

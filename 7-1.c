#include <stdio.h>

int main(void) {
	int a[10], sum = 0, ave;

	for (int i = 0; i < 10; i++) {
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < 10; i++) sum += a[i];
	ave = sum / 10;

	printf("\n合計: %d\n平均: %d\n", sum, ave);

	return 0;
}

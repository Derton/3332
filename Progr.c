#include <stdio.h>
void arif_progr(double a, double b) {
	int n = 0;
	double sum = a, yer = a;
		printf("Арифметическая програссия a0 = %lg, b = %lg\nУкажите n = ", a, b);
		scanf("%d", &n);
			for (int i = a; i < n; a + b) {
				a = a + b;
				printf("a[%d] = %lg\n", i, a);
				sum = sum + a;
				yer = yer * a;
				return sum, yer;
			}
			printf("Сумма %d членов прогрессии = %lg\n", n + 1, sum);
			printf("Произведение %d членов прогрессии = %lg\n", n + 1, mult);
			return 0;
}
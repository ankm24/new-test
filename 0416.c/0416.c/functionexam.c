#include <stdio.h>

// 1.
int array(n) {
	for (int i = 1; i <= n; i++) {
	printf("%d+", i);
	}
}
int Sum(n) {
	int sum = 0;
	for (int j = 1; j <= n; j++) {
		sum = sum + j;
	}
	return sum;
}


int main() {
	int n;

	scanf("%d", &n);

	array(n);

	int sum = Sum(n);

	printf("\ntotal=%d", sum);
}
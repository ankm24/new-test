#include <stdio.h>

int main() {
	
	int i = 1;
	
	int num = 100;

	int sum = 0;

	for (int i = 1; i < num; i++) {
		if (i % 4 == 0) {
			sum += i;
		}
	}
	printf("1부터 100까지의 숫자 중 4의 배수 숫자의 합은 %d\n", sum);
}
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
	printf("1���� 100������ ���� �� 4�� ��� ������ ���� %d\n", sum);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", "&a, &b");

	// 5���� ���� ����� ���������� �Է� (+,-,*,/,%)
	//printf("%d\n", a + b);
	//printf("%d\n", a - b);
	//printf("%d\n", a * b);
	//printf("%d\n", a / b);
	//printf("%d\n", a % b);

	printf("%d\n%d\n%d\n%d\n%d", a + b, a - b, a * b, a / b, a % b);
}
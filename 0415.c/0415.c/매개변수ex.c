#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int a,int b) {
	return a + b;
}
int sub(int a, int b) {
	return a - b;
}
int mul(int a, int b) {
	return a * b;
}
int div(int a, int b){
	if (a/b == -1) {
		printf("[���� : ��ȯ�� ����\n");
		return 0;
	}
	return a / b;
}
int num(int a, int b) {
	if (a%b == -1) {
		printf("[���� : ��ȯ�� ����\n");
		return 0;
	}
	return a % b;
}
int main() {
	int a, b;

	scanf("%d %d", &a, &b);

	printf("���� : %d + %d = %d\n", a, b, sum(a,b));
	printf("���� : %d - %d = %d\n", a, b, sub(a, b));
	printf("���� : %d x %d = %d\n", a, b, mul(a, b));
	printf("������ : %d / %d = %d\n", a, b, div(a, b));
	printf("�� : %d % %d = %d\n", a, b, num(a, b));
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//���� :: 2���� ���ڸ� �Է¹ް�,
	//�̵��� ���� �Է�
	//1. �Է°��� ������ 2�� ���� ����
	int a, b;

	//2. �ֻܼ󿡼� 2�� �� �Է¹ޱ� (a, b�� ����)
	//scanf("[����������]", &[���� ������ ����]);
	scanf("%d %d", &a, &b);

	printf("%d", a + b);
}
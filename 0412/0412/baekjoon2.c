#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char ch[101];
	scanf("%s", ch);
	printf("%d", strlen(ch));

	// 1. ���ڿ� �Է� (�ܾ� ���̴� �ִ� 100)
	char word[101];
	scanf("%s", &word);

	// 2. ���ڿ� ���� ���� (���̸� ������ ���� �ʿ�)
	int len = 0;
	for (int i = 0; word[i]!='\0'; i++) {	// '\0'�� ������ ��� ���� ����

		len++;	// ���ڸ� ������ �� ������ ���ɹ� -> '\0'�� �ƴ� ���ڸ� ���� ��
	}
	printf("%d", len);
}
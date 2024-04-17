#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main() {
	// 1. 1~5���� ���� �Է�
	int score[5];
	printf("����ó����� �ʱ� 1~5���� ������ �������� �Է����ּ���.\n");
	for (int i = 0; i < 5; i++) {
		scanf("%d", &score[i]);
	}
	bool pass = true;

	//2. �հ�/���հ� ���� ��� (+ ���� ����, ���� ��� ����)
	// 1) ���� ���� (�� ������ ����, 40�� �̻����� �̸����� �ľ�)
	for (int i = 0; i < 5; i++) {
		printf("%d���� : ", i + 1);
		if (score[i] >= 40) {
			printf("���\n");
		}
		else {
			printf("����\n");
			pass = false;	// �ϳ��� ������ �Ͼ�� �� �Ǳ� ������
		}
	}

	// 2) ���� ��� ���� (����� 60�� �̻����� �̸����� �ľ�)
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += score[i];
	}
	int average = sum / 5.0;
	if (average >= 60) {	// ��հ��� 60�� �̻��� �� => pass�� ���
		printf("��� %d������, pass\n", average);
	}
	else {		// ��հ��� 60�� �̸��� �� => fail�� ���
		printf("��� %d������, fail\n", average);
		pass = false;	// ���� ��տ� ���ؼ��� 60�� �̻��̾�� �ϱ� ������
				// �������� ���Ѵٸ� false������ ����
	}

	// 3. �հ�/���հ� ���� ���
	if (pass == true) {		// true���� �����ϰ� �ִٸ�, ���հ� ��Ұ� ����
		printf("\n�����մϴ�. ����ó����� �ʱ� ���迡 �հ��ϼ̽��ϴ�.\n");
	}
	else {		// pass = false�� ��� => ���հ� ��Ұ� �ϳ��� �־��ٸ�
		printf("\n����ó����� �ʱ� ���迡 ���հ��ϼ̽��ϴ�.\n");
	}
}

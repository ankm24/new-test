#include <stdio.h>

// main���� ���� num�� �Է¹ް�
// ��� �Լ��� Ȱ���Ͽ�
// num�� ���� ���丮��(num!) ���� 
// main���� ����Ͽ���.

// (���۸� ���� Ȱ���� �ص� �ǳ�, �帧 �ľǿ� ������ �α�)

// ��� �Լ��� ���丮�� ���ϱ�
int fac(int n) {
	if (n == 1) {	// ���� ���� : ���丮���� 1
		return 1;
	}
	else {		// ��������� ���� 1�� �ٿ����� ���丮�� ���
		return n*fac(n - 1);
	}
}

int main() {
	int num;
	scanf("%d", &num);

	int result = fac(num);
	printf("���丮�� %d! = %d\n", num, result);
}
#include <stdio.h>

int main() {
	// ������(pointer) :: "����Ű�� ��"
	//  ������ ������, ����Ű���� �ϴ� ������ �ּҰ��� ���´�.
	// *, &

	// ������ ���� ����, �ʱ�ȭ
	int n = 10;
	int* num = &n;
	// *num ������ ���ؼ�, n�� �ּҰ��� �������� ���� ȣ�⤷
	printf("n�� �ּҰ� : %d\n", num);
	printf("n�� �� : %d\n\n", *num);	// * :: �����ִ� �ּҰ����� �ٸ� ������ ����Ŵ

	// ���ڿ��� ����Ű�� ������(char) ���� ���
	char name[] = "Lee_yuna";
	printf("ù��° ���� : %c\n", name[0]);
	printf("�̸� : %s\n\n", name);

	char* ptName = name;
	printf("ù��° ���� : %c\n", *(ptName + 0)); 
	printf("ù��° ���� : %c\n", ptName[0]);
	printf("�̸� : %s\n\n", ptName);

	char first[] = "an";
	printf("ù��° ���� : %c\n", first[0]);
	printf("�̸� : %s\n\n", first);

	char* a = first;
	printf("ù��° ���� : %c\n", *(a + 0));
	printf("ù��° ���� : %c\n", a[0]);
	printf("�̸� : %s\n\n", a);
}
#include <stdio.h>

int main() {

	// 1. ���� ����(����) :: [�ڷ���] [�����̸�];
	//�ڷ��� :: int(������) /  double(�Ǽ���) / char(������)
	//���� ������ �� ���Ŀ���, ������ ���� ����.

	int myInt;
	double myReal;
	char myChar;

	//2. �� ���� :: [�����̸�] = [��];
	// = (������ ���� �������� "�����϶�")
	myInt = 4;
	myReal = 2.5;
	myChar = 'a';

	//printf()�� ������ ����ϱ�
	printf("<������ ����ϱ�>\n");
	printf("myInt �� :: \"%d\"\n", myInt);
	printf("myReal �� :: %.1f\n", myReal);
	printf("myChar �� :: %c\n", myChar);
}
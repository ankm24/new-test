#include <stdio.h>

// �ڷ��� :: int, double, char�� ����, ������ ����
// ����ü :: �� �ڷ����� ȥ���ؼ�, Ÿ���� ������ �����ϴ� ��
//		�پ��� �ڷ����� ���� ������ ���� 
	// "�ؾ(����)�� ������ "Ʋ"�� �����Ѵٰ� ���� �ȴ�.

// ���� :: ���(�̸�, ��ȭ��ȣ, ����, ������) ����ü ����(����)
// typedef => type definition (�ڵ带 �ۼ��ϴ� ���忡�� Ÿ���� ���� �����ϴ� Ű����)
typedef struct {
	// Person ��� :: �̸�, ��ȭ��ȣ, ����, ������
	// ��� :: ����ü ���� ���� �ϳ��ϳ�
	char name[20];
	char tel[20];
	int age;
	char blood;
}Person;

int main() {
	// * �Ʒ�ó�� ���� ���� ����/�迭�� �� �������� ����� ���� �� -> ����ü ���
	// user�� ���� �ʿ��� ����
	/*char user_name[20];
	int user_age;
	char user_tel[20];
	char user_num[20];*/

	// admin�� ���� �ʿ��� ����
	/*char admin_name[10];
	char admin_num[20];
	char admin_id[20];*/

	// me��� �̸����� Person Ÿ���� ���� ����
	// ����ü ��, ����/�迭 ������ ������� ���� �־���� ��
	//			{name,		tel,		age	,		blood}
	Person me = {"Ankm","010-2192-7041",32,'B'};
	
	// ����ü ��� ���� :: (����ü����).(�����)
	printf("�̸� : %s\n", me.name);
	printf("��ȭ��ȣ : %s\n", me.tel);
	printf("���� : %d\n", me.age);
	printf("������ : %c\n", me.blood);

	// ����ü = Ÿ��(�ڷ���)
	// int = 1;
	// Person = { "Ankm","010-2192-7041",32,'B' }
}
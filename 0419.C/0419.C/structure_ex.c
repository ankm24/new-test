#include <stdio.h>

// 1. ����ü ����(student)
struct Student {
	char num;
	char name;
	double credit[3];
	double gpa;
};

// 2. �Լ� ���� :: get_avr(Student)


// main ����
int main() {
	struct Student stu[3];		// 3���� �л��� ���� ����ü �迭 ����

	// 3�� �л��� �й�, �̸�, ���� ������ �Է¹ޱ�
	for (int j = 0; j < 3; j++) {
		scanf("%s %s", &stu[j].num, &stu[j].name);
		for (int i = 0; i < 3; i++) {
			scanf("%lf", &stu[j].credit[i]);
		}
	}
	for (int i = 0; i < 3; i++) {

	}
}


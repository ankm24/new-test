#include <stdio.h>

// 1. 구조체 선언(student)
struct Student {
	char num;
	char name;
	double credit[3];
	double gpa;
};

// 2. 함수 선언 :: get_avr(Student)


// main 내용
int main() {
	struct Student stu[3];		// 3명의 학생에 대한 구조체 배열 선언

	// 3명 학생의 학번, 이름, 학점 순차적 입력받기
	for (int j = 0; j < 3; j++) {
		scanf("%s %s", &stu[j].num, &stu[j].name);
		for (int i = 0; i < 3; i++) {
			scanf("%lf", &stu[j].credit[i]);
		}
	}
	for (int i = 0; i < 3; i++) {

	}
}


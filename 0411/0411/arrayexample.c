#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main() {
	// 1차원 배열을 활용하여 아래의 프로그램을 만들어라.
	// 정보처리기사 필기 응시자의 1~5과목 점수를 "입력받은 뒤"
	// 합격 / 불합격 여부를 출력하여라.
	// (합격 / 불합격 여부만 출력하여도 되고,
	// 과락 여부 및 평균 충족/미달 여부를 함께 출력하여도 상관없다.)
	// 이 때, 정보처리기사 필기 합격 조건은 아래와 같다.
	// - 각 과목의 점수는 모두 40점 이상이어야 하고
	// - 5과목 점수의 평균은 60점 이상이어야 한다.

	// 1. 응시자 과목 점수 입력받기
	// 배열 선언
	int score[5];
	printf("<과목 별 점수를 순차적으로 입력해주세요.> ");
	// 점수 입력
	for (int i = 0; i < 5; i++) {
		scanf("%d", &score[i]);
	}

	// 2. 점수의 총합
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += score[i];
		printf("\n%d번째 과목 : \n", i + 1);
		if (score[i] < 40) {
			printf("과락입니다.\n");
		}
		else {
			printf("통과입니다.\n");
		}
	}
	// 3. 점수의 평균
	
	int average = sum / 5.0;
	printf("\n평균 : %.1f\n\n", average);

	// 4. 평균 충족/미달 여부
		for (int i = 0; i < 5; i++) {
			if (average > 60) {
				printf("평균 충족입니다.\n");
				break;
			}
			else {
				printf("평균 미달입니다.\n");
				break;
			}
		}

	// 5. 합격,불합격 여부
		while (true) {
			if (score[i] >= 40 && average >= 60) {
				printf("\n정보처리기사 필기 시험에 합격하셨습니다.\n\n");
				break;
			}
			else {
				printf("\n정보처리기사 필기 시험에 불합격하셨습니다.\n\n");
				break;
			}
		}
		return 0;
	}
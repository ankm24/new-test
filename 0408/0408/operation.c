#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//대입연산자 + 산술연산자

	// 1. 2개 숫자 입력받기
	int num1, num2;
	scanf("%d %d", &num1, &num2);

	// num1 = num1 + num2;		// 두 숫자 합을 num1에 저장
	num1 += num2;
	printf("현재 num1 + num2 결과 :: %d\n", num1);

	num1 -= num2;
	printf("현재 num1 - num2 결과 :: %d\n", num1);

	num1 *= num2;
	printf("현재 num1 * num2 결과 :: %d\n", num1);

	num1 /= num2;
	printf("현재 num1 / num2 결과 :: %d\n", num1);

	num1 %= num2;		// 두 숫자의 나누기 나머지를 num1에 저장
	printf("현재 num1 %% num2 결과 :: %d\n", num1);
}
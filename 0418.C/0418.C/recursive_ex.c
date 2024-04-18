#include <stdio.h>

// main에서 숫자 num을 입력받고
// 재귀 함수를 활용하여
// num에 대한 팩토리얼(num!) 값을 
// main에서 출력하여라.

// (구글링 적극 활용을 해도 되나, 흐름 파악에 중점을 두기)

// 재귀 함수로 팩토리얼 구하기
int fac(int n) {
	if (n == 1) {	// 종료 조건 : 팩토리얼이 1
		return 1;
	}
	else {		// 재귀적으로 숫자 1씩 줄여가며 팩토리얼 계산
		return n*fac(n - 1);
	}
}

int main() {
	int num;
	scanf("%d", &num);

	int result = fac(num);
	printf("팩토리얼 %d! = %d\n", num, result);
}
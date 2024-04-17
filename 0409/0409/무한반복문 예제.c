#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	// 예제 :: 자판기 프로그램을 작성하시오.
	// //(if문 사용 권장. switch문은 불편)
	//	사용자에게 동전을 입력받은 뒤,
	//	음료 선택지 제시
	//	1) 콜라(1000원)
	//	2) 사이다(1100원)
	//	3) 포카리 스웨트(1800원)
	//	4) 레쓰비(800원)
	//	5) 카페라떼(2500원)
	//	0) 실행 종료
	// 사용자가 0을 입력하거나
	//더 이상 음료를 살 수 없을 때
	// 거스름돈을 제공하면서 실행 종료하라.

	// 1. 동전 입력받기
	int coin;
	printf("동전을 넣어주세요. ");
	scanf("%d", &coin);

	while (coin > 0) {

		// 2. 음료수들
		int drink;
		printf("<아래 숫자 중 하나를 입력해주세요.>\n");
		printf("1. 콜라(1000원)\n");
		printf("2. 사이다(1100원)\n");
		printf("3. 포카리 스웨트(1800원)\n");
		printf("4. 레쓰비(800원)\n");
		printf("5. 카페라떼(2500원)\n");
		printf("0. 실행종료\n");
		printf("메뉴 선택 : ");
		scanf("%d", &drink);

		if (drink == 1 && coin >= 1000) {
			coin -= 1000;

			printf("콜라가 제공되었습니다.");
			printf("남은 금액은 % d원입니다.\n", coin);
		}
		else if (drink == 2 && coin >= 1100) {
			coin -= 1100;

			printf("사이다가 제공되었습니다.");
			printf("남은 금액은 % d원입니다.\n", coin);
		}
		else if (drink == 3 && coin >= 1800) {
			coin -= 1800;

			printf("포카리스웨트가 제공되었습니다.");
			printf("남은 금액은 % d원입니다.\n", coin);
		}
		else if (drink == 4 && coin >= 800) {
			coin -= 800;

			printf("레쓰비가 제공되었습니다.");
			printf("남은 금액은 % d원입니다.\n", coin);
		}
		else if (drink == 5 && coin >= 2500) {
			coin -= 2500;

			printf("카페라떼가 제공되었습니다.");
			printf("남은 금액은 % d원입니다.\n", coin);
		}
	}
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main() {
	// 자판기 프로그램 (반복 수행)
	
	// 1. 동전 입력받기 (반복 수행X -> 반복문 바깥에 두기)
	int coin;
	printf("동전을 넣어주세요. ");
	scanf("%d", &coin);

	// 2. 자판기 프로그램 수행
	// 무한 반복문 :: 무한으로 반복되는 구문
	//			중괄호 안의 내용을 수행하는 중에서 중단점 설정 (break)
	// "어느 시점에서는 반드시 종료되게끔 설정하라."
	while (true) {
		// 현재의 돈으로 살 수 있는 음료수가 없을 때 -> 실행 종료
		if (coin < 800) {
			printf("%d원으로 잔액이 부족합니다.\n", coin);
			printf("실행을 종료합니다.\n");
			break;	// 어차피 실행 종료함
		}

		// 현재의 돈으로 살 수 있는 음료수가 있을 때 -> 선택지 제시
		printf("<아래 숫자 중 하나를 입력해주세요. >\n");
		printf("1. 콜라(1000원)\n");
		printf("2. 사이다(1100원)\n");
		printf("3. 포카리 스웨트(1800원)\n");
		printf("4. 레쓰비(800원)\n");
		printf("5. 카페라떼(2500원)\n");
		printf("0. 실행 종료\n");
		// 사용자의 선택 입력받기
		int menu;
		printf("메뉴 선택 : ");
		scanf("%d", &menu);

		// 사용자의 입력에 따라, 동작 수행
		// 조건문 :: 사용자가 어떤 음료를 선택했는가, 돈이 충분한가
		if (menu == 0) {
			printf("이용해주셔서 감사합니다. 거스름돈은 %d원입니다.\n", coin);
			break;		//실행 종료
		}
		else if (menu == 1 && coin >= 1000) {		// 콜라 (1000원)를 선택했을 때
			coin -= 1000;
			printf("\n콜라가 제공되었습니다. 남은 금액은 %d원입니다.\n\n", coin);
		}
		else if (menu == 2 && coin >= 1100) {		// 사이다 (1100원)를 선택했을 때
			coin -= 1100;
			printf("\n사이다가 제공되었습니다. 남은 금액은 %d원입니다.\n\n", coin);
		}
		else if (menu == 3 && coin >= 1800) {		// 포카리스웨트 (1800원)를 선택했을 때
			coin -= 1800;
			printf("\n포카리스웨트가 제공되었습니다. 남은 금액은 %d원입니다.\n\n", coin);
		}
		else if (menu == 4 && coin >= 800) {		// 레쓰비 (800원)를 선택했을 때
			coin -= 800;
			printf("\n레쓰비가 제공되었습니다. 남은 금액은 %d원입니다.\n\n", coin);
		}
		else if (menu == 5 && coin >= 2500) {		// 카페라떼 (2500원)를 선택했을 때
			coin -= 2500;
			printf("\n카페라떼가 제공되었습니다. 남은 금액은 %d원입니다.\n\n", coin);
		}
		else {		//예외적인 경우에 대한 처리
			// 1. 사용자가 메뉴를 잘못 골랐거나
			// 2. 구매하고자 하는 음료를 사지 못하거나(금액이 부족하거나)
			printf("메뉴를 잘못 골랐거나 해당 음료를 구매하기에 금액이 부족합니다.\n");
			printf("다시 선택해주세요.\n\n");
		}
	}
	// break를 만나면 여기로 이동
}
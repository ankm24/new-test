#include <stdio.h>

int main() {

	// 1. 변수 선언(생성) :: [자료형] [변수이름];
	//자료형 :: int(정수형) /  double(실수형) / char(문자형)
	//변수 선언을 한 직후에는, 쓰레기 값이 들어간다.

	int myInt;
	double myReal;
	char myChar;

	//2. 값 설정 :: [변수이름] = [값];
	// = (오른쪽 값을 왼쪽으로 "대입하라")
	myInt = 4;
	myReal = 2.5;
	myChar = 'a';

	//printf()로 변수값 출력하기
	printf("<변수값 출력하기>\n");
	printf("myInt 값 :: \"%d\"\n", myInt);
	printf("myReal 값 :: %.1f\n", myReal);
	printf("myChar 값 :: %c\n", myChar);
}
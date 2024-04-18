#include <stdio.h>

//int fac(int a) {
//	if (a == 0 || a == 1) {
//		return 1;
//	}
//	else {
//		return a*fac(a - 1);
//	}
//}
//
//int main() {
//	int N;
//	scanf("%d", &N);
//
//	int result = fac(N);
//	printf("ÆÑÅä¸®¾ó %d! = %d", N, result);
//}

int fibo(int n) {
	if (n >= 2)
		return fibo(n - 1) + fibo(n - 2);
	else if (n == 1) return 1;
	else return 0;
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d\n", fibo(n));
}
#include <stdio.h>

int main() {
	int a=0, b=0;
	scanf("%d %d", &a, &b);

	
	for (int i = a; i <= b; i++) {
		printf("%d", i);
		if (i != b) { printf("x"); }
	}
	int result=0;
	for (int i = a; i <= b; i++) {
		result*=i;
		i+=1;
	
	}
	printf("total : %d",result);
	
}
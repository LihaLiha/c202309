#include <stdio.h>

int main() {

	// 변수 선언 및 초기화
	int x = 4;
	int y = 2;
	int z;

	// 변수 연산 후 출력
	z = (x + y) * (x - y);
	printf("z = (x + y) * (x - y) = %d\n", z);
	
	// 변수 연산 후 출력
	z = (x * y) + (x / y);
	printf("z = (x * y) + (x / y) = %d\n", z);

	// 변수 연산 후 출력
	z = x + y + 2004;
	printf("z = x + y + 2004 = %d\n", z);
}
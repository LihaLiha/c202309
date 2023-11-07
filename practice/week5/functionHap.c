#include <stdio.h>

// 1부터  특정 값까지 더하는 함수
int hapf(int value);



void main() {
	printf("1부터 10까지의 합은 %d\n", hapf(10));
	printf("1부터 100까지의 합은 %d\n", hapf(100));
	printf("1부터 1000까지의 합은 %d\n", hapf(1000));
}


int hapf(int value) {
	int i;
	int hap = 0;

	// 1부터 value까지 수를 더하기
	for (i = 1; i <= value; i = i + 1) {
		hap = hap + i;
	}
	
	// 더한 합을 반환
	return hap;
}
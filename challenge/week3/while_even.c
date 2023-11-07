#include <stdio.h>

int main() {
	int i = 0; // 변수 선언 및 초기화


	while (i < 10) { // 반복 조건
		if (i % 2 == 0) { // i를 2로 나눈 나머지가 0일 때
			i++;
			continue; // i + 1을 하고 다음 반복으로 바로 넘어감
		}
		printf("%d hello world!\n", i); // i와 hello world! 출력
		i++;
	}
	return 0;
}
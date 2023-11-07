#include <stdio.h>

int main() {
	int i = 0; // 변수 선언 및 초기화
	do {
		if (i % 2 == 0) { // i를 2로 나눈 나머지가 0인 경우
			i++;			
			continue;		// i + 1을 한 후, 다음 반복으로 넘어감
		}
		printf("%d hello world!\n", i); // i 와 hello world 출력
		i++;
	} while (i < 10); // i가 10보다 작을 때만 반복

	return 0;
}
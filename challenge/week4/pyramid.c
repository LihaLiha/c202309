#include <stdio.h>

int main()
{
	int floor;
	printf("몇 층을 쌓겠습니까? (5~100)");
	// 층 수 입력받기
	scanf_s("%d", &floor);

	for (int i = 0; i < floor; i++) {	// floor 줄 출력
		for (int j = 0; j < floor - 1 - i; j++){  // S를 floor줄 -1 -i 만큼 출력
			printf("S");
		}
		for (int k = 0; k < i * 2 + 1; k++) { // *을 i*2+1만큼 출력
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
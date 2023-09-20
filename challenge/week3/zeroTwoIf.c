#include <stdio.h>

int main() {
	// 변수 선언
	int num = 0;

	// 번호 입력받기
	printf("숫자를 입력하시오: ");
	scanf_s("%d", &num);


	// 0 입력시 "zero" 출력
	if (num == 0) {
		printf("zero");
	}

	// 1 입력시 "one" 출력
	else if (num == 1) {
		printf("one");
	}

	// 2 입력시 "two" 출력
	else if (num == 2) {
		printf("two");
	}

	// 그 외 입력시 "not 0 ~ 2" 출력
	else {
		printf("not 0 ~ 2");
	}
	return 0;
}
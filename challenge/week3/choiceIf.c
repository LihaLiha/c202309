#include <stdio.h>

int main() {
	// 변수 선언
	int choice;

	// 번호와 메뉴 출력
	printf("1. 파일 저장\n");
	printf("2. 저장 없이 닫기\n");
	printf("3. 종료\n");

	// 번호 입력 받기
	scanf_s("%d", &choice);

	// 1 입력시 "파일을 저장합니다." 출력
	if (choice == 1) {
		printf("파일을 저장합니다.");
	}

	// 2 입력시 " 저장 없이 닫습니다." 출력
	else if (choice == 2) {
		printf("저장 없이 닫습니다.");
	}

	// 3 입력시 "종료합니다." 출력
	else if (choice == 3) {
		printf("종료합니다.");
	}
	
	// 그 외 입력시 "잘못 입력하셨습니다." 출력
	else {
		printf("잘못 입력하셨습니다.");
	}
	return 0;
}
#include <stdio.h>
#define MAX_TASKS 10
#define CHAR_NUM 100
#include <string.h>

char tasks[MAX_TASKS][CHAR_NUM] = { "" }; // 할 일 목록을 저장하기 위한 2차원 배열
int taskCount = 0; // 할 일 목록의 개수를 저장하는 변수


// 할 일을 저장하는 함수
void addTask(char task[]) {
	printf("할 일을 입력하세요 (공백 없이 입력하세요): ");
	scanf_s("%s", task, (int)sizeof(task));
	strcpy_s(tasks[taskCount], sizeof(tasks[taskCount]), task);
	printf("할 일 ""%s""가 저장되었습니다\n\n", task);
}

// 저장된 할 일을 삭제하는 함수
void delTask(int delIndex, int taskCount) {

	printf("%d. %s : 할 일을 삭제합니다.\n", delIndex, tasks[delIndex - 1]);

	// 특정 인덱스의 할 일 삭제 후 뒤에 있는 할 일 앞으로 옮기기
	for (int i = delIndex; i < taskCount + 1; i++) {
		strcpy_s(tasks[i - 1], sizeof(tasks[i]), tasks[i]);
	}
}

// 저장된 할 일을 출력하는 함수
void printTask(int taskCount) {
	for (int i = 0; i < taskCount; i++) {
		printf("%d. %s \n", i + 1, tasks[i]);
	}
	printf("\n");
}

int main() {
	printf("TODO 리스트 시작! \n");

	while (1) {
		int choice = -1; // 사용자 입력 메뉴를 저장하기 위한 변수

		// 사용자에게 메뉴 출력, 번호 입력 받기
		printf("------------------\n");
		printf("메뉴를 입력해주세요.\n");
		printf("1. 할 일 추가\n2. 할 일 삭제\n3. 목록 보기\n4. 종료\n5.할 일 수정\n");
		printf("현재 할 일 수 = %d\n", taskCount);
		printf("------------------\n");
		scanf_s("%d", &choice);

		int terminate = 0;
		int delIndex = -1; // 할 일 삭제를 위한 인덱스

		int modifyIndex = -1; // 할 일 수정을 위한 인덱스
		char ch;

		// 입력에 따른 기능 수행
		switch (choice) {
		case 1:		// 1번 입력 시, 할 일 추가 함수 호출
			addTask(tasks[taskCount]);
			taskCount++;
			break;
		case 2:		// 2번 입력 시, 할 일 삭제 함수 호출
			printTask(taskCount); // 삭제를 위한 할 일 리스트 출력
			printf("삭제할 할 일의 번호를 입력해주세요. (1부터 시작):");
			scanf_s("%d", &delIndex);
			// 입력한 숫자가 목록의 수를 벗어날 시
			if (delIndex > taskCount || delIndex <= 0) {
				printf("삭제 범위가 벗어났습니다.\n");
			}
			else {
				delTask(delIndex, taskCount);
				taskCount -= 1;
			}
			break;
		case 3:		// 3번 입력 시, 할 일 리스트 출력 함수 호출
			printf("할 일 목록\n");
			printTask(taskCount);
			break;
		case 4:		// 4번 입력 시, 프로그램 종료
			terminate = 1;
			break;
		case 5:		// 5번 입력 시, 할 일 수정
			printf("수정할 할 일의 번호를 입력해주세요. (1부터 시작): ");
			scanf_s("%d", &modifyIndex);		// 수정할 할 일 번호 입력받기
			ch = getchar();
			printf("새로운 할 일을 입력해주세요");
			scanf_s("%s", tasks[modifyIndex - 1], (int)sizeof(tasks[modifyIndex - 1]));		//새로운 일 입력받아 tasks[modifyIndex - 1]에 저장
			printf("새로운 할 일이 추가되었습니다: %d. %s\n", modifyIndex, tasks[modifyIndex - 1]);
			break;
		default:
			printf("잘못된 선택입니다. 다시 선택하세요.\n");
		}

		if (terminate == 1) {
			printf("종료를 선택하셨습니다. 프로그램을 종료합니다.\n");
			break;
		}
		// 할 일이 다 찼는지 체크
		if (taskCount == 10) {
			printf("할 일이 %d개로 다 찼습니다.", taskCount);
			break;
		}
	}
	return 0;
}
#include <stdio.h>
#define STUDENTS 5

void classifyStudents(int scores[], char targetGrade) {
	printf("학생 성적 분류: \n");	
	char grade = ' ';
	for (int i = 0; i < STUDENTS; i++) { // 점수에 따른 성적 분류
		if (scores[i] >= 90) {
			grade = 'A';
		}
		else if (scores[i] >= 80) {
			grade = 'B';
		}
		else if (scores[i] >= 70) {
			grade = 'C';
		}
		else if (scores[i] >= 60) {
			grade = 'D';
		}
		else {
			grade = 'F';
		}
		if (targetGrade == grade) {
			printf("%d 학생은 %c 점수를 받았습니다.", i + 1, targetGrade);
		}
	}
}


int main() {
	int scores[STUDENTS];

	// 점수 입력 받기
	for (int i = 0; i < STUDENTS; i++) {
		printf("학생 %d의 성적을 입력하세요: ", i + 1);
		scanf_s("%d", &scores[i]);
	}

	char ch = getchar();

	char target; // 성적 입력받기
	printf("특정 점수 (A, B , C, D, F)를 입력하시오: ");
	scanf_s("%c", &target, 1);

	//  입력받은 성적 출력
	classifyStudents(scores, target);

	// 초기화
	return 0;
}


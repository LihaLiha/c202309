#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student {
	char* name;
	int  score;
}STUDENT;


// 함수 원형 선언
void initializeStudent(STUDENT* grade);
void displayStudent(STUDENT* grade);
void classifyStudents(target);
void sumScores(STUDENT* grade);
void averageScores(STUDENT* grade);


int main() {
	int numStudents;

	// 유저에게 학생 수 입력받기
	printf("학생 수를 입력해주세요: ");
	scanf_s("%d", &numStudents);

	// 구조체 포인터를 사용하여 동적으로 배열 할당
	STUDENT* scores = (STUDENT*)malloc(numStudents * sizeof(STUDENT));

	if (scores == NULL) {
		return 1;
	}


	// 각 구조체에 값을 입력하고 출력
	for (int i = 0; i < numStudents; i++) {
		printf("\n학생%d의 정보를 입력해주세요: \n", i + 1);
		initializeStudent(&scores[i]);
		displayStudent(&scores[i]);
	}

	// 합, 평균 출력
	int sum = 0;
	for (int i = 0; i < numStudents; i++) {
		sum = sum + scores[i].score;

	}

	double average = 0;
	average = sum / numStudents;

	printf("점수의 총 합은 %d입니다.", sum);
	printf("평균 점수는 %2lf입니다.", average);

	// 학생 순위 출력
	



	// 할당된 메모리 해제
	for (int i = 0; i < numStudents; i++) {
		free(scores[i].name);
		free(scores[i].score);
	}
	free(scores);


	


	/* char target;
	printf("특정 점수 (A, B, C, D, F)를 입력하시오: ");
	scanf_s("%c", &target, 1);

	// 입력받은 성적 출력
	classifyStudents(target); */


	return 0;
}

// 구조체 초기화 함수
void initializeStudent(STUDENT* grade) {
	// 문자열을 입력받아 동적으로 메모리 할당
	printf("학생 이름을 입력해주세요: ");
	char temp[100];
	scanf_s("%s", temp, (int)sizeof(temp));
	grade->name = (char*)malloc((strlen(temp) + 1) * sizeof(char));
	strcpy_s(grade->name, strlen(temp) + 1, temp);

	printf("점수를 입력해주세요: ");
	scanf_s("%d", &grade->score);
}

// 구조체 출력 함수
void displayStudent(STUDENT* grade) {
	printf("\n학생 정보\n");
	printf("이름: %s\n", grade->name);
	printf("점수: %d\n", grade->score);
}


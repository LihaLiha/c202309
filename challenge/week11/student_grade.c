#include <stdio.h>
#define STUDENTS 5

void classifyStudents(int* scores, char targetGrade) {
	printf("학생 성적 분류: \n");
	char grade = ' ';

	for (int i = 0; i < STUDENTS; i++) {
		// 점수에 따른 성적 분류
		if (*(scores + i) >= 90) {
			grade = 'A';
		}
		else if (*(scores + i) >= 80) {
			grade = 'B';
		}
		else if (*(scores + i) >= 70) {
			grade = 'C';
		}
		else if (*(scores + i) >= 60) {
			grade = 'D';
		}
		else {
			grade = 'F';
		}
		if (targetGrade == grade) {
			printf("%d 학생은 %c 점수를 받았습니다.\n", i + 1, targetGrade);
		}
	}
}



int sumScores(int scores[]) { // 성적 합 구하기
	int sum = 0;

	for (int i = 0; i < STUDENTS; i++) {
		sum += scores[i];

	}
	return sum;
}

double averageScores(int scores[]) {  // 합을 이용해 평균 구하기
	int average = 0;

	// 합을 학생 수로 나누기
	average = sumScores(scores) / STUDENTS;

	return average;
}

void printRanks(int scores[]) {  // 성적 순위 구하기
	int rank[STUDENTS]; 
	int cnt;

	for (int i = 0; i < STUDENTS; i++) {
		cnt = 0;
		for (int j = 0; j < STUDENTS; j++) {
			if (scores[i] < scores[j]) {
				cnt++;
			}
		}
		rank[i] = cnt + 1;
	}

	return rank;
}

int main() {
	int scores[STUDENTS];


	// 점수 입력 받기
	for (int i = 0; i < STUDENTS; i++) {
		printf("학생 %d의 성적을 입력하세요: ", i + 1);
		scanf_s("%d", &scores[i]);
	}

	/*	int *p = scores
		for(int i = 0; i < STUDENTS; i++) {
			printf("학생 %d의 성적을 입력하세요: ", i + 1);
			scanf_s("%d",*/	
		

	char ch = getchar();

	char target;
	printf("특정 점수 (A, B, C, D, F)를 입력하시오: ");
	scanf_s("%c", &target, 1);

	//  입력받은 성적 출력
	classifyStudents(scores, target);


	// 합, 평균 출력
	int sum = sumScores(scores);
	double average = averageScores(scores);
	printf("학생들 점수의 총 합은 %d 이고, 평균 값은 %lf입니다.\n", sum, average);

	// 학생 순위 출력
	printRanks(scores);

	// 초기화
	return 0;
}


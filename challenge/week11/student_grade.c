#include <stdio.h>
#define STUDENTS 5

void classifyStudents(int* scores, char targetGrade) {
	printf("�л� ���� �з�: \n");
	char grade = ' ';

	for (int i = 0; i < STUDENTS; i++) {
		// ������ ���� ���� �з�
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
			printf("%d �л��� %c ������ �޾ҽ��ϴ�.\n", i + 1, targetGrade);
		}
	}
}



int sumScores(int scores[]) { // ���� �� ���ϱ�
	int sum = 0;

	for (int i = 0; i < STUDENTS; i++) {
		sum += scores[i];

	}
	return sum;
}

double averageScores(int scores[]) {  // ���� �̿��� ��� ���ϱ�
	int average = 0;

	// ���� �л� ���� ������
	average = sumScores(scores) / STUDENTS;

	return average;
}

void printRanks(int scores[]) {  // ���� ���� ���ϱ�
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


	// ���� �Է� �ޱ�
	for (int i = 0; i < STUDENTS; i++) {
		printf("�л� %d�� ������ �Է��ϼ���: ", i + 1);
		scanf_s("%d", &scores[i]);
	}

	/*	int *p = scores
		for(int i = 0; i < STUDENTS; i++) {
			printf("�л� %d�� ������ �Է��ϼ���: ", i + 1);
			scanf_s("%d",*/	
		

	char ch = getchar();

	char target;
	printf("Ư�� ���� (A, B, C, D, F)�� �Է��Ͻÿ�: ");
	scanf_s("%c", &target, 1);

	//  �Է¹��� ���� ���
	classifyStudents(scores, target);


	// ��, ��� ���
	int sum = sumScores(scores);
	double average = averageScores(scores);
	printf("�л��� ������ �� ���� %d �̰�, ��� ���� %lf�Դϴ�.\n", sum, average);

	// �л� ���� ���
	printRanks(scores);

	// �ʱ�ȭ
	return 0;
}


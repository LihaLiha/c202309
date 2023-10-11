#include <stdio.h>
#define STUDENTS 5

void classifyStudents(int scores[], char targetGrade) {
	printf("�л� ���� �з�: \n");	
	char grade = ' ';
	for (int i = 0; i < STUDENTS; i++) { // ������ ���� ���� �з�
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
			printf("%d �л��� %c ������ �޾ҽ��ϴ�.", i + 1, targetGrade);
		}
	}
}


int main() {
	int scores[STUDENTS];

	// ���� �Է� �ޱ�
	for (int i = 0; i < STUDENTS; i++) {
		printf("�л� %d�� ������ �Է��ϼ���: ", i + 1);
		scanf_s("%d", &scores[i]);
	}

	char ch = getchar();

	char target; // ���� �Է¹ޱ�
	printf("Ư�� ���� (A, B , C, D, F)�� �Է��Ͻÿ�: ");
	scanf_s("%c", &target, 1);

	//  �Է¹��� ���� ���
	classifyStudents(scores, target);

	// �ʱ�ȭ
	return 0;
}


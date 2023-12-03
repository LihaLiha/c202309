#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student {
	char* name;
	int  score;
}STUDENT;


// �Լ� ���� ����
void initializeStudent(STUDENT* grade);
void displayStudent(STUDENT* grade);
void classifyStudents(target);
void sumScores(STUDENT* grade);
void averageScores(STUDENT* grade);


int main() {
	int numStudents;

	// �������� �л� �� �Է¹ޱ�
	printf("�л� ���� �Է����ּ���: ");
	scanf_s("%d", &numStudents);

	// ����ü �����͸� ����Ͽ� �������� �迭 �Ҵ�
	STUDENT* scores = (STUDENT*)malloc(numStudents * sizeof(STUDENT));

	if (scores == NULL) {
		return 1;
	}


	// �� ����ü�� ���� �Է��ϰ� ���
	for (int i = 0; i < numStudents; i++) {
		printf("\n�л�%d�� ������ �Է����ּ���: \n", i + 1);
		initializeStudent(&scores[i]);
		displayStudent(&scores[i]);
	}

	// ��, ��� ���
	int sum = 0;
	for (int i = 0; i < numStudents; i++) {
		sum = sum + scores[i].score;

	}

	double average = 0;
	average = sum / numStudents;

	printf("������ �� ���� %d�Դϴ�.", sum);
	printf("��� ������ %2lf�Դϴ�.", average);

	// �л� ���� ���
	



	// �Ҵ�� �޸� ����
	for (int i = 0; i < numStudents; i++) {
		free(scores[i].name);
		free(scores[i].score);
	}
	free(scores);


	


	/* char target;
	printf("Ư�� ���� (A, B, C, D, F)�� �Է��Ͻÿ�: ");
	scanf_s("%c", &target, 1);

	// �Է¹��� ���� ���
	classifyStudents(target); */


	return 0;
}

// ����ü �ʱ�ȭ �Լ�
void initializeStudent(STUDENT* grade) {
	// ���ڿ��� �Է¹޾� �������� �޸� �Ҵ�
	printf("�л� �̸��� �Է����ּ���: ");
	char temp[100];
	scanf_s("%s", temp, (int)sizeof(temp));
	grade->name = (char*)malloc((strlen(temp) + 1) * sizeof(char));
	strcpy_s(grade->name, strlen(temp) + 1, temp);

	printf("������ �Է����ּ���: ");
	scanf_s("%d", &grade->score);
}

// ����ü ��� �Լ�
void displayStudent(STUDENT* grade) {
	printf("\n�л� ����\n");
	printf("�̸�: %s\n", grade->name);
	printf("����: %d\n", grade->score);
}


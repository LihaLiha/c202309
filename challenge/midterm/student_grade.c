#include <stdio.h>
#define STUDENTS 5
#define SUBJECTS 3
#define CHARNUM 20

double CalculateStudentAverage(double scores[], int numSubjects);
double CalculateSubjectAverage(double scores[][SUBJECTS], int numStudents, int subjectIndex);

int main() {
	char subjectNames[SUBJECTS][CHARNUM] = { "����", "�߰����", "�⸻���" };
	char studentNames[STUDENTS][CHARNUM] = { "" }; // �л� �̸��� ����� �迭
	double studentScores[STUDENTS][SUBJECTS] = { 0.0 }; // �л��� ���� �� ������ ������ ����� �迭
	printf("�л� %d���� �̸��� �Է��� �����մϴ�. \n", STUDENTS);


	// TODO 1.1: �л� �̸��� �Է¹޴� �ڵ� ��� �ۼ�
	for (int i = 0; i < STUDENTS; i++) {
		scanf_s("%s", studentNames[i], (int)sizeof(studentNames[i]));
	}



	// �Էµ� �л� �̸��� �� ����Ǿ����� Ȯ���ϴ� �ڵ� ���
	printf("�л� �̸��� ��� �ԷµǾ����ϴ�. \n");
	printf("�Էµ� �л� �̸��� ������ �����ϴ�. \n");
	for (int i = 0; i < STUDENTS; i++) {
		printf("%s", studentNames[i]);
		if (i != STUDENTS - 1) {
			printf(", ");
		}
	}
	printf("\n");
	printf("--------------------\n");
	printf("�� �л��� %s, %s, %s ������ ���ʴ�� �Է����ּ���. (���� ����)\n ", subjectNames[0], subjectNames[1], subjectNames[2]);


	// TODO 1.2: �л����� ���� �� ������ �Է¹޴� �ڵ� ��� �ۼ�

	for (int i = 0; i < STUDENTS; i++) {
		for (int j = 0; j < SUBJECTS; j++) {
			scanf_s("%lf", &studentScores[i][j]);
		}
	}



	printf("�л����� ���� ������ ��� �Է� �Ǿ����ϴ�.\n");
	printf("--------------------\n");
	printf("�л� �� ������ ������ �����ϴ� \n");


	// TODO 1.3: �л� �� ��� ������ ����ϴ� �ڵ� ��� �ۼ� >> ���� �Լ�ȭ
	// HINT1: 2�� for��: (1) �л��� (2) ������� ���� �հ� ����� ���ϰ� ���
	// HINT2: ��¹� �ڵ� = printf("\t%s�� ��� ����: %.2lf\n", studentNames[i], finalScore);

	for (int i = 0; i < STUDENTS; i++) {
		double finalScore = CalculateStudentAverage(studentScores[i], SUBJECTS);
		printf("\t%s�� ��� ����: %.2lf\n", studentNames[i], finalScore);
	}




	printf("--------------------\n");
	printf("���� �� ��� ������ �Ʒ��� �����ϴ�. \n");
	// TODO 1.4: ���� �� ��� ������ ����ϴ� �ڵ� ��� �ۼ� >> ���� �Լ�ȭ
	// HINT1: 2�� for������ (1) ���� (2) �л����� ���� �հ� ����� ���ϰ� ���	
	// HINT2: ��¹� �ڵ� = printf("\t%s�� ��� ������ %.2lf �Դϴ�.\n", subjectNames[i], subjectScore);

	for (int j = 0; j < SUBJECTS; j++) {
		double subjectScore = CalculateSubjectAverage(studentScores, STUDENTS, j);
		printf("\t%s�� ��� ������ %.2lf �Դϴ�.\n", subjectNames[j], subjectScore);
	}



	printf("���α׷��� �����մϴ�. ");
	return 0;
}


// �л� �� ��� ������ ���ϴ� �Լ�
double CalculateStudentAverage(double scores[], int numSubjects) {
	double sum = 0.0;
	for (int i = 0; i < numSubjects; i++) {
		sum += scores[i];
	}
	return sum / numSubjects;
}

// ���� �� ��� ������ ���ϴ� �Լ�
double CalculateSubjectAverage(double scores[][SUBJECTS], int numStudents, int subjectIndex) {
	double sum = 0.0;
	for (int i = 0; i < numStudents; i++) {
		sum += scores[i][subjectIndex];
	}
	return sum / numStudents;
}
#include <stdio.h>

int main() {
	// ���� ����
	int num = 0;

	// ��ȣ �Է¹ޱ�
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%d", &num);


	// 0 �Է½� "zero" ���
	if (num == 0) {
		printf("zero");
	}

	// 1 �Է½� "one" ���
	else if (num == 1) {
		printf("one");
	}

	// 2 �Է½� "two" ���
	else if (num == 2) {
		printf("two");
	}

	// �� �� �Է½� "not 0 ~ 2" ���
	else {
		printf("not 0 ~ 2");
	}
	return 0;
}
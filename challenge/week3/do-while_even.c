#include <stdio.h>

int main() {
	int i = 0; // ���� ���� �� �ʱ�ȭ
	do {
		if (i % 2 == 0) { // i�� 2�� ���� �������� 0�� ���
			i++;			
			continue;		// i + 1�� �� ��, ���� �ݺ����� �Ѿ
		}
		printf("%d hello world!\n", i); // i �� hello world ���
		i++;
	} while (i < 10); // i�� 10���� ���� ���� �ݺ�

	return 0;
}
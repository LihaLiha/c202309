#include <stdio.h>

int main() {
	int i = 0; // ���� ���� �� �ʱ�ȭ


	while (i < 10) { // �ݺ� ����
		if (i % 2 == 0) { // i�� 2�� ���� �������� 0�� ��
			i++;
			continue; // i + 1�� �ϰ� ���� �ݺ����� �ٷ� �Ѿ
		}
		printf("%d hello world!\n", i); // i�� hello world! ���
		i++;
	}
	return 0;
}
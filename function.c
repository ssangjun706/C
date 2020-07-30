#include <stdlib.h>
#include <time.h>

void print_numbers(int arr[]) {
	srand(time(NULL));
	for (int i = 0; i < 25; i++)
		arr[i] = rand() % 5;

	for (int i = 0; i < 25; i++) {
		if (i % 5 == 0)
			printf("\n");
		printf("%2d ", arr[i]);
	}
}

void calculate_frequency(int arr[], int fre[]) {
	for (int i = 0; i < 25; i++) {
		fre[arr[i]]++;
	}
}

void check_time(void)
{
	srand(time(NULL));
	clock_t start, end;
	double elapsedTime;
	start = clock();

	while (kbhit() == 0)
	{
		end = clock();
		elapsedTime = (double)(end - start) / CLK_TCK;
		if (elapsedTime >= 5)
		{
			puts("���ѽð� �ʰ�!");
			exit(0);
		}
	}
}

int find_answer(int fre[]) {
	int max = -99999;
	int maxNum;

	for (int i = 0; i < 5; i++) {
		if (max < fre[i]) {
			max = fre[i];
			maxNum = i;
		}
	}

	return maxNum;
}

void intro_game(void) {
	puts("��Ÿ�� ���� �߿���");
	puts("���� ���� ��Ÿ�� ���ڸ� ã�ƶ�\n");
	puts("���� �ð��� 5���Դϴ�,");
	puts("�ƹ� Ű�� ������ �����մϴ�...");

	getch();
}
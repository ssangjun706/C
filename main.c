#include <stdio.h>
#include <stdlib.h>
#include "function.h"

int main(void)
{
	intro_game();

	int numberArr[25] = { 0 };
	int frequency[5] = { 0 };

	system("cls");

	print_numbers(numberArr);
	calculate_frequency(numberArr, frequency);
	int answer = find_answer(frequency);

	printf("\n\n");
	printf("�󵵼��� ���� ���� ���ڴ�? ");

	check_time();

	int choice;
	scanf("%d", &choice);

	if (answer == choice)
		puts("�¾ҽ��ϴ�.\n");
	else
		puts("Ʋ�Ƚ��ϴ�.\n");

	printf("�󵵼��� ���� ���� ���� : %d, Ƚ�� : %d\n", answer, frequency[answer]);

	return 0;
}
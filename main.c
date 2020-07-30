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
	printf("빈도수가 가장 많은 숫자는? ");

	check_time();

	int choice;
	scanf("%d", &choice);

	if (answer == choice)
		puts("맞았습니다.\n");
	else
		puts("틀렸습니다.\n");

	printf("빈도수가 가장 많은 숫자 : %d, 횟수 : %d\n", answer, frequency[answer]);

	return 0;
}
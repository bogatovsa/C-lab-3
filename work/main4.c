#include <stdio.h>
#include "task4.h"


int main()
{
	char buf[N] = {NULL};
	printf("Enter your line : ");
	fgets(buf, N, stdin);
	buf[strlen(buf) - 1] = '\0';
	printf("\nSumm of numbers in your line is %d\n", getSum(buf));
	system("pause");
	return 0;
}

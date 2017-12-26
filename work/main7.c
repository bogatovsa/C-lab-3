#include <stdio.h>
#define N 256

int main()
{
	char buf[N] = {0};
	int num[N] = {0};

	printf("Enter your line: ");
	fgets(buf, N, stdin);
	buf[strlen(buf) - 1] = '\0';

	for (int i = 0; buf[i]!='\0'; i++)
	{
		num[buf[i]]++;	
	}
	for (int i = 0; i < N; i++)
	{
		if (num[i] > 0)
			printf("%c - %d\n", i, num[i]);
	}
	system("\npause");
	return 0;
}
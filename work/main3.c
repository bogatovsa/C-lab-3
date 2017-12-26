#include <stdio.h>
#include "task3.h"

int main() 
{
	char buf[N] = { NULL };
	char word[N] = { NULL };
	printf("Entet the line: ");
	fgets(buf, N, stdin);
	buf[strlen(buf) - 1] = '\0';

	printf("Its length is %d letters.\n", getMaxWord(buf, word));

	system("\npause");

	return 0;
}


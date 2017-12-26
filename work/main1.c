#include <stdio.h>
#include "task1.h"
#include <string.h>
#define N 1000

main()
{
	printf("Enter the line: ");
	char buf[N] = { 0 };
	fgets(buf, N, stdin);
	buf[strlen(buf) - 1] = '\0';
	printf("The count of words in your line is - %d\n", wordCount(buf));

system("pause");
return 0;
}
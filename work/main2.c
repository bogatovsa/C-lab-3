#include <stdio.h>
#include <string.h>

#define N 1000

main()
{
	char buf[N] = { 0 };
	int flag = 0, countword = 0, count = 0, i = 0;
	printf("Enter your line: ");
	fgets(buf, N, stdin);
	putchar('\n');
	buf[strlen(buf) - 1] = ' ';
	while (buf[i])
	{
		if (buf[i] != ' ' && flag == 0) 
		{
			flag = 1;
			count = 0; 
			countword++; 
		}
		if (buf[i] != ' ' && flag == 1) 
		{
			count++; 
			putchar(buf[i]);
		}
		if (buf[i] == ' ' && flag == 1) 
		{
			flag = 0;
			printf("\n  The lenght of word is %i\n", count);
		}
	i++;
	}

	printf("\nThe count of words in your string is %i\n\n", countword);

	system("pause");

	return 0;

}
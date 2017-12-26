#include "task3.h"

int getMaxWord(char buf[], char word[])
{
	int i = 0, j = 0, flag = 0, len = 0, maxlen = 0;
	char maxword[N] = { 0 };
	while (buf[i]) 
	{
		if (buf[i] != ' ' && flag == 0)
		{
			flag = 1;
			maxword[j] = buf[i];	
			j++;
		}
		else if (buf[i] != ' ' && flag == 1)
		{
			maxword[j] = buf[i];
			j++;
		}
		else if ((buf[i] == ' ' || buf[i] == '\0') && flag == 1)
		{
			flag = 0;
			j = 0;
		}
		if (strlen(maxword) > strlen(word))
		{
			for (int c = 0; c <= strlen(maxword); c++)
			{
				word[c] = maxword[c];
				len++;
			}
		}
	i++;
	}
	printf("The longest word in yoir line is - ");
	for (int c = 0; c < len; c++)
	{
		putchar(word[c]);
	}
	return strlen(word);
}
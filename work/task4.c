#include "task4.h"

int getSum(char buf[])
{
	int sum = 0, num =0, flag = 0, i = 0, raz = 0;
	while (buf[i])
	{
		if (buf[i] >= '0' && buf[i] <= '9' && flag == 0)
		{
			flag = 1;
			num = 0;
			num = num * 10 + (buf[i] - '0');
			raz++;
			i++;
			while (buf[i] >= '0' && (buf[i] <= '9' && flag == 1))
			{
				raz++;
				num = num * 10 + (buf[i] - '0');
				if (raz == 2)
				{
					flag = 0;
					i--;
				}
				i++;
			}
			flag = 0;
			raz = 0;
			printf("%d\n", num);
			sum += num;
		}
		i++;
	}
	return sum;
}
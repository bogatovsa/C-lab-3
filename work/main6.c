#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#include "task6.h"

#define N 10

main()
{
	int sum = 0;
	int arr[N] = { NULL };
	srand(time(0));
	for (int i = 0; i < N; i++)
	{
		if (rand() % 2 == 0)
			arr[i] = -1 * (rand() % 10);
		else
			arr[i] = (rand() % 10);
		printf("%d ", arr[i]);
	}

	printf("Sum is %d\n", getSumMaxMin(arr,N));

	system("pause");
	return 0;
}




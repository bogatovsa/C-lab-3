int getSumMaxMin(int arr[], int N)
{
	int minpos = 0, maxpos = 0, sum = 0;

	for (int i = 0; i < N; i++)
	{
		if (arr[i] > arr[maxpos])
			maxpos = i;
		else if (arr[i] < arr[minpos])
			minpos = i;
	}
	if (maxpos > minpos)
	{
		for (int c = minpos + 1; c < maxpos; c++)
			sum += arr[c];
	}
	if (maxpos < minpos)
	{
		for (int j = maxpos + 1; j < minpos; j++)
			sum += arr[j];
	}
	printf("\nMax element position - %d", maxpos);
	printf("\nMin element position - %d\n", minpos);

	return sum;
}
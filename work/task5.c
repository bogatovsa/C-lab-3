int getSumInt(int arr[], int N)
{
	int Ppos = 0, Npos = 0, sum = 0;

	for (int i = 0; i < N; i++)
	{
		if (arr[i] < 0)
		{
			Npos = i;
			break;
		}
	}
	for (int j = N+1; j >= 0; j--)
	{	
		if (arr[j] > 0)
		{
			Ppos = j;
			break;
		}	
	}
	printf("\nFirst negative position - %d", Npos);
	printf("\nLast positive position - %d\n", Ppos);
	for (int c = Npos + 1; c < Ppos; c++)
		sum += arr[c];

return sum;
}
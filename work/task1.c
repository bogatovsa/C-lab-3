int wordCount(char buf[])
{
	int  i = 0, count = 0, flag = 0;
	while (buf[i])
	{
		if (buf[i] != ' ' && flag == 0) 
		{		
			flag = 1;
			count++;
			if (buf[i + 1] == '\0')
			{
				break;
			}
		}
		else if (buf[i] == ' ' && flag == 1) 
		{	
			flag = 0;
			if (buf[i + 1] == '\0')
			{
				break;
			}			
		}
		i++;
	}	
	return count;
}
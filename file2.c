int maxNumber (int number)
{
	int num2 = number;
	int count = (number == 0) ? 1 : 0;
	while (number != 0)
	{
		count ++;
		number /= 10;
	}
	int mnum = 0;
	for (int i = 0; i < count; ++i)
	{
		int doingNum = num2 % 10;
		if (mnum < doingNum)
		{
			mnum = doingNum;
		}
		num2 /= 10;
	}
	return mnum;
}



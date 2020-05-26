#include <stdio.h>

int main()
{
	int numnum[5];
	int i = 1;
	for (int i = 0; i < 7; ++i)
	{
		numnum[i] = i;
	}
	printf("\n%d\n", numnum[9]);
	printf("\n%d\n", numnum[10]);
	numnum[11] = 56;
	printf("\n%d\n", numnum[11]);
	return 0;
}

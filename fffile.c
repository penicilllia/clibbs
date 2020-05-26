#include <stdio.h>

int main()
{
	int numnum[5];
	int i = 1;
	while (1)
	{
		numnum[i] = i;
		++i;
	}
	printf("\n%d\n", numnum[9]);
	printf("\n%d\n", numnum[10]);
	numnum[11] = 56;
	printf("\n%d\n", numnum[11]);
	return 0;
}

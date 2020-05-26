#include <stdio.h>
#include <math.h>
int summ(int x, int y)
{
	int z;
	z = x + y;
	return(z);
}
int main()
{
	int a;
	int b;
	printf("\nEnt 1: ");
	scanf("%d", &a);
	printf("\nEnt 2: ");
	scanf("%d", &b);
	int c;
	c = summ(a, b);
	printf("\nRez: %d\n", c);
	return 0;
}

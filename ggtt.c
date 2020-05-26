#include <stdio.h>
#include "./mylib1.h"

int main()
{
	int a;
	printf("\nEnter ...");
	scanf("%d", &a);
	int b = lenOfNumber(a);
	printf("\n Is %d", b);
	return 0;
}

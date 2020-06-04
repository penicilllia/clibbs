#include <stdio.h>
#include <stdlib.h>
#include "./mylib1.h"
#include "./mylib2.h"

int main()
{
	int a;
	printf("\nEnter the num: ");
	scanf("%d", &a);
	//int lennum = lenOfNumber(a);
	//int maxnum = maxNumber(a);
	//printf("\nLen of numb is: %d", lennum);
	//printf("\nMax num is: %d\n", maxnum);
	float k = 0;
	printf("\n\nHell World\n\n");
	int r[2];
	for (int i = 0; i<10; ++i)
	{
		r[i] = i;
		printf("\n%d", r[i]);
	}
	while(k < 1)
	{
		k -= 0.01;
		char* c = malloc(sizeof(10));
		//c = "hello world";
		//printf("%s\n", c);
	}

	return 0;
}

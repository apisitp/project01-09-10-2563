#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int x, k = 1;
	printf("input");
	scanf("%d", &x);
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < k; j++)
		{
			if (j==0||i==j||i==x-1) 
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		k++;
		printf("\n");
	}

	return 0;
	
}


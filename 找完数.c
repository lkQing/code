#include<stdio.h>
int main()
{
	int a, b, c;
	scanf_s("%d %d", &a, &b);
	int i = 0, j = 0;
	int s = 0;
	int count = 0;
	for (c = a; c <= b; c++)
	{
		s = 0;
		for (i = 1; i < c; i++)
		{
			if (c % i == 0)
			{
				s += i;
			}
		}
		if (s == c)
		{
			printf("%d = 1", c);
			for (j = 2; j < c; j++)
			{
				if (c % j == 0)
				{
					printf(" + %d ", j);
				}
			}
			printf("\n");
			count++;
		}
	}
	if (count == 0)
	{
		printf("None");
	}
	return 0;
}//找完数

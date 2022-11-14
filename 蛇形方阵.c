#include<stdio.h>
int main()
{
	int arr[10][10] = { 0 };
	int i, j;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			arr[i][j] = 0;
		}
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%d ", arr[i][j]);
		} 
		printf("\n");
	}
	int n, k = 0;
	int x = 0, y = 1;
	scanf_s("%d", &n);
	while (k < n * n)
	{
		while (x < n && arr[y][x + 1] == 0)
		{
			arr[y][++x] = ++k;
		}
		while (y < n && arr[y + 1][x] == 0)
		{
			arr[++y][x] = ++k; 
		}
		while (x > 1 && arr[y][x - 1] == 0)
		{
			arr[y][--x] = ++k;
		}
		while (y > 1 && arr[y - 1][x] == 0)
		{
			arr[--y][x] = ++k;
		}
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}//蛇形方阵

#include<stdio.h>
//int main()
//{
//	int arr[10][10];
//	int i, j;
//	int n;
//	scanf_s("%d", &n);
//	for (i = 0; i < n + 1; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0 || j == i)
//			{
//				arr[i][j] = 1;
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	int a;
//	for (i = 0; i < n + 1; i++)
//	{
//		for (a = 0; a < n - i; a++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("%2d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i, j;
//	for (i = 9; i > 0 ; i--)
//	{
//		for (j = 9; j >= i; j--)
//		{
//			printf("%2d * %2d = %2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	int num1 = 0, num2 = 1;
//	int i;
//	for (i = 1; i <= n; i++)
//	{
//		num2 = num2 * i;
//		num1 = num1 + num2;
//	}
//	printf("%d", num1);
//	return 0;
//}


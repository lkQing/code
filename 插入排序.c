#include<stdio.h>
int main()
{
	int arr[10] = { 2,3,5,7,8,9,4,1,22,60 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i, j;
	for (i = 0; i < sz; i++)
	{
		int temp = arr[i];
		for (j = i - 1; j >= 0 && arr[j] > temp; j--)
		{
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = temp;
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}//插入排序
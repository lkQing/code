#include<stdio.h>
int main()
{
	int arr[8] = { 1,2,3,4,6,8,11,9};
	int i, j;
	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 8; j++)
		{
			if(arr[i]<arr[j])
			{
				arr[i] = arr[i] + arr[j];
				arr[j] = arr[i] - arr[j];
				arr[i] = arr[i] - arr[j];
			}
		}
	}
	for (i = 0; i < 8; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}//选择排序
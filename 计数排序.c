#include<stdio.h>
int main()
{
	int arr[10] = { 2,800,5,800,30,8,4,20,18,11 };
	int arr1[1000] = {0};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr1[arr[i]]+=1;
	}
	sz = sizeof(arr1) / sizeof(arr1[0]);
	for (i = 0; i < sz; i++)
	{
		while(arr1[i] != 0)
		{
			printf("%d ", i);
			arr1[i]--;
		}
	}
	return 0;
}//计数排序
#include<stdio.h>
#include<stdlib.h>
void merge(int arr[], int left, int mid, int right)
{
	int* ar = (int*)malloc((right - left + 1) * sizeof(int));
	int p1 = left;
	int p2 = mid + 1;
	int p = 0;
	while (p1 <= mid && p2 <= right)
	{
		ar[p++] = arr[p1] <= arr[p2] ? arr[p1++] : arr[p2++];
	}
	while (p1 <= mid)
	{
		ar[p++] = arr[p1++];
	}
	while (p2 <= right)
	{
		ar[p++] = arr[p2++];
	}
	for (p = 0; p < right - left + 1; p++)
	{
		arr[left + p] = ar[p];
	}
	free(ar);
}
void process(int arr[], int left, int right)
{
	if (left == right)
	{
		return 0;
	}
	int mid = left + ((right - left) >> 1);
	process(arr, left, mid);
	process(arr, mid + 1, right);
	merge(arr, left, mid, right);
}
int main()
{
	int arr[10] = { 2,3,1,6,5,4,8,9,7,0 };
	int left = 0;
	int right = 9;
	process(arr, left, right);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}//归并排序
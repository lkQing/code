#include<stdio.h>
int quicksort(int arr[], int left, int right)
{
	int pivot = arr[left];
	while (left < right)
	{
		while (left < right && arr[right] >= pivot)
		{
			right--;
		}
		arr[left] = arr[right];
		while (left < right && arr[left] <= pivot)
		{
			left++;
		}
		arr[right] = arr[left];	
	}
	arr[left] = pivot;
	return left;
}
void sort(int arr[], int left, int right)
{
	if (left < right)
	{
		int p = quicksort(arr, left, right);
		sort(arr, left, p - 1);
		sort(arr, p + 1, right);
	}
}
int main()
{
	int arr[10] = { 5,4,1,2,33,5,4,9,6,10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	sort(arr, left, right);
	int i = 0;
	for (i = 0; i <= right; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}//快速排序

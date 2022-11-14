#include<stdio.h>
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    int i, j;
    int sz = sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<sz;i++)
    {
        for(j=0;j<sz-i-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
                arr[j] = arr[j]+arr[j+1];
                arr[j+1] = arr[j]-arr[j+1];
                arr[j] = arr[j]-arr[j+1];
            }
        }
    }
    for(i=0;i<sz;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}//冒泡排序

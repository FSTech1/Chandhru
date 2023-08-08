/*
Name:
Date:
Description:
sample i/p:
sample o/p:
 */
#include<stdio.h>
int fixed_point_arr(int *,int);
int main()
{
    int n;
    printf("Enter the array size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements:");
    int i;
    for(i = 0;i < n;i++)
    {
	scanf("%d",(arr + i));
    }
    int res = fixed_point_arr(arr,n);
    if(res >= 0)
    {
	printf("Fixed Point in this array is %d\n",res);
    }
    else
    {
	printf("There is no fixed point in this array\n");
    }
    return 0;
}
int fixed_point_arr(int *arr,int size)
{
    int i;
    for(i = 0;i < size;i++)
    {
	if(i == arr[i])
	    return i;
    }
    return -1;
}


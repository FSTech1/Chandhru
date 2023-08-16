/*
Name:
Date:
Description:
sample i/p:
sample o/p:
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements:");
    int i;
    for(i = 0;i < n;i++)
    {
	scanf("%d",(arr + i));
    }
    int high1,high2;
	if(arr[0] > arr[1])
	{
		high1 = arr[0];
		high2 = arr[1];
	}
	else
	{
		high1 = arr[1];
		high2 = arr[0];
	}
    for(i = 0;i < n;i++)
    {
	if(arr[i] > high1)
	{
	    high2 = high1;
	    high1 = arr[i];
	}
	else if(high1 > arr[i] && high2 < arr[i])
	{
	    high2 = arr[i];
	}
    }
    int highest = high1 + high2;
    printf("The highest element is %d that can be achieved from two elements is %d,%d\n",highest,high1,high2);
    return 0;
}

/*
Name:
Date:
Description:
sample i/p:
sample o/p:
*/
#include<stdio.h>
void equilibrium_point(int arr[],int size);
int main()
{
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements:");
    int i;
    for(i = 0;i < n;i++)
    {
	scanf("%d",(arr + i));
    }
    equilibrium_point(arr,n);
    return 0;
}
void equilibrium_point(int arr[],int size)
{
    int i,l_sum = 0,j;
    for(i = 0;i < size;i++)
    {
	int r_sum = 0;
	for(j = i + 1;j < size;j++)
	{
	    r_sum = r_sum + arr[j];
	}
	if(l_sum == r_sum)
	{
	    printf("Equilibrium point is %d\n",i);
	    break;
	}
	l_sum = l_sum + arr[i];
    }
    printf("Equilibrium point is not found\n");
}

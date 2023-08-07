/*
Name:
Date:
Description:
sample i/p:
sample o/p:
 */
#include<stdio.h>
int Func_Publish(unsigned short int, int);
int main()
{
    unsigned  short int num = 0xFE;
    int n,res;
    printf("Enter the bit position:");
    scanf("%d",&n);
    res = Func_Publish(num,n);
    if(res != -1)
    {
	if(res != 0)
	{
	    printf("Entered bit position is set\n");
	}
	else
	{
	    printf("Entered bit is position clear\n");
	}
    }
    else
    {
	printf("Invalid bit position\n");
    }
    return 0;
}
int Func_Publish(unsigned short int num,int n)
{
    if(n >= 0 && n < (sizeof(num) * 8))
    {
	if(num & (1 << n))
	{
	    return 1;
	}
	else
	{
	    return 0;
	}
    }
    return -1;
}





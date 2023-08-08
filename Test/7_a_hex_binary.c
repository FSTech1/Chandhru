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
    int n = 0xFF;
    int i;
    for(i = 7;i >= 0;i--)
    {
        if(n & (1 << i))
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    printf("\n");
    return 0;
}

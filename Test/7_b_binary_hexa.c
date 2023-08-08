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
    long int num,hexa = 0,i = 1,rem;
    printf("Enter the binary num:");
    scanf("%ld",&num);
    while(num != 0)
    {
	rem = num % 10;
	hexa = hexa + rem * i;
	i = i * 2;
	num = num / 10;
    }
    printf("Equivalent hexadecimal value is %lx\n",hexa);
    return 0;
}
